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

            Type1ToTtfExample();
            Type1ToWoffExample();
            Type1ToWoff2Example();
        }

        
        private void Type1ToTtfExample()
        {
            Console.WriteLine("Type1 to TTF ex: 1");

            //ExampleStart: 1
            string fontPath = Path.Combine(DataDir, "Courier.pfb");
            FontDefinition fontDefinition = new FontDefinition(FontType.Type1, new FontFileDefinition("pfb", new FileSystemStreamSource(fontPath)));
            Font font = Font.Open(fontDefinition);

            string outPath = Path.Combine(OutputDir, "Type1ToTtf_out1.ttf");
            FileStream outStream = File.Create(outPath);

            font.SaveToFormat(outStream, FontSavingFormats.TTF);
            //ExampleEnd: 1
        }

        private void Type1ToWoffExample()
        {
            Console.WriteLine("Type1 to WOFF ex: 2");

            //ExampleStart: 2
            byte[] fontMemoryData = File.ReadAllBytes(Path.Combine(DataDir, "Courier.pfb"));
            FontDefinition fontDefinition = new FontDefinition(FontType.Type1, new FontFileDefinition("pfb", new ByteContentStreamSource(fontMemoryData)));
            Font font = Font.Open(fontDefinition);

            string outPath = Path.Combine(OutputDir, "Type1ToWoff_out2.ttf");
            FileStream outStream = File.Create(outPath);

            font.SaveToFormat(outStream, FontSavingFormats.WOFF);
            //ExampleEnd: 2
        }

        private void Type1ToWoff2Example()
        {
            Console.WriteLine("Type1 to WOFF2 ex: 3");

            //ExampleStart: 3
            byte[] fontMemoryData = File.ReadAllBytes(Path.Combine(DataDir, "Courier.pfb"));
            FontDefinition fontDefinition = new FontDefinition(FontType.Type1, new FontFileDefinition("pfb", new ByteContentStreamSource(fontMemoryData)));
            Font font = Font.Open(fontDefinition);

            string outPath = Path.Combine(OutputDir, "Type1ToWoff2_out2.ttf");
            FileStream outStream = File.Create(outPath);

            font.SaveToFormat(outStream, FontSavingFormats.WOFF2);
            //ExampleEnd: 3
        }

    }
}
