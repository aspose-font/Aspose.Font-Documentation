#include "aspose_pch.h"
#include "ConvertCff.h"

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

RTTI_INFO_IMPL_HASH(2208113303u, ::Aspose::Font::Examples::ConvertFont::ConvertCff, ThisTypeBaseTypesInfo);

ConvertCff::ConvertCff(System::String folderName) : Aspose::Font::Examples::BaseExamples(folderName)
{
}

void ConvertCff::Run()
{
    System::Console::WriteLine(u"Run Convert CFF to TTF/WOFF/WOFF2 examples");
    
    CffToTtfExample1();
    CffToTtfExample2();
    CffToWoffExample();
    CffToWoffExample2();
}

void ConvertCff::CffToTtfExample1()
{
    System::Console::WriteLine(u"CFF to TTF ex: 1");
    
    //ExampleStart: 1            
    // Open cff font
    System::String fontPath = System::IO::Path::Combine(get_DataDir(), u"CenturyGothic.cff");
    System::SharedPtr<FontDefinition> fontDefinition = System::MakeObject<FontDefinition>(Aspose::Font::FontType::CFF, System::MakeObject<FontFileDefinition>(u"cff", System::MakeObject<FileSystemStreamSource>(fontPath)));
    System::SharedPtr<Aspose::Font::Font> font = Aspose::Font::Font::Open(fontDefinition);
    
    // Ttf output settings
    System::String outPath = System::IO::Path::Combine(get_OutputDir(), u"CffToTtf_out1.ttf");
    System::SharedPtr<System::IO::FileStream> outStream = System::IO::File::Create(outPath);
    
    // Convert cff to ttf
    font->SaveToFormat(outStream, Aspose::Font::FontSavingFormats::TTF);
    
    //ExampleEnd: 1
}

void ConvertCff::CffToTtfExample2()
{
    System::Console::WriteLine(u"CFF to TTF ex: 2");
    
    //ExampleStart: 2
    
    // Open cff font
    System::String fontPath = System::IO::Path::Combine(get_DataDir(), u"CenturyGothic.cff");
    System::SharedPtr<FontDefinition> fontDefinition = System::MakeObject<FontDefinition>(Aspose::Font::FontType::CFF, System::MakeObject<FontFileDefinition>(u"cff", System::MakeObject<FileSystemStreamSource>(fontPath)));
    System::SharedPtr<Aspose::Font::Font> font = Aspose::Font::Font::Open(fontDefinition);
    
    // Convert cff to ttf
    System::SharedPtr<Aspose::Font::Font> ttfFont = System::Cast_noexcept<Aspose::Font::Ttf::TtfFont>(font->Convert(Aspose::Font::FontType::TTF));
    ttfFont->Save(System::IO::Path::Combine(get_OutputDir(), u"CffToTtf_out2.ttf"));
    
    //ExampleEnd: 2
}

void ConvertCff::CffToWoffExample()
{
    System::Console::WriteLine(u"CFF to WOFF ex: 3");
    
    //ExampleStart: 3
    
    // Open cff font
    System::ArrayPtr<uint8_t> fontMemoryData = System::IO::File::ReadAllBytes(System::IO::Path::Combine(get_DataDir(), u"CenturyGothic.cff"));
    System::SharedPtr<FontDefinition> fontDefinition = System::MakeObject<FontDefinition>(Aspose::Font::FontType::CFF, System::MakeObject<FontFileDefinition>(u"cff", System::MakeObject<ByteContentStreamSource>(fontMemoryData)));
    System::SharedPtr<Aspose::Font::Font> font = Aspose::Font::Font::Open(fontDefinition);
    
    // Woff output settings
    System::String outPath = System::IO::Path::Combine(get_OutputDir(), u"CffToWoff_out3.woff");
    System::SharedPtr<System::IO::FileStream> outStream = System::IO::File::Create(outPath);
    
    // Convert cff to woff
    font->SaveToFormat(outStream, Aspose::Font::FontSavingFormats::WOFF);
    
    //ExampleEnd: 3
}

void ConvertCff::CffToWoffExample2()
{
    System::Console::WriteLine(u"CFF to WOFF2 ex: 4");
    
    //ExampleStart: 4
    
    // Open cff font
    System::ArrayPtr<uint8_t> fontMemoryData = System::IO::File::ReadAllBytes(System::IO::Path::Combine(get_DataDir(), u"CenturyGothic.cff"));
    System::SharedPtr<FontDefinition> fontDefinition = System::MakeObject<FontDefinition>(Aspose::Font::FontType::CFF, System::MakeObject<FontFileDefinition>(u"cff", System::MakeObject<ByteContentStreamSource>(fontMemoryData)));
    System::SharedPtr<Aspose::Font::Font> font = Aspose::Font::Font::Open(fontDefinition);
    
    // Woff2 output settings
    System::String outPath = System::IO::Path::Combine(get_OutputDir(), u"CffToWoff2_out4.woff2");
    System::SharedPtr<System::IO::FileStream> outStream = System::IO::File::Create(outPath);
    
    // Convert cff to woff2
    font->SaveToFormat(outStream, Aspose::Font::FontSavingFormats::WOFF2);
    
    //ExampleEnd: 4
}

} // namespace ConvertFont
} // namespace Examples
} // namespace Font
} // namespace Aspose
