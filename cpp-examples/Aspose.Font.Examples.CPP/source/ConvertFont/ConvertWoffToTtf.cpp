#include "aspose_pch.h"
#include "ConvertWoffToTtf.h"

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
using namespace Aspose::Font::Ttf;
namespace Aspose {

namespace Font {

namespace Examples {

namespace ConvertFont {

RTTI_INFO_IMPL_HASH(4265773415u, ::Aspose::Font::Examples::ConvertFont::ConvertWoffToTtf, ThisTypeBaseTypesInfo);

ConvertWoffToTtf::ConvertWoffToTtf(System::String folderName) : Aspose::Font::Examples::BaseExamples(folderName)
{
}

void ConvertWoffToTtf::Run()
{
    System::Console::WriteLine(u"Run Convert WOFF to TTF examples");
    
    WoffToTtfExample1();
    WoffToTtfExample2();
    WoffToTtfExample3();
}

void ConvertWoffToTtf::WoffToTtfExample1()
{
    System::Console::WriteLine(u"WOFF to TTF ex: 1");
    
    //ExampleStart: 1
    // Open woff font
    System::String fontPath = System::IO::Path::Combine(get_DataDir(), u"Montserrat-Regular.woff");
    System::SharedPtr<FontDefinition> fontDefinition = System::MakeObject<FontDefinition>(Aspose::Font::FontType::TTF, System::MakeObject<FontFileDefinition>(u"woff", System::MakeObject<FileSystemStreamSource>(fontPath)));
    System::SharedPtr<Aspose::Font::Font> font = Aspose::Font::Font::Open(fontDefinition);
    
    // Ttf output settings
    System::String outPath = System::IO::Path::Combine(get_OutputDir(), u"WoffToTtf_out1.ttf");
    System::SharedPtr<System::IO::FileStream> outStream = System::IO::File::Create(outPath);
    
    // Convert woff to ttf
    font->SaveToFormat(outStream, Aspose::Font::FontSavingFormats::TTF);
    //ExampleEnd: 1
}

void ConvertWoffToTtf::WoffToTtfExample2()
{
    System::Console::WriteLine(u"WOFF to TTF ex: 2");
    
    //ExampleStart: 2
    // Open woff font
    System::ArrayPtr<uint8_t> fontMemoryData = System::IO::File::ReadAllBytes(DataPath(u"Montserrat-Bold.woff"));
    System::SharedPtr<FontDefinition> fontDefinition = System::MakeObject<FontDefinition>(Aspose::Font::FontType::TTF, System::MakeObject<FontFileDefinition>(u"woff", System::MakeObject<ByteContentStreamSource>(fontMemoryData)));
    System::SharedPtr<TtfFont> ttfFont = System::DynamicCast_noexcept<Aspose::Font::Ttf::TtfFont>(Aspose::Font::Font::Open(fontDefinition));
    
    // Ttf output settings
    System::String outPath = System::IO::Path::Combine(get_OutputDir(), u"WoffToTtf_out2.ttf");
    System::SharedPtr<System::IO::FileStream> outStream = System::IO::File::Create(outPath);
    
    // Convert woff to ttf
    ttfFont->SaveToFormat(outStream, Aspose::Font::FontSavingFormats::TTF);
    //ExampleEnd: 2
}

void ConvertWoffToTtf::WoffToTtfExample3()
{
    System::Console::WriteLine(u"WOFF to TTF ex: 3");
    
    //ExampleStart: 3
    // Open woff font
    System::String fontPath = System::IO::Path::Combine(get_DataDir(), u"Montserrat-Regular.woff");
    System::SharedPtr<FontDefinition> fontDefinition = System::MakeObject<FontDefinition>(Aspose::Font::FontType::TTF, System::MakeObject<FontFileDefinition>(u"woff", System::MakeObject<FileSystemStreamSource>(fontPath)));
    System::SharedPtr<Aspose::Font::Font> font = Aspose::Font::Font::Open(fontDefinition);
    
    // Convert woff to ttf
    font->Convert(Aspose::Font::FontType::TTF);
    font->Save(System::IO::Path::Combine(get_OutputDir(), u"WoffToTtf_out3.ttf"));
    //ExampleEnd: 3
}

} // namespace ConvertFont
} // namespace Examples
} // namespace Font
} // namespace Aspose
