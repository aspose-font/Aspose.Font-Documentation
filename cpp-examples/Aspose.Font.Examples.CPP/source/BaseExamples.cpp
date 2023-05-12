#include "aspose_pch.h"
#include "BaseExamples.h"

#include <system/scope_guard.h>
#include <system/io/path.h>
#include <system/io/file.h>
#include <system/io/directory.h>
#include <system/environment.h>
#include <system/console.h>
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

RTTI_INFO_IMPL_HASH(2990209205u, ::Aspose::Font::Examples::BaseExamples, ThisTypeBaseTypesInfo);

const int32_t BaseExamples::AlignedTitleLength = 100;

System::String BaseExamples::get_DataDir()
{
    return dataDir;
}

System::String BaseExamples::get_OutputDir()
{
    return outputDir;
}

System::String BaseExamples::get_LicenseDir()
{
    return licenseDir;
}

BaseExamples::BaseExamples(System::String folderName)
{
    //Self Reference+++++++++++++++++++++++++++++++++++++++++++++++++++++++++
    System::Details::ThisProtector __local_self_ref(this);
    //---------------------------------------------------------Self Reference
    
    dataDir = System::IO::Path::Combine(System::MakeArray<System::String>({System::Environment::get_CurrentDirectory(), u"..", u"Data"}));
    outputDir = System::IO::Path::Combine(System::MakeArray<System::String>({System::Environment::get_CurrentDirectory(), u"Out", folderName}));
    licenseDir = System::IO::Path::Combine(dataDir, u"License");
    
    if (!System::IO::Directory::Exists(outputDir))
    {
        System::IO::Directory::CreateDirectory_(outputDir);
    }
    
    //Console.WriteLine($"Data Dir: {dataDir}");
    //Console.WriteLine($"Output Dir: {outputDir}");
    //Console.WriteLine($"License Dir: {licenseDir}");
}

BaseExamples::BaseExamples() : BaseExamples(u".")
{
}

System::String BaseExamples::DataPath(System::String fileName)
{
    return System::IO::Path::Combine(get_DataDir(), fileName);
}

System::String BaseExamples::DataPath(const System::ArrayPtr<System::String>& paths)
{
    return System::IO::Path::Combine(get_DataDir(), System::IO::Path::Combine(paths));
}

System::String BaseExamples::OutputPath(System::String fileName)
{
    return System::IO::Path::Combine(get_OutputDir(), fileName);
}

void BaseExamples::PrintExampleTitle(System::String title, int32_t exNum)
{
    System::Console::WriteLine(System::String::Format(u"\n{0}, ex: {1}", title, exNum));
}

void BaseExamples::PrintAlignedTitle(System::String caption, bool startFromNewLine /* = false*/, char16_t frameSymbol /* = u'-'*/)
{
    if (startFromNewLine)
    {
        System::Console::WriteLine();
    }
    int32_t frameLength = (AlignedTitleLength - caption.get_Length()) / 2;
    System::String frame(frameSymbol, frameLength);
    
    System::Console::WriteLine(frame + caption + frame);
}

System::SharedPtr<Aspose::Font::Font> BaseExamples::LoadFont(System::String fontFileName, FontType fontType)
{
    System::ArrayPtr<uint8_t> fontData = System::IO::File::ReadAllBytes(DataPath(fontFileName));
    System::String extension = fontFileName.Substring(fontFileName.LastIndexOf(u".") + 1);
    System::SharedPtr<FontDefinition> fontDefinition = System::MakeObject<FontDefinition>(fontType, System::MakeObject<FontFileDefinition>(extension, System::MakeObject<ByteContentStreamSource>(fontData)));
    return Aspose::Font::Font::Open(fontDefinition);
}

} // namespace Examples
} // namespace Font
} // namespace Aspose
