#include "aspose_pch.h"
#include "SetLicenseFromStream.h"

#include <system/string.h>
#include <system/io/path.h>
#include <system/io/file_stream.h>
#include <system/io/file_mode.h>
#include <system/console.h>
#include <Aspose.Font.Cpp/src/FontLicense.h>

namespace Aspose {

namespace Font {

namespace Examples {

namespace Licensing {

RTTI_INFO_IMPL_HASH(401023948u, ::Aspose::Font::Examples::Licensing::SetLicenseFromStream, ThisTypeBaseTypesInfo);

void SetLicenseFromStream::Run()
{
    System::Console::WriteLine(u"Run Set License from Stream example");
    
    //ExampleStart: 1
    System::SharedPtr<System::IO::FileStream> licenseStream = System::MakeObject<System::IO::FileStream>(System::IO::Path::Combine(get_LicenseDir(), u"Aspose.Font.lic"), System::IO::FileMode::Open);
    
    System::SharedPtr<License> license = System::MakeObject<License>();
    license->SetLicense(licenseStream);
    //ExampleEnd: 1
}

} // namespace Licensing
} // namespace Examples
} // namespace Font
} // namespace Aspose
