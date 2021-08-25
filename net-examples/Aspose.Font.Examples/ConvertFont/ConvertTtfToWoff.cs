using Aspose.Font.Sources;
using Aspose.Font.Ttf;
using System;
using System.IO;

namespace Aspose.Font.Examples.ConvertFont
{
    class ConvertTtfToWoff : BaseExamples
    {
        public ConvertTtfToWoff(string folderName) : base(folderName) { }

        public override void Run()
        {
            Console.WriteLine("Run Convert TTF to WOFF examples");

            TtfToWoffExample1();
            TtfToWoffExample2();
        }

        private void TtfToWoffExample1()
        {
            Console.WriteLine("TTF to WOFF ex: 1");

            //ExampleStart: 1
            // Open ttf font
            string fontPath = Path.Combine(DataDir, "Montserrat-Regular.ttf");
            FontDefinition fontDefinition = new FontDefinition(FontType.TTF, new FontFileDefinition(new FileSystemStreamSource(fontPath)));
            Font font = Font.Open(fontDefinition);

            // Woff output settings
            string outPath = Path.Combine(OutputDir, "TtfToWoff_out1.woff");
            FileStream outStream = File.Create(outPath);

            // Convert ttf to woff
            font.SaveToFormat(outStream, FontSavingFormats.WOFF);
            //ExampleEnd: 1
        }

        private void TtfToWoffExample2()
        {
            Console.WriteLine("TTF to WOFF ex: 2");

            //ExampleStart: 2
            // Open ttf font
            byte[] fontMemoryData = File.ReadAllBytes(DataPath("Montserrat-Bold.ttf"));
            FontDefinition fontDefinition = new FontDefinition(FontType.TTF, new FontFileDefinition(new ByteContentStreamSource(fontMemoryData)));
            TtfFont ttfFont = Font.Open(fontDefinition) as TtfFont;

            // Woff output settings
            string outPath = Path.Combine(OutputDir, "TtfToWoff_out2.woff");
            FileStream outStream = File.Create(outPath);

            // Convert ttf to woff
            ttfFont.SaveToFormat(outStream, FontSavingFormats.WOFF);
            //ExampleEnd: 2
        }
    }
}
