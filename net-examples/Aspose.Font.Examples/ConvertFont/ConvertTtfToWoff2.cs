using Aspose.Font.Sources;
using Aspose.Font.Ttf;
using System;
using System.IO;

namespace Aspose.Font.Examples.ConvertFont
{
    class ConvertTtfToWoff2 : BaseExamples
    {
        public ConvertTtfToWoff2(string folderName) : base(folderName) { }

        public override void Run()
        {
            Console.WriteLine("Run Convert TTF to WOFF2 examples");

            TtfToWoff2Example1();
            TtfToWoff2Example2();
        }

        private void TtfToWoff2Example1()
        {
            Console.WriteLine("TTF to WOFF2 ex: 1");

            //ExampleStart: 1
            string fontPath = Path.Combine(DataDir, "Montserrat-Regular.ttf");
            FontDefinition fontDefinition = new FontDefinition(FontType.TTF, new FontFileDefinition(new FileSystemStreamSource(fontPath)));
            Font font = Font.Open(fontDefinition);

            string outPath = Path.Combine(OutputDir, "TtfToWoff2_out1.woff2");
            FileStream outStream = File.Create(outPath);

            font.SaveToFormat(outStream, FontSavingFormats.WOFF2);
            //ExampleEnd: 1
        }

        private void TtfToWoff2Example2()
        {
            Console.WriteLine("TTF to WOFF2 ex: 2");

            //ExampleStart: 2
            byte[] fontMemoryData = File.ReadAllBytes(DataPath("Montserrat-Bold.ttf"));
            FontDefinition fontDefinition = new FontDefinition(FontType.TTF, new FontFileDefinition(new ByteContentStreamSource(fontMemoryData)));
            TtfFont ttfFont = Font.Open(fontDefinition) as TtfFont;

            string outPath = Path.Combine(OutputDir, "TtfToWoff2_out2.woff2");
            FileStream outStream = File.Create(outPath);

            ttfFont.SaveToFormat(outStream, FontSavingFormats.WOFF2);
            //ExampleEnd: 2
        }
    }
}
