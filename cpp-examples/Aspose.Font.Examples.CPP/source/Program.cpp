#include "aspose_pch.h"
#include "Program.h"

#include <system/console.h>

#include "Aspose.Font.Cpp/Properties/AssemblyInfo.h"
#include "LoadFont/LoadTtf.h"
#include "LoadFont/LoadCff.h"
#include "Licensing/SetLicenseFromStream.h"
#include "Licensing/SetLicenseFromFile.h"
#include "IExamples.h"
#include "ConvertFont/ConvertWoffToWoff2.h"
#include "ConvertFont/ConvertWoffToTtf.h"
#include "ConvertFont/ConvertWoff2ToTtf.h"
#include "ConvertFont/ConvertType1.h"
#include "ConvertFont/ConvertTtfToWoff2.h"
#include "ConvertFont/ConvertTtfToWoff.h"
#include "ConvertFont/ConvertEot.h"
#include "ConvertFont/ConvertCff.h"
#include "Glyphs/GlyphMetrics.h"

using namespace Aspose::Font::Examples::Licensing;
using namespace Aspose::Font::Examples::ConvertFont;
using namespace Aspose::Font::Examples::LoadFont;
namespace Aspose {

namespace Font {

namespace Examples {

RTTI_INFO_IMPL_HASH(205794889u, ::Aspose::Font::Examples::Program, ThisTypeBaseTypesInfo);

void Program::Main(System::ArrayPtr<System::String> args)
{
    System::Console::WriteLine(Aspose::Font::BuildVersionInfo::get_Product());
    System::Console::WriteLine(Aspose::Font::BuildVersionInfo::get_Version());
    System::Console::WriteLine(u"Aspose.Font Examples --- START");
    System::Console::WriteLine(u"========================================");
    System::Console::WriteLine(u"");
    
    ///////
    /// 
    /// Examples Registration
    /// 
    /// ///
    
    // Licensing
    System::SharedPtr<IExamples> setLicenseFromFile = System::MakeObject<Licensing::SetLicenseFromFile>();
    //System::SharedPtr<IExamples> setLicenseFromStream = System::MakeObject<Licensing::SetLicenseFromStream>();
    
    // Convert Font
    System::SharedPtr<IExamples> convertTtfToWoff = System::MakeObject<ConvertFont::ConvertTtfToWoff>(u"Convert-Font");
    System::SharedPtr<IExamples> convertTtfToWoff2 = System::MakeObject<ConvertFont::ConvertTtfToWoff2>(u"Convert-Font");
    System::SharedPtr<IExamples> convertWoffToTtf = System::MakeObject<ConvertFont::ConvertWoffToTtf>(u"Convert-Font");
    System::SharedPtr<IExamples> convertWoff2ToTtf = System::MakeObject<ConvertFont::ConvertWoff2ToTtf>(u"Convert-Font");
    System::SharedPtr<IExamples> convertWoffToWoff2 = System::MakeObject<ConvertFont::ConvertWoffToWoff2>(u"Convert-Font");
    System::SharedPtr<IExamples> convertType1 = System::MakeObject<ConvertFont::ConvertType1>(u"Convert-Font");
    System::SharedPtr<IExamples> convertCff = System::MakeObject<ConvertFont::ConvertCff>(u"Convert-Font");
    System::SharedPtr<IExamples> convertEot = System::MakeObject<ConvertFont::ConvertEot>(u"Convert-Font");
    
    //Load font
    System::SharedPtr<IExamples> loadTtf = System::MakeObject<LoadFont::LoadTtf>();
    System::SharedPtr<IExamples> loadCff = System::MakeObject<LoadFont::LoadCff>();
    
	//Glyph metrics
	System::SharedPtr<IExamples> glyphMetrics = System::MakeObject<Glyphs::GlyphMetrics>();

	///////
    /// 
    /// Examples Run
    /// 
    /// ///
    
    // Licensing Examples
    //setLicenseFromFile.Run();
    //setLicenseFromStream.Run();
    
    // Convert Font Examples
    convertTtfToWoff->Run();
    convertTtfToWoff2->Run();
    convertWoffToTtf->Run();
    convertWoff2ToTtf->Run();
    convertWoffToWoff2->Run();
    convertType1->Run();
    convertCff->Run();
    convertEot->Run();
    
    //Load Font examples
    loadTtf->Run();
    loadCff->Run();
    
    //Glyph metrics examples
    glyphMetrics->Run();

    System::Console::WriteLine(u"");
    System::Console::WriteLine(u"========================================");
    System::Console::WriteLine(u"Aspose.Font Examples --- END");
}

} // namespace Examples
} // namespace Font
} // namespace Aspose

int main(int argc, char** argv)
{
    System::ArrayPtr<System::String> args = System::MakeObject<System::Array<System::String>>(argc - 1);
    
    for (int i = 1, j = 0; i < argc; ++i, ++j)
    {
        args[j] = System::String::FromUtf8(argv[i]);
    }
    
    Aspose::Font::Examples::Program::Main(args);
    return 0;
}
