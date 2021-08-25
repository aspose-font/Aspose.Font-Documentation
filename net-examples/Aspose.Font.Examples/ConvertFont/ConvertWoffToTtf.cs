using Aspose.Font.Sources;
using Aspose.Font.Ttf;
using System;
using System.IO;

namespace Aspose.Font.Examples.ConvertFont
{
    class ConvertWoffToTtf : BaseExamples
    {
        public ConvertWoffToTtf(string folderName) : base(folderName) { }

        public override void Run()
        {
            Console.WriteLine("Run Convert WOFF to TTF examples");

            WoffToTtfExample1();
            WoffToTtfExample2();
            WoffToTtfExample3();
        }

        private void WoffToTtfExample1()
        {
            Console.WriteLine("WOFF to TTF ex: 1");

            //ExampleStart: 1
            // Open woff font
            string fontPath = Path.Combine(DataDir, "Montserrat-Regular.woff");
            FontDefinition fontDefinition = new FontDefinition(FontType.TTF, new FontFileDefinition("woff", new FileSystemStreamSource(fontPath)));
            Font font = Font.Open(fontDefinition);

            // Ttf output settings
            string outPath = Path.Combine(OutputDir, "WoffToTtf_out1.ttf");
            FileStream outStream = File.Create(outPath);

            // Convert woff to ttf
            font.SaveToFormat(outStream, FontSavingFormats.TTF);
            //ExampleEnd: 1
        }

        private void WoffToTtfExample2()
        {
            Console.WriteLine("WOFF to TTF ex: 2");

            //ExampleStart: 2
            // Open woff font
            byte[] fontMemoryData = File.ReadAllBytes(DataPath("Montserrat-Bold.woff"));
            FontDefinition fontDefinition = new FontDefinition(FontType.TTF, new FontFileDefinition("woff", new ByteContentStreamSource(fontMemoryData)));
            TtfFont ttfFont = Aspose.Font.Font.Open(fontDefinition) as TtfFont;

            // Ttf output settings
            string outPath = Path.Combine(OutputDir, "WoffToTtf_out2.ttf");
            FileStream outStream = File.Create(outPath);

            // Convert woff to ttf
            ttfFont.SaveToFormat(outStream, FontSavingFormats.TTF);
            //ExampleEnd: 2
        }

        private void WoffToTtfExample3()
        {
            Console.WriteLine("WOFF to TTF ex: 3");

            //ExampleStart: 3
            // Open woff font
            string fontPath = Path.Combine(DataDir, "Montserrat-Regular.woff");
            FontDefinition fontDefinition = new FontDefinition(FontType.TTF, new FontFileDefinition("woff", new FileSystemStreamSource(fontPath)));
            Font font = Font.Open(fontDefinition);

            // Convert woff to ttf
            font.Convert(FontType.TTF);
            font.Save(Path.Combine(OutputDir, "WoffToTtf_out3.ttf"));
            //ExampleEnd: 3
        }
    }
}
