using System;
using System.IO;

namespace Aspose.Font.Examples.Licensing
{
    class SetLicenseFromStream : BaseExamples
    {
        public override void Run()
        {
            Console.WriteLine("Run Set License from Stream example");

            //ExampleStart: 1
            FileStream licenseStream = new FileStream(Path.Combine(LicenseDir, "Aspose.Font.lic"), FileMode.Open);

            License license = new License();
            license.SetLicense(licenseStream);
            //ExampleEnd: 1
        }
    }
}
