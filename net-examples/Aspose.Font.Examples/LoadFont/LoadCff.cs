using Aspose.Font.Sources;
using System;
using System.IO;

namespace Aspose.Font.Examples.LoadFont
{
    class LoadCff : LoadFontBase
    {
        public LoadCff() : base()
        {

        }

        public override void Run()
        {
            Console.WriteLine("\nRun load fonts of compact font format examples");

            LoadExample1();
            LoadExample2();
        }

        private void LoadExample1()
        {
            PrintExampleTitle("Loading from file CenturyGothic.cff using FileInfo object", 1);

            //ExampleStart: 1
            string fontPath = Path.Combine(DataDir, "CenturyGothic.cff");
            string fontSource = "file CenturyGothic.cff";

            // Initialize FontDefinition object passing CFF as FontType value and using FontFileDefinition
            // based on FileInfo object, fileExtension value is calculated automatically from FileInfo fields.
            FontFileDefinition fileDef = new FontFileDefinition(new FileInfo(fontPath));
            FontDefinition fontDef = new FontDefinition(FontType.CFF, fileDef);

            // Load font and print results
            Font font = Font.Open(fontDef);
            PrintSimpleFontInfo(font, fontSource);
            //ExampleEnd: 1
        }

        private void LoadExample2()
        {
            PrintExampleTitle("Loading from byte array", 2);

            //ExampleStart: 2
            string fontPath = Path.Combine(DataDir, "CenturyGothic.cff");
            string fontSource = "memory byte array based on file CenturyGothic.cff";

            // Load font binary data into byte array
            byte[] fontBytes = File.ReadAllBytes(fontPath);

            // Initialize FontDefinition object  passing CFF as FontType value, "cff" as fileExtension value, 
            // and ByteContentStreamSource object based on fontBytes array
            FontDefinition fontDef = new FontDefinition(FontType.CFF, "ttf", new ByteContentStreamSource(fontBytes));

            // Load font and print results
            Font font = Font.Open(fontDef);
            PrintSimpleFontInfo(font, fontSource);
            //ExampleEnd: 2
        }
    }
}
