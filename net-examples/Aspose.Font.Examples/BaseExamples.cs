using System;
using System.IO;
using Aspose.Font.Sources;

namespace Aspose.Font.Examples
{
    abstract class BaseExamples : IExamples
    {
        private string dataDir;
        private string outputDir;
        private string licenseDir;
        protected const int AlignedTitleLength = 100;

        public BaseExamples(string folderName)
        {
            dataDir = Path.Combine(Environment.CurrentDirectory, "..", "..", "..", "..", "Data");
            outputDir = Path.Combine(Environment.CurrentDirectory, "..", "..", "..", "..", "Out", folderName);
            licenseDir = Path.Combine(dataDir, "License");

            if (!Directory.Exists(outputDir))
            {
                Directory.CreateDirectory(outputDir);
            }

            //Console.WriteLine($"Data Dir: {dataDir}");
            //Console.WriteLine($"Output Dir: {outputDir}");
            //Console.WriteLine($"License Dir: {licenseDir}");
        }

        public BaseExamples() : this(".") { }

        public string DataDir => dataDir;

        public string OutputDir => outputDir;

        public string LicenseDir => licenseDir;

        public string DataPath(string fileName)
        {
            return Path.Combine(DataDir, fileName);
        }

        public string DataPath(params string[] paths)
        {
            return Path.Combine(DataDir, Path.Combine(paths));
        }

        public string OutputPath(string fileName)
        {
            return Path.Combine(OutputDir, fileName);
        }

        public abstract void Run();

        protected void PrintExampleTitle(string title, int exNum)
        {
            Console.WriteLine(string.Format("\n{0}, ex: {1}", title, exNum));
        }

        protected void PrintAlignedTitle(string caption, bool startFromNewLine = false, char frameSymbol = '-')
        {
            if(startFromNewLine)
                Console.WriteLine();
            int frameLength = (AlignedTitleLength - caption.Length) / 2;
            string frame = new string(frameSymbol, frameLength);

            Console.WriteLine(frame + caption + frame);
        }

        protected Font LoadFont(string fontFileName, FontType fontType)
        {
            byte[] fontData = File.ReadAllBytes(DataPath(fontFileName));
            string extension = fontFileName.Substring(fontFileName.LastIndexOf(".") + 1);
            FontDefinition fontDefinition = new FontDefinition(fontType, 
                new FontFileDefinition(extension, new ByteContentStreamSource(fontData)));
            return Aspose.Font.Font.Open(fontDefinition);
        }
    }
}
