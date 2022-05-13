using System;
using System.IO;
using System.Drawing;
using System.Collections.Generic;
using Aspose.Font.Sources;
using Aspose.Font.Glyphs;
using Aspose.Font.RenderingPath;

namespace Aspose.Font.Examples.Glyphs
{
    class GlyphMetrics: BaseExamples
    {
        private const string FontName = "Montserrat-Regular";
        private const char GlyphName = 'A';
        private Font _font;

        public GlyphMetrics(): base() { }

        public override void Run()
        {
            Console.WriteLine("\nRun glyph metrics examples");
            Console.WriteLine(string.Format("\nThese examples will use font \"{0}\" and glyph for '{1}' symbol", 
                FontName, GlyphName));
            InitFont();

            CalculateStringWidth();
            PrintGlyphBbox();
            PrintGlyphPointsCoordinates();
        }

        private void CalculateStringWidth()
        {
            PrintExampleTitle("Calculate string width", 1);

            //Declare text and other constants
            const string text = "Hello world";
            const int fontSize = 10;

            //Declare variable for string width
            double width = 0;

            //Get glyph for each letter in text and calculate width for whole text.
            //The same result can be achieved using method font.Metrics.MeasureString(text, fontSize).
            foreach (char symbol in text)
            {
                GlyphId gid = this._font.Encoding.DecodeToGid(symbol);
                Glyph glyph = this._font.GetGlyphById(gid);
                width += (glyph.WidthVectorX / this._font.Metrics.UnitsPerEM) * fontSize;
            }            

            //Print output results
            Console.WriteLine(string.Format("Width for text \"{0}\" with font size {2} is equal {3}." , 
                text, FontName, fontSize, width));
        }

        private void PrintGlyphBbox()
        {
            PrintExampleTitle("Glyph's BBox and left side bearing", 2);

            //Get glyph for symbol 'A' 
            Glyph glyph = this._font.GetGlyphById(this._font.Encoding.DecodeToGid(GlyphName));

            //Print BBox and left side bearing
            Console.WriteLine(string.Format("Glyph '{0}' BBox: {1}, left side bearing: {2}.",
                            GlyphName, GetBBoxString(glyph.GlyphBBox), glyph.LeftSidebearingX));
        }

        private string GetBBoxString(FontBBox bBox)
        {
            return string.Format("{{ XMin = {0}, YMin = {1}, XMax = {2}, YMax = {3}  }}", bBox.XMin, bBox.YMin, bBox.XMax, 
                bBox.YMax);
        }

        private void PrintGlyphPointsCoordinates()
        {
            PrintExampleTitle("Retrieving glyph points coordinates", 3);
            Point[] glyphPoints = GetGlyphPoints(this._font.GetGlyphById(this._font.Encoding.DecodeToGid(GlyphName)));

            Console.WriteLine("Points for glyph '{0}':", GlyphName);
            int columnSize = 3, columnNum = 0;
            for(int ptNum = 0; ptNum < glyphPoints.Length; ptNum++)
            {
                Console.Write(string.Format("{{ X = {0}, Y = {1} }}", glyphPoints[ptNum].X, glyphPoints[ptNum].Y));

                if (ptNum == (glyphPoints.Length - 1))
                    return;
                if (columnNum == (columnSize - 1))
                {
                    Console.Write(",\r\n");
                    columnNum = 0;
                }
                else
                {
                    Console.Write(", ");
                    columnNum++;
                }
                
            }
        }

        /// <summary>
        /// Next method calculates all glyph points with coordinates. 
        /// Logic used to calculate points is simple and it doesn't extract
        /// glyph contours. To divide whole path on contours use such 
        /// type as <see cref="ClosePath"/> when iterating path segments.
        /// </summary>
        /// <param name="glyph">glyph to get points from</param>
        /// <returns>All points calculated</returns>
        Point[] GetGlyphPoints(Glyph glyph)
        {
            //Declare resultant list with pints
            List<Point> points = new List<Point>();

            //Init service reference on IPathSegment
            IPathSegment prevSegment = null;

            //Iterate all glyph path segments and collect points
            foreach (IPathSegment segment in glyph.Path.Segments)
            {
                if ((segment is LineTo)
                    || (segment is CurveTo))
                {
                    if (prevSegment is MoveTo)
                    {
                        MoveTo moveTo = prevSegment as MoveTo;
                        AddPoint((int)moveTo.X, (int)moveTo.Y, points);
                    }
                    if (segment is LineTo)
                    {
                        LineTo line = segment as LineTo;
                        AddPoint((int)line.X, (int)line.Y, points);
                    }
                    else if (segment is CurveTo)
                    {
                        CurveTo curve = segment as CurveTo;
                        AddPoint((int)curve.X1, (int)curve.Y1, points);
                        AddPoint((int)curve.X2, (int)curve.Y2, points);
                        AddPoint((int)curve.X3, (int)curve.Y3, points);
                    }
                }
                prevSegment = segment;
            }

            return points.ToArray();
        }

        private void AddPoint(int x, int y, List<Point> points)
        {
            Point p = new Point();
            p.X = x;
            p.Y = y;
            points.Add(p);
        }

        private void InitFont()
        {            
            string fontPath = Path.Combine(DataDir, FontName + ".ttf");
            FontDefinition fontDefinition = new FontDefinition(FontType.TTF, new FontFileDefinition(new FileSystemStreamSource(fontPath)));
            this._font = Font.Open(fontDefinition);
        }

    }
}
