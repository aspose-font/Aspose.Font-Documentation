using System;
using System.IO;

namespace Aspose.Font.Examples
{
    abstract class BaseExamples : IExamples
    {
        private string dataDir;
        private string outputDir;
        private string licenseDir;

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
    }
}
