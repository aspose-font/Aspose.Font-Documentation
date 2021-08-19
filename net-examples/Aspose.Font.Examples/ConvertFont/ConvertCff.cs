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

            CffToTtfExample();
            CffToWoffExample();
            CffToWoff2Example();
        }

        

        private void CffToTtfExample()
        {
            Console.WriteLine("CFF to TTF ex: 1");

            //ExampleStart: 1
            /*
            string fontPath = Path.Combine(DataDir, "OpenSans-Regular.cff");
            FontDefinition fontDefinition = new FontDefinition(FontType.CFF, new FontFileDefinition("cff", new FileSystemStreamSource(fontPath)));

            Font font = Font.Open(fontDefinition);

            string outPath = Path.Combine(OutputDir, "CffToTtf_out1.ttf");
            FileStream outStream = File.Create(outPath);

            font.SaveToFormat(outStream, FontSavingFormats.TTF);
            */
            //ExampleEnd: 1
        }

        private void CffToWoffExample()
        {
            Console.WriteLine("CFF to WOFF ex: 2");

            //ExampleStart: 2
            /*
            byte[] fontMemoryData = File.ReadAllBytes(Path.Combine(DataDir, "OpenSans-Regular.cff"));
            FontDefinition fontDefinition = new FontDefinition(FontType.CFF, new FontFileDefinition("cff", new ByteContentStreamSource(fontMemoryData)));
            Font font = Font.Open(fontDefinition);

            string outPath = Path.Combine(OutputDir, "CffToWoff_out1.woff");
            FileStream outStream = File.Create(outPath);

            font.SaveToFormat(outStream, FontSavingFormats.WOFF);
            */
            //ExampleEnd: 2
        }

        private void CffToWoff2Example()
        {
            Console.WriteLine("CFF to WOFF2 ex: 3");

            //ExampleStart: 3
            /*
            byte[] fontMemoryData = File.ReadAllBytes(Path.Combine(DataDir, "OpenSans-Regular.cff"));
            FontDefinition fontDefinition = new FontDefinition(FontType.CFF, new FontFileDefinition("cff", new ByteContentStreamSource(fontMemoryData)));
            Font font = Font.Open(fontDefinition);

            string outPath = Path.Combine(OutputDir, "CffToWoff2_out1.woff2");
            FileStream outStream = File.Create(outPath);

            font.SaveToFormat(outStream, FontSavingFormats.WOFF2);
            */
            //ExampleEnd: 3
        }
    }
}
