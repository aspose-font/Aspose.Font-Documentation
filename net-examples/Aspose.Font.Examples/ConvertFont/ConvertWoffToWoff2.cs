﻿using Aspose.Font.Sources;
using Aspose.Font.Ttf;
using System;
using System.IO;

namespace Aspose.Font.Examples.ConvertFont
{
    class ConvertWoffToWoff2 : BaseExamples
    {
        public ConvertWoffToWoff2(string folderName) : base(folderName) { }

        public override void Run()
        {
            Console.WriteLine("Run Convert WOFF to WOFF2 examples");

            WoffToWoff2Example1();
            WoffToWoff2Example2();
        }

        private void WoffToWoff2Example1()
        {
            Console.WriteLine("WOFF to WOFF2 ex: 1");

            //ExampleStart: 1
            string fontPath = Path.Combine(DataDir, "Montserrat-Regular.woff");
            FontDefinition fontDefinition = new FontDefinition(FontType.TTF, new FontFileDefinition("woff", new FileSystemStreamSource(fontPath)));
            Font font = Font.Open(fontDefinition);

            string outPath = Path.Combine(OutputDir, "WoffToWoff2_out1.woff2");
            FileStream outStream = File.Create(outPath);

            font.SaveToFormat(outStream, FontSavingFormats.WOFF2);
            //ExampleEnd: 1
        }

        private void WoffToWoff2Example2()
        {
            Console.WriteLine("WOFF to WOFF2 ex: 2");

            //ExampleStart: 2
            byte[] fontMemoryData = File.ReadAllBytes(DataPath("Montserrat-Bold.woff"));
            FontDefinition fontDefinition = new FontDefinition(FontType.TTF, new FontFileDefinition("woff", new ByteContentStreamSource(fontMemoryData)));
            TtfFont ttfFont = Font.Open(fontDefinition) as TtfFont;

            string outPath = Path.Combine(OutputDir, "WoffToWoff2_out2.woff2");
            FileStream outStream = File.Create(outPath);

            ttfFont.SaveToFormat(outStream, FontSavingFormats.WOFF2);
            //ExampleEnd: 2
        }
    }
}
