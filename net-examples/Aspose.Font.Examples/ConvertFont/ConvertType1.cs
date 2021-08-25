using Aspose.Font.Sources;
using System;
using System.IO;

namespace Aspose.Font.Examples.ConvertFont
{
    class ConvertType1 : BaseExamples
    {
        public ConvertType1(string folderName) : base(folderName) { }

        public override void Run()
        {
            Console.WriteLine("Run Convert Type1 to TTF/WOFF/WOFF2 examples");

            Type1ToTtfExample1();
            Type1ToTtfExample2();
            Type1ToWoffExample();
            Type1ToWoff2Example();
        }

        
        private void Type1ToTtfExample1()
        {
            Console.WriteLine("Type1 to TTF ex: 1");

            //ExampleStart: 1
            // Open Type 1 font
            string fontPath = Path.Combine(DataDir, "Courier.pfb");
            FontDefinition fontDefinition = new FontDefinition(FontType.Type1, new FontFileDefinition("pfb", new FileSystemStreamSource(fontPath)));
            Font font = Font.Open(fontDefinition);

            // Ttf output settings
            string outPath = Path.Combine(OutputDir, "Type1ToTtf_out1.ttf");
            FileStream outStream = File.Create(outPath);

            // Convert type1 to ttf
            font.SaveToFormat(outStream, FontSavingFormats.TTF);
            //ExampleEnd: 1
        }

        private void Type1ToTtfExample2()
        {
            Console.WriteLine("Type1 to TTF ex: 2");

            //ExampleStart: 2
            // Open Type 1 font
            string fontPath = Path.Combine(DataDir, "Courier.pfb");
            FontDefinition fontDefinition = new FontDefinition(FontType.Type1, new FontFileDefinition("pfb", new FileSystemStreamSource(fontPath)));
            Font font = Font.Open(fontDefinition);

            // Convert type1 to ttf
            Font ttfFont = font.Convert(FontType.TTF) as Aspose.Font.Ttf.TtfFont;
            ttfFont.Save(Path.Combine(OutputDir, "Type1ToTtf_out2.ttf"));
            //ExampleEnd: 2
        }

        private void Type1ToWoffExample()
        {
            Console.WriteLine("Type1 to WOFF ex: 3");

            //ExampleStart: 3
            // Open Type 1 font
            byte[] fontMemoryData = File.ReadAllBytes(Path.Combine(DataDir, "Courier.pfb"));
            FontDefinition fontDefinition = new FontDefinition(FontType.Type1, new FontFileDefinition("pfb", new ByteContentStreamSource(fontMemoryData)));
            Font font = Font.Open(fontDefinition);

            // Woff output settings
            string outPath = Path.Combine(OutputDir, "Type1ToWoff_out3.ttf");
            FileStream outStream = File.Create(outPath);

            // Convert type1 to woff
            font.SaveToFormat(outStream, FontSavingFormats.WOFF);
            //ExampleEnd: 3
        }

        private void Type1ToWoff2Example()
        {
            Console.WriteLine("Type1 to WOFF2 ex: 4");

            //ExampleStart: 4
            // Open Type 1 font
            byte[] fontMemoryData = File.ReadAllBytes(Path.Combine(DataDir, "Courier.pfb"));
            FontDefinition fontDefinition = new FontDefinition(FontType.Type1, new FontFileDefinition("pfb", new ByteContentStreamSource(fontMemoryData)));
            Font font = Font.Open(fontDefinition);

            // Woff2 output settings
            string outPath = Path.Combine(OutputDir, "Type1ToWoff2_out4.ttf");
            FileStream outStream = File.Create(outPath);

            // Convert type1 to woff2
            font.SaveToFormat(outStream, FontSavingFormats.WOFF2);
            //ExampleEnd: 4
        }

    }
}
