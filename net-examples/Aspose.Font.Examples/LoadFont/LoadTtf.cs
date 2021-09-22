using Aspose.Font.Sources;
using System;
using System.IO;

namespace Aspose.Font.Examples.LoadFont
{
    class LoadTtf: LoadFontBase
    {
        public LoadTtf(): base()
        {

        }

        public override void Run()
        {
            Console.WriteLine("\nRun load TrueType fonts examples");

            LoadExample1();
            LoadExample2();
            LoadExample3();
            LoadExample4();
        }

        private void LoadExample1()
        {
            PrintExampleTitle("Loading from file Montserrat-Regular.ttf using FileSystemStreamSource object", 1);

            //ExampleStart: 1
            string fontPath = Path.Combine(DataDir, "Montserrat-Regular.ttf");
            string fontSource = "file Montserrat-Regular.ttf";

            // Initialize FontDefinition object passing TTF as FontType value and using FontFileDefinition
            // based on FileSystemStreamSource object, set fileExtension to "ttf"
            FontFileDefinition fileDef = new FontFileDefinition("ttf", new FileSystemStreamSource(fontPath));
            FontDefinition fontDef = new FontDefinition(FontType.TTF, fileDef);

            // Load font and print results
            Font font = Font.Open(fontDef);
            PrintSimpleFontInfo(font, fontSource);
            //ExampleEnd: 1
        }

        private void LoadExample2()
        {
            PrintExampleTitle("Loading from file Montserrat-Regular.ttf using FileInfo object", 2);

            //ExampleStart: 2
            string fontPath = Path.Combine(DataDir, "Montserrat-Regular.ttf");
            string fontSource = "file Montserrat-Regular.ttf";

            // Initialize FontDefinition object passing TTF as FontType value and using FontFileDefinition
            // based on FileInfo object, fileExtension value is calculated automatically from FileInfo fields.
            FontFileDefinition fileDef = new FontFileDefinition(new FileInfo(fontPath));
            FontDefinition fontDef = new FontDefinition(FontType.TTF, fileDef);

            // Load font and print results
            Font font = Font.Open(fontDef);
            PrintSimpleFontInfo(font, fontSource);
            //ExampleEnd: 2
        }

        private void LoadExample3()
        {
            PrintExampleTitle("Loading from file Montserrat-Regular.ttf excluding FontFileDefinition object from initialization chain", 3);

            //ExampleStart: 3
            string fontPath = Path.Combine(DataDir, "Montserrat-Regular.ttf");
            string fontSource = "file Montserrat-Regular.ttf";

            // Initialize FontDefinition object passing TTF as FontType value, "ttf" as fileExtension value, 
            // and FileSystemStreamSource object. Parameter 'fileExtension' here is not duplicate value 
            // for parameter 'FontType' and it's needed for correct font format detection
            FontDefinition fontDef = new FontDefinition(FontType.TTF, "ttf", new FileSystemStreamSource(fontPath));

            // Load font and print results
            Font font = Font.Open(fontDef);
            PrintSimpleFontInfo(font, fontSource);
            //ExampleEnd: 3
        }

        private void LoadExample4()
        {
            PrintExampleTitle("Loading from byte array", 4);

            //ExampleStart: 4
            string fontPath = Path.Combine(DataDir, "Montserrat-Regular.ttf");
            string fontSource = "memory byte array based on file Montserrat-Regular.ttf";

            // Load font binary data into byte array
            byte[] fontBytes = File.ReadAllBytes(fontPath);

            // Initialize FontDefinition object  passing TTF as FontType value, "ttf" as fileExtension value, 
            // and ByteContentStreamSource object based on fontBytes array
            FontDefinition fontDef = new FontDefinition(FontType.TTF, "ttf", new ByteContentStreamSource(fontBytes));

            // Load font and print results
            Font font = Font.Open(fontDef);
            PrintSimpleFontInfo(font, fontSource);
            //ExampleEnd: 4
        }
    }
}
