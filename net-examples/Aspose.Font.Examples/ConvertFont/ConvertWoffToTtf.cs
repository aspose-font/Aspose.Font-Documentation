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
        }

        private void WoffToTtfExample1()
        {
            Console.WriteLine("WOFF to TTF ex: 1");

            //ExampleStart: 1
            string fontPath = Path.Combine(DataDir, "Montserrat-Regular.woff");
            FontDefinition fontDefinition = new FontDefinition(FontType.TTF, new FontFileDefinition("woff", new FileSystemStreamSource(fontPath)));
            Font font = Font.Open(fontDefinition);

            string outPath = Path.Combine(OutputDir, "WoffToTtf_out1.ttf");
            FileStream outStream = File.Create(outPath);

            font.SaveToFormat(outStream, FontSavingFormats.TTF);
            //ExampleEnd: 1
        }

        private void WoffToTtfExample2()
        {
            Console.WriteLine("WOFF to TTF ex: 2");

            //ExampleStart: 2
            byte[] fontMemoryData = File.ReadAllBytes(DataPath("Montserrat-Bold.woff"));
            FontDefinition fontDefinition = new FontDefinition(FontType.TTF, new FontFileDefinition("woff", new ByteContentStreamSource(fontMemoryData)));
            TtfFont ttfFont = Aspose.Font.Font.Open(fontDefinition) as TtfFont;
            
            string outPath = Path.Combine(OutputDir, "WoffToTtf_out2.ttf");
            FileStream outStream = File.Create(outPath);

            ttfFont.SaveToFormat(outStream, FontSavingFormats.TTF);
            //ExampleEnd: 2
        }
    }
}
