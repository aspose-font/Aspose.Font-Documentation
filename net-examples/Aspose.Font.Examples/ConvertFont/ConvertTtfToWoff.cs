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
            string fontPath = Path.Combine(DataDir, "Montserrat-Regular.ttf");
            FontDefinition fontDefinition = new FontDefinition(FontType.TTF, new FontFileDefinition(new FileSystemStreamSource(fontPath)));
            Font font = Font.Open(fontDefinition);

            string outPath = Path.Combine(OutputDir, "TtfToWoff_out1.woff");
            FileStream outStream = File.Create(outPath);

            font.SaveToFormat(outStream, FontSavingFormats.WOFF);
            //ExampleEnd: 1
        }

        private void TtfToWoffExample2()
        {
            Console.WriteLine("TTF to WOFF ex: 2");

            //ExampleStart: 2
            byte[] fontMemoryData = File.ReadAllBytes(DataPath("Montserrat-Bold.ttf"));
            FontDefinition fontDefinition = new FontDefinition(FontType.TTF, new FontFileDefinition(new ByteContentStreamSource(fontMemoryData)));
            TtfFont ttfFont = Font.Open(fontDefinition) as TtfFont;

            string outPath = Path.Combine(OutputDir, "TtfToWoff_out2.woff");
            FileStream outStream = File.Create(outPath);

            ttfFont.SaveToFormat(outStream, FontSavingFormats.WOFF);
            //ExampleEnd: 2
        }
    }
}
