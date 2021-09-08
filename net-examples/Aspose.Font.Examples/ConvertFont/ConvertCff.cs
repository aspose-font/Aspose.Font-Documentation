using Aspose.Font.Sources;
using System;
using System.IO;

namespace Aspose.Font.Examples.ConvertFont
{
    class ConvertCff : BaseExamples
    {
        public ConvertCff(string folderName) : base(folderName) { }

        public override void Run()
        {
            Console.WriteLine("Run Convert CFF to TTF/WOFF/WOFF2 examples");

            CffToTtfExample1();
            CffToTtfExample2();
            CffToWoffExample();
            CffToWoff2Example();
        }

        

        private void CffToTtfExample1()
        {
            Console.WriteLine("CFF to TTF ex: 1");

            //ExampleStart: 1            
            // Open cff font
            string fontPath = Path.Combine(DataDir, "CenturyGothic.cff");
            FontDefinition fontDefinition = new FontDefinition(FontType.CFF, new FontFileDefinition("cff", new FileSystemStreamSource(fontPath)));
            Font font = Font.Open(fontDefinition);

            // Ttf output settings
            string outPath = Path.Combine(OutputDir, "CffToTtf_out1.ttf");
            FileStream outStream = File.Create(outPath);

            // Convert cff to ttf
            font.SaveToFormat(outStream, FontSavingFormats.TTF);
            
            //ExampleEnd: 1
        }

        private void CffToTtfExample2()
        {
            Console.WriteLine("CFF to TTF ex: 2");

            //ExampleStart: 2
            
            // Open cff font
            string fontPath = Path.Combine(DataDir, "CenturyGothic.cff");
            FontDefinition fontDefinition = new FontDefinition(FontType.CFF, new FontFileDefinition("cff", new FileSystemStreamSource(fontPath)));
            Font font = Font.Open(fontDefinition);

            // Convert cff to ttf
            Font ttfFont = font.Convert(FontType.TTF) as Aspose.Font.Ttf.TtfFont;
            ttfFont.Save(Path.Combine(OutputDir, "CffToTtf_out2.ttf"));
            
            //ExampleEnd: 2
        }

        private void CffToWoffExample()
        {
            Console.WriteLine("CFF to WOFF ex: 3");

            //ExampleStart: 3
            
            // Open cff font
            byte[] fontMemoryData = File.ReadAllBytes(Path.Combine(DataDir, "CenturyGothic.cff"));
            FontDefinition fontDefinition = new FontDefinition(FontType.CFF, new FontFileDefinition("cff", new ByteContentStreamSource(fontMemoryData)));
            Font font = Font.Open(fontDefinition);

            // Woff output settings
            string outPath = Path.Combine(OutputDir, "CffToWoff_out3.woff");
            FileStream outStream = File.Create(outPath);

            // Convert cff to woff
            font.SaveToFormat(outStream, FontSavingFormats.WOFF);
            
            //ExampleEnd: 3
        }

        private void CffToWoff2Example()
        {
            Console.WriteLine("CFF to WOFF2 ex: 4");

            //ExampleStart: 4
            
            // Open cff font
            byte[] fontMemoryData = File.ReadAllBytes(Path.Combine(DataDir, "CenturyGothic.cff"));
            FontDefinition fontDefinition = new FontDefinition(FontType.CFF, new FontFileDefinition("cff", new ByteContentStreamSource(fontMemoryData)));
            Font font = Font.Open(fontDefinition);

            // Woff2 output settings
            string outPath = Path.Combine(OutputDir, "CffToWoff2_out4.woff2");
            FileStream outStream = File.Create(outPath);

            // Convert cff to woff2
            font.SaveToFormat(outStream, FontSavingFormats.WOFF2);
            
            //ExampleEnd: 4
        }
    }
}
