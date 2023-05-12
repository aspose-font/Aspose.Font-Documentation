#include "aspose_pch.h"
#include "SetLicenseFromFile.h"

#include <system/string.h>
#include <system/io/path.h>
#include <system/console.h>
#include <Aspose.Font.Cpp/Licensing/FontLicense.h>

namespace Aspose {

namespace Font {

namespace Examples {

namespace Licensing {

RTTI_INFO_IMPL_HASH(694846920u, ::Aspose::Font::Examples::Licensing::SetLicenseFromFile, ThisTypeBaseTypesInfo);

void SetLicenseFromFile::Run()
{
    System::Console::WriteLine(u"Run Set License from File example");
    
    //ExampleStart: 1
    System::String licensePath = System::IO::Path::Combine(get_LicenseDir(), u"Aspose.Font.CPP.lic");
    
    System::SharedPtr<License> license = System::MakeObject<License>();
    license->SetLicense(licensePath);
    //ExampleEnd: 1
}

} // namespace Licensing
} // namespace Examples
} // namespace Font
} // namespace Aspose
