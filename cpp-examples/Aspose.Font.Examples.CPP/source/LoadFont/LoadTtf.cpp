#include "aspose_pch.h"
#include "LoadTtf.h"

#include <system/io/path.h>
#include <system/io/file_info.h>
#include <system/io/file.h>
#include <system/console.h>
#include <system/array.h>
#include <Aspose.Font.Cpp/src/Sources/FontFileDefinition.h>
#include <Aspose.Font.Cpp/src/Sources/FontDefinition.h>
#include <Aspose.Font.Cpp/src/Sources/FileSystemStreamSource.h>
#include <Aspose.Font.Cpp/src/Sources/ByteContentStreamSource.h>
#include <Aspose.Font.Cpp/src/FontType.h>
#include <Aspose.Font.Cpp/src/Font.h>
#include <cstdint>


using namespace Aspose::Font::Sources;
namespace Aspose {

namespace Font {

namespace Examples {

namespace LoadFont {

RTTI_INFO_IMPL_HASH(225544048u, ::Aspose::Font::Examples::LoadFont::LoadTtf, ThisTypeBaseTypesInfo);

LoadTtf::LoadTtf() : Aspose::Font::Examples::LoadFont::LoadFontBase()
{
    
}

void LoadTtf::Run()
{
    System::Console::WriteLine(u"\nRun load TrueType fonts examples");
    
    LoadExample1();
    LoadExample2();
    LoadExample3();
    LoadExample4();
}

void LoadTtf::LoadExample1()
{
    PrintExampleTitle(u"Loading from file Montserrat-Regular.ttf using FileSystemStreamSource object", 1);
    
    //ExampleStart: 1
    System::String fontPath = System::IO::Path::Combine(get_DataDir(), u"Montserrat-Regular.ttf");
    System::String fontSource = u"file Montserrat-Regular.ttf";
    
    // Initialize FontDefinition object passing TTF as FontType value and using FontFileDefinition
    // based on FileSystemStreamSource object, set fileExtension to "ttf"
    System::SharedPtr<FontFileDefinition> fileDef = System::MakeObject<FontFileDefinition>(u"ttf", System::MakeObject<FileSystemStreamSource>(fontPath));
    System::SharedPtr<FontDefinition> fontDef = System::MakeObject<FontDefinition>(Aspose::Font::FontType::TTF, fileDef);
    
    // Load font and print results
    System::SharedPtr<Aspose::Font::Font> font = Aspose::Font::Font::Open(fontDef);
    PrintSimpleFontInfo(font, fontSource);
    //ExampleEnd: 1
}

void LoadTtf::LoadExample2()
{
    PrintExampleTitle(u"Loading from file Montserrat-Regular.ttf using FileInfo object", 2);
    
    //ExampleStart: 2
    System::String fontPath = System::IO::Path::Combine(get_DataDir(), u"Montserrat-Regular.ttf");
    System::String fontSource = u"file Montserrat-Regular.ttf";
    
    // Initialize FontDefinition object passing TTF as FontType value and using FontFileDefinition
    // based on FileInfo object, fileExtension value is calculated automatically from FileInfo fields.
    System::SharedPtr<FontFileDefinition> fileDef = System::MakeObject<FontFileDefinition>(System::MakeObject<System::IO::FileInfo>(fontPath));
    System::SharedPtr<FontDefinition> fontDef = System::MakeObject<FontDefinition>(Aspose::Font::FontType::TTF, fileDef);
    
    // Load font and print results
    System::SharedPtr<Aspose::Font::Font> font = Aspose::Font::Font::Open(fontDef);
    PrintSimpleFontInfo(font, fontSource);
    //ExampleEnd: 2
}

void LoadTtf::LoadExample3()
{
    PrintExampleTitle(u"Loading from file Montserrat-Regular.ttf excluding FontFileDefinition object from initialization chain", 3);
    
    //ExampleStart: 3
    System::String fontPath = System::IO::Path::Combine(get_DataDir(), u"Montserrat-Regular.ttf");
    System::String fontSource = u"file Montserrat-Regular.ttf";
    
    // Initialize FontDefinition object passing TTF as FontType value, "ttf" as fileExtension value, 
    // and FileSystemStreamSource object. Parameter 'fileExtension' here is not duplicate value 
    // for parameter 'FontType' and it's needed for correct font format detection
    System::SharedPtr<FontDefinition> fontDef = System::MakeObject<FontDefinition>(Aspose::Font::FontType::TTF, u"ttf", System::MakeObject<FileSystemStreamSource>(fontPath));
    
    // Load font and print results
    System::SharedPtr<Aspose::Font::Font> font = Aspose::Font::Font::Open(fontDef);
    PrintSimpleFontInfo(font, fontSource);
    //ExampleEnd: 3
}

void LoadTtf::LoadExample4()
{
    PrintExampleTitle(u"Loading from byte array", 4);
    
    //ExampleStart: 4
    System::String fontPath = System::IO::Path::Combine(get_DataDir(), u"Montserrat-Regular.ttf");
    System::String fontSource = u"memory byte array based on file Montserrat-Regular.ttf";
    
    // Load font binary data into byte array
    System::ArrayPtr<uint8_t> fontBytes = System::IO::File::ReadAllBytes(fontPath);
    
    // Initialize FontDefinition object  passing TTF as FontType value, "ttf" as fileExtension value, 
    // and ByteContentStreamSource object based on fontBytes array
    System::SharedPtr<FontDefinition> fontDef = System::MakeObject<FontDefinition>(Aspose::Font::FontType::TTF, u"ttf", System::MakeObject<ByteContentStreamSource>(fontBytes));
    
    // Load font and print results
    System::SharedPtr<Aspose::Font::Font> font = Aspose::Font::Font::Open(fontDef);
    PrintSimpleFontInfo(font, fontSource);
    //ExampleEnd: 4
}

} // namespace LoadFont
} // namespace Examples
} // namespace Font
} // namespace Aspose
