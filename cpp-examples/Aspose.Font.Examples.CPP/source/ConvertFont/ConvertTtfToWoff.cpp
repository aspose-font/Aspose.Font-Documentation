#include "aspose_pch.h"
#include "ConvertTtfToWoff.h"

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

RTTI_INFO_IMPL_HASH(4290184205u, ::Aspose::Font::Examples::ConvertFont::ConvertTtfToWoff, ThisTypeBaseTypesInfo);

ConvertTtfToWoff::ConvertTtfToWoff(System::String folderName) : Aspose::Font::Examples::BaseExamples(folderName)
{
}

void ConvertTtfToWoff::Run()
{
    System::Console::WriteLine(u"Run Convert TTF to WOFF examples");
    
    TtfToWoffExample1();
    TtfToWoffExample2();
}

void ConvertTtfToWoff::TtfToWoffExample1()
{
    System::Console::WriteLine(u"TTF to WOFF ex: 1");
    
    //ExampleStart: 1
    // Open ttf font
    System::String fontPath = System::IO::Path::Combine(get_DataDir(), u"Lora-Regular.ttf");
    System::SharedPtr<FontDefinition> fontDefinition = System::MakeObject<FontDefinition>(Aspose::Font::FontType::TTF, System::MakeObject<FontFileDefinition>(System::MakeObject<FileSystemStreamSource>(fontPath)));
    System::SharedPtr<Aspose::Font::Font> font = Aspose::Font::Font::Open(fontDefinition);
    
    // Woff output settings
    System::String outPath = System::IO::Path::Combine(get_OutputDir(), u"TtfToWoff_out1.woff");
    System::SharedPtr<System::IO::FileStream> outStream = System::IO::File::Create(outPath);
    
    // Convert ttf to woff
    font->SaveToFormat(outStream, Aspose::Font::FontSavingFormats::WOFF);
    //ExampleEnd: 1
}

void ConvertTtfToWoff::TtfToWoffExample2()
{
    System::Console::WriteLine(u"TTF to WOFF ex: 2");
    
    //ExampleStart: 2
    // Open ttf font
    System::ArrayPtr<uint8_t> fontMemoryData = System::IO::File::ReadAllBytes(DataPath(u"Montserrat-Bold.ttf"));
    System::SharedPtr<FontDefinition> fontDefinition = System::MakeObject<FontDefinition>(Aspose::Font::FontType::TTF, System::MakeObject<FontFileDefinition>(System::MakeObject<ByteContentStreamSource>(fontMemoryData)));
    System::SharedPtr<TtfFont> ttfFont = System::DynamicCast_noexcept<Aspose::Font::Ttf::TtfFont>(Aspose::Font::Font::Open(fontDefinition));
    
    // Woff output settings
    System::String outPath = System::IO::Path::Combine(get_OutputDir(), u"TtfToWoff_out2.woff");
    System::SharedPtr<System::IO::FileStream> outStream = System::IO::File::Create(outPath);
    
    // Convert ttf to woff
    ttfFont->SaveToFormat(outStream, Aspose::Font::FontSavingFormats::WOFF);
    //ExampleEnd: 2
}

} // namespace ConvertFont
} // namespace Examples
} // namespace Font
} // namespace Aspose
