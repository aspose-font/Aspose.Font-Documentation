using Aspose.Font.Sources;
using System;
using System.IO;

namespace Aspose.Font.Examples.ConvertFont
{
    class ConvertEot: BaseExamples
    {
        public ConvertEot(string folderName) : base(folderName) { }

        public override void Run()
        {
            Console.WriteLine("Run Convert EOT to TTF/WOFF/WOFF2 examples");

            EotToTtfExample1();
            EotToTtfExample2();
            EotToWoffExample1();
            EotToWoffExample2();
        }

        private void EotToTtfExample1()
        {
            Console.WriteLine("EOT to TTF ex: 1");

            //ExampleStart: 1
            // Open eot font, passing TTF as value for FontType, TtfFont will be returned as result of call Font.Open()
            string fontPath = Path.Combine(DataDir, "LoraRegular.eot");
            FontDefinition fontDefinition = new FontDefinition(FontType.TTF, new FontFileDefinition(new FileSystemStreamSource(fontPath)));
            Font font = Font.Open(fontDefinition);

            // Ttf output settings
            string outPath = Path.Combine(OutputDir, "EotToTtf_out1.ttf");            

            // Save opened font to TrueType format
            font.Save(outPath);
            //ExampleEnd: 1
        }


        private void EotToTtfExample2()
        {
            Console.WriteLine("EOT to TTF ex: 2");

            //ExampleStart: 2
            // Open eot font, passing TTF as value for FontType, actually TtfFont will be returned as result of call Font.Open()
            string fontPath = Path.Combine(DataDir, "LoraRegular.eot");
            FontDefinition fontDefinition = new FontDefinition(FontType.TTF, new FontFileDefinition(new FileSystemStreamSource(fontPath)));
            Font font = Font.Open(fontDefinition);

            // Ttf output settings
            string outPath = Path.Combine(OutputDir, "EotToTtf_out2.ttf");
            using (FileStream outStream = File.Create(outPath))
            {
                // Save opened font to TrueType format by call SaveToFormat() method
                font.SaveToFormat(outStream, FontSavingFormats.TTF);
            }
            //ExampleEnd: 2
        }

        private void EotToWoffExample1()
        {
            Console.WriteLine("EOT to WOFF ex: 3");

            //ExampleStart: 3
            // Open eot font
            string fontPath = Path.Combine(DataDir, "LoraRegular.eot");
            FontDefinition fontDefinition = new FontDefinition(FontType.TTF, new FontFileDefinition(new FileSystemStreamSource(fontPath)));
            Font font = Font.Open(fontDefinition);

            // Woff output settings
            string outPath = Path.Combine(OutputDir, "EotToWoff_out3.woff");
            using (FileStream outStream = File.Create(outPath))
            {
                // Convert eot to woff
                font.SaveToFormat(outStream, FontSavingFormats.WOFF);
            }
            //ExampleEnd: 3
        }

        private void EotToWoffExample2()
        {
            Console.WriteLine("EOT to WOFF2 ex: 4");

            //ExampleStart: 4
            // Open eot font
            string fontPath = Path.Combine(DataDir, "LoraRegular.eot");
            FontDefinition fontDefinition = new FontDefinition(FontType.TTF, new FontFileDefinition(new FileSystemStreamSource(fontPath)));
            Font font = Font.Open(fontDefinition);

            // Woff2 output settings
            string outPath = Path.Combine(OutputDir, "EotToWoff2_out4.woff2");
            using (FileStream outStream = File.Create(outPath))
            {
                // Convert eot to woff2
                font.SaveToFormat(outStream, FontSavingFormats.WOFF2);
            }
            //ExampleEnd: 4
        }
    }
}
