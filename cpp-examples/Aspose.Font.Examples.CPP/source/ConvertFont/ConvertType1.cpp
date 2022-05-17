#include "aspose_pch.h"
#include "ConvertType1.h"

#include <system/io/path.h>
#include <system/io/file_stream.h>
#include <system/io/file.h>
#include <system/exceptions.h>
#include <system/console.h>
#include <system/array.h>
#include <Aspose.Font.Cpp/src/Ttf/TtfFont.h>
#include <Aspose.Font.Cpp/src/Sources/FontFileDefinition.h>
#include <Aspose.Font.Cpp/src/Sources/FontDefinition.h>
#include <Aspose.Font.Cpp/src/Sources/FileSystemStreamSource.h>
#include <Aspose.Font.Cpp/src/Sources/ByteContentStreamSource.h>
#include <Aspose.Font.Cpp/src/FontType.h>
#include <Aspose.Font.Cpp/src/FontSavingFormats.h>
#include <Aspose.Font.Cpp/src/Font.h>
#include <cstdint>


using namespace Aspose::Font::Sources;
namespace Aspose {

namespace Font {

namespace Examples {

namespace ConvertFont {

RTTI_INFO_IMPL_HASH(2307704939u, ::Aspose::Font::Examples::ConvertFont::ConvertType1, ThisTypeBaseTypesInfo);

ConvertType1::ConvertType1(System::String folderName) : Aspose::Font::Examples::BaseExamples(folderName)
{
}

void ConvertType1::Run()
{
    System::Console::WriteLine(u"Run Convert Type1 to TTF/WOFF/WOFF2 examples");
    
    Type1ToTtfExample1();
    Type1ToTtfExample2();
    Type1ToWoffExample();
    Type1ToWoff2Example();
}

void ConvertType1::Type1ToTtfExample1()
{
    System::Console::WriteLine(u"Type1 to TTF ex: 1");
    
    //ExampleStart: 1
    // Open Type 1 font
    System::String fontPath = System::IO::Path::Combine(get_DataDir(), u"Courier.pfb");
    System::SharedPtr<FontDefinition> fontDefinition = System::MakeObject<FontDefinition>(Aspose::Font::FontType::Type1, System::MakeObject<FontFileDefinition>(u"pfb", System::MakeObject<FileSystemStreamSource>(fontPath)));
    System::SharedPtr<Aspose::Font::Font> font = Aspose::Font::Font::Open(fontDefinition);
    
    // Ttf output settings
    System::String outPath = System::IO::Path::Combine(get_OutputDir(), u"Type1ToTtf_out1.ttf");
    System::SharedPtr<System::IO::FileStream> outStream = System::IO::File::Create(outPath);
    
    // Convert type1 to ttf
    font->SaveToFormat(outStream, Aspose::Font::FontSavingFormats::TTF);
    //ExampleEnd: 1
}

void ConvertType1::Type1ToTtfExample2()
{
    System::Console::WriteLine(u"Type1 to TTF ex: 2");
    
    //ExampleStart: 2
    // Open Type 1 font
    System::String fontPath = System::IO::Path::Combine(get_DataDir(), u"Courier.pfb");
    System::SharedPtr<FontDefinition> fontDefinition = System::MakeObject<FontDefinition>(Aspose::Font::FontType::Type1, System::MakeObject<FontFileDefinition>(u"pfb", System::MakeObject<FileSystemStreamSource>(fontPath)));
    System::SharedPtr<Aspose::Font::Font> font = Aspose::Font::Font::Open(fontDefinition);
    
    // Convert type1 to ttf
    System::SharedPtr<Aspose::Font::Font> ttfFont = System::DynamicCast_noexcept<Aspose::Font::Ttf::TtfFont>(font->Convert(Aspose::Font::FontType::TTF));
    ttfFont->Save(System::IO::Path::Combine(get_OutputDir(), u"Type1ToTtf_out2.ttf"));
    //ExampleEnd: 2
}

void ConvertType1::Type1ToWoffExample()
{
    System::Console::WriteLine(u"Type1 to WOFF ex: 3");
    
    //ExampleStart: 3
    // Open Type 1 font
    System::ArrayPtr<uint8_t> fontMemoryData = System::IO::File::ReadAllBytes(System::IO::Path::Combine(get_DataDir(), u"Courier.pfb"));
    System::SharedPtr<FontDefinition> fontDefinition = System::MakeObject<FontDefinition>(Aspose::Font::FontType::Type1, System::MakeObject<FontFileDefinition>(u"pfb", System::MakeObject<ByteContentStreamSource>(fontMemoryData)));
    System::SharedPtr<Aspose::Font::Font> font = Aspose::Font::Font::Open(fontDefinition);
    
    // Woff output settings
    System::String outPath = System::IO::Path::Combine(get_OutputDir(), u"Type1ToWoff_out3.ttf");
    System::SharedPtr<System::IO::FileStream> outStream = System::IO::File::Create(outPath);
    
    // Convert type1 to woff
    font->SaveToFormat(outStream, Aspose::Font::FontSavingFormats::WOFF);
    //ExampleEnd: 3
}

void ConvertType1::Type1ToWoff2Example()
{
    System::Console::WriteLine(u"Type1 to WOFF2 ex: 4");
    
    //ExampleStart: 4
    // Open Type 1 font
    System::ArrayPtr<uint8_t> fontMemoryData = System::IO::File::ReadAllBytes(System::IO::Path::Combine(get_DataDir(), u"Courier.pfb"));
    System::SharedPtr<FontDefinition> fontDefinition = System::MakeObject<FontDefinition>(Aspose::Font::FontType::Type1, System::MakeObject<FontFileDefinition>(u"pfb", System::MakeObject<ByteContentStreamSource>(fontMemoryData)));
    System::SharedPtr<Aspose::Font::Font> font = Aspose::Font::Font::Open(fontDefinition);
    
    // Woff2 output settings
    System::String outPath = System::IO::Path::Combine(get_OutputDir(), u"Type1ToWoff2_out4.ttf");
    System::SharedPtr<System::IO::FileStream> outStream = System::IO::File::Create(outPath);
    
    // Convert type1 to woff2
    font->SaveToFormat(outStream, Aspose::Font::FontSavingFormats::WOFF2);
    //ExampleEnd: 4
}

} // namespace ConvertFont
} // namespace Examples
} // namespace Font
} // namespace Aspose
