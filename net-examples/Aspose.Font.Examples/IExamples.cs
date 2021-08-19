namespace Aspose.Font.Examples
{
    interface IExamples
    {
        string DataDir { get; }
        string OutputDir { get; }

        string LicenseDir { get; }

        string DataPath(string path);
        string DataPath(params string[] paths);
        string OutputPath(string path);

        void Run();
    }
}
