using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Aspose.Font.Examples.LoadFont
{
    abstract class LoadFontBase: BaseExamples
    {        
        protected void PrintExampleTitle(string title, int exNum)
        {
            Console.WriteLine(string.Format("\n{0} ex: {1}", title, exNum));
        }

        protected void PrintSimpleFontInfo(Font font, string fontSource)
        {
            Console.WriteLine(string.Format("\nFont loaded from {0}\n\t has name: \"{1}\",\n\t glyph count : {2}",
                fontSource, font.FontName, font.NumGlyphs));
        }
    }
}
