#include "aspose_pch.h"
#include "LoadCff.h"

#include <system/io/path.h>
#include <system/io/file_info.h>
#include <system/io/file.h>
#include <system/console.h>
#include <system/array.h>
#include <Aspose.Font.Cpp/src/Sources/FontFileDefinition.h>
#include <Aspose.Font.Cpp/src/Sources/FontDefinition.h>
#include <Aspose.Font.Cpp/src/Sources/ByteContentStreamSource.h>
#include <Aspose.Font.Cpp/src/FontType.h>
#include <Aspose.Font.Cpp/src/Font.h>
#include <cstdint>


using namespace Aspose::Font::Sources;
namespace Aspose {

namespace Font {

namespace Examples {

namespace LoadFont {

RTTI_INFO_IMPL_HASH(84180077u, ::Aspose::Font::Examples::LoadFont::LoadCff, ThisTypeBaseTypesInfo);

LoadCff::LoadCff() : Aspose::Font::Examples::LoadFont::LoadFontBase()
{
    
}

void LoadCff::Run()
{
    System::Console::WriteLine(u"\nRun load fonts of compact font format examples");
    
    LoadExample1();
    LoadExample2();
}

void LoadCff::LoadExample1()
{
    PrintExampleTitle(u"Loading from file CenturyGothic.cff using FileInfo object", 1);
    
    //ExampleStart: 1
    System::String fontPath = System::IO::Path::Combine(get_DataDir(), u"CenturyGothic.cff");
    System::String fontSource = u"file CenturyGothic.cff";
    
    // Initialize FontDefinition object passing CFF as FontType value and using FontFileDefinition
    // based on FileInfo object, fileExtension value is calculated automatically from FileInfo fields.
    System::SharedPtr<FontFileDefinition> fileDef = System::MakeObject<FontFileDefinition>(System::MakeObject<System::IO::FileInfo>(fontPath));
    System::SharedPtr<FontDefinition> fontDef = System::MakeObject<FontDefinition>(Aspose::Font::FontType::CFF, fileDef);
    
    // Load font and print results
    System::SharedPtr<Aspose::Font::Font> font = Aspose::Font::Font::Open(fontDef);
    PrintSimpleFontInfo(font, fontSource);
    //ExampleEnd: 1
}

void LoadCff::LoadExample2()
{
    PrintExampleTitle(u"Loading from byte array", 2);
    
    //ExampleStart: 2
    System::String fontPath = System::IO::Path::Combine(get_DataDir(), u"CenturyGothic.cff");
    System::String fontSource = u"memory byte array based on file CenturyGothic.cff";
    
    // Load font binary data into byte array
    System::ArrayPtr<uint8_t> fontBytes = System::IO::File::ReadAllBytes(fontPath);
    
    // Initialize FontDefinition object  passing CFF as FontType value, "cff" as fileExtension value, 
    // and ByteContentStreamSource object based on fontBytes array
    System::SharedPtr<FontDefinition> fontDef = System::MakeObject<FontDefinition>(Aspose::Font::FontType::CFF, u"ttf", System::MakeObject<ByteContentStreamSource>(fontBytes));
    
    // Load font and print results
    System::SharedPtr<Aspose::Font::Font> font = Aspose::Font::Font::Open(fontDef);
    PrintSimpleFontInfo(font, fontSource);
    //ExampleEnd: 2
}

} // namespace LoadFont
} // namespace Examples
} // namespace Font
} // namespace Aspose
