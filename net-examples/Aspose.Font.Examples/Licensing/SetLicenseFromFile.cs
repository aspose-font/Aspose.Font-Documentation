using System;
using System.IO;

namespace Aspose.Font.Examples.Licensing
{
    class SetLicenseFromFile : BaseExamples
    {
        public override void Run()
        {
            Console.WriteLine("Run Set License from File example");

            //ExampleStart: 1
            string licensePath = Path.Combine(LicenseDir, "Aspose.Font.lic");

            License license = new License();
            license.SetLicense(licensePath);
            //ExampleEnd: 1
        }
    }
}
