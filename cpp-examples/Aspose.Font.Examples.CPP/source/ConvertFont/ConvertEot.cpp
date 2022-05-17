#include "aspose_pch.h"
#include "ConvertEot.h"

#include <system/string.h>
#include <system/io/path.h>
#include <system/io/file_stream.h>
#include <system/io/file.h>
#include <system/details/dispose_guard.h>
#include <system/console.h>
#include <Aspose.Font.Cpp/src/Sources/FontFileDefinition.h>
#include <Aspose.Font.Cpp/src/Sources/FontDefinition.h>
#include <Aspose.Font.Cpp/src/Sources/FileSystemStreamSource.h>
#include <Aspose.Font.Cpp/src/FontType.h>
#include <Aspose.Font.Cpp/src/FontSavingFormats.h>
#include <Aspose.Font.Cpp/src/Font.h>


using namespace Aspose::Font::Sources;
namespace Aspose {

namespace Font {

namespace Examples {

namespace ConvertFont {

RTTI_INFO_IMPL_HASH(2225226718u, ::Aspose::Font::Examples::ConvertFont::ConvertEot, ThisTypeBaseTypesInfo);

ConvertEot::ConvertEot(System::String folderName) : Aspose::Font::Examples::BaseExamples(folderName)
{
}

void ConvertEot::Run()
{
    System::Console::WriteLine(u"Run Convert EOT to TTF/WOFF/WOFF2 examples");
    
    EotToTtfExample1();
    EotToTtfExample2();
    EotToWoffExample1();
    EotToWoffExample2();
}

void ConvertEot::EotToTtfExample1()
{
    System::Console::WriteLine(u"EOT to TTF ex: 1");
    
    //ExampleStart: 1
    // Open eot font, passing TTF as value for FontType, TtfFont will be returned as result of call Font.Open()
    System::String fontPath = System::IO::Path::Combine(get_DataDir(), u"LoraRegular.eot");
    System::SharedPtr<FontDefinition> fontDefinition = System::MakeObject<FontDefinition>(Aspose::Font::FontType::TTF, System::MakeObject<FontFileDefinition>(System::MakeObject<FileSystemStreamSource>(fontPath)));
    System::SharedPtr<Aspose::Font::Font> font = Aspose::Font::Font::Open(fontDefinition);
    
    // Ttf output settings
    System::String outPath = System::IO::Path::Combine(get_OutputDir(), u"EotToTtf_out1.ttf");
    
    // Save opened font to TrueType format
    font->Save(outPath);
    //ExampleEnd: 1
}

// Using statement is translated using System::Details::DisposeGuard class which may store exception and then throw from destructor.
// We block the warnings related as these are false alarms (the exception, if caught, will be re-thrown from the destructor).
#if defined(__MSVC__)
#pragma warning( push )
#pragma warning(disable : 4715)
#pragma warning(disable : 4700)
#pragma warning(disable : 4701)
#elif defined(__GNUC__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreturn-type"
#endif
void ConvertEot::EotToTtfExample2()
{
    System::Console::WriteLine(u"EOT to TTF ex: 2");
    
    //ExampleStart: 2
    // Open eot font, passing TTF as value for FontType, actually TtfFont will be returned as result of call Font.Open()
    System::String fontPath = System::IO::Path::Combine(get_DataDir(), u"LoraRegular.eot");
    System::SharedPtr<FontDefinition> fontDefinition = System::MakeObject<FontDefinition>(Aspose::Font::FontType::TTF, System::MakeObject<FontFileDefinition>(System::MakeObject<FileSystemStreamSource>(fontPath)));
    System::SharedPtr<Aspose::Font::Font> font = Aspose::Font::Font::Open(fontDefinition);
    
    // Ttf output settings
    System::String outPath = System::IO::Path::Combine(get_OutputDir(), u"EotToTtf_out2.ttf");
    {
        System::SharedPtr<System::IO::FileStream> outStream = System::IO::File::Create(outPath);
        // Clearing resources under 'using' statement
        System::Details::DisposeGuard<1> __dispose_guard_0({ outStream});
        // ------------------------------------------
        
        try
        {
            // Save opened font to TrueType format by call SaveToFormat() method
            font->SaveToFormat(outStream, Aspose::Font::FontSavingFormats::TTF);
        }
        catch(...)
        {
            __dispose_guard_0.SetCurrentException(std::current_exception());
        }
    }
    //ExampleEnd: 2
}
#if defined(__MSVC__)
#pragma warning( pop )
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

// Using statement is translated using System::Details::DisposeGuard class which may store exception and then throw from destructor.
// We block the warnings related as these are false alarms (the exception, if caught, will be re-thrown from the destructor).
#if defined(__MSVC__)
#pragma warning( push )
#pragma warning(disable : 4715)
#pragma warning(disable : 4700)
#pragma warning(disable : 4701)
#elif defined(__GNUC__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreturn-type"
#endif
void ConvertEot::EotToWoffExample1()
{
    System::Console::WriteLine(u"EOT to WOFF ex: 3");
    
    //ExampleStart: 3
    // Open eot font
    System::String fontPath = System::IO::Path::Combine(get_DataDir(), u"LoraRegular.eot");
    System::SharedPtr<FontDefinition> fontDefinition = System::MakeObject<FontDefinition>(Aspose::Font::FontType::TTF, System::MakeObject<FontFileDefinition>(System::MakeObject<FileSystemStreamSource>(fontPath)));
    System::SharedPtr<Aspose::Font::Font> font = Aspose::Font::Font::Open(fontDefinition);
    
    // Woff output settings
    System::String outPath = System::IO::Path::Combine(get_OutputDir(), u"EotToWoff_out3.woff");
    {
        System::SharedPtr<System::IO::FileStream> outStream = System::IO::File::Create(outPath);
        // Clearing resources under 'using' statement
        System::Details::DisposeGuard<1> __dispose_guard_0({ outStream});
        // ------------------------------------------
        
        try
        {
            // Convert eot to woff
            font->SaveToFormat(outStream, Aspose::Font::FontSavingFormats::WOFF);
        }
        catch(...)
        {
            __dispose_guard_0.SetCurrentException(std::current_exception());
        }
    }
    //ExampleEnd: 3
}
#if defined(__MSVC__)
#pragma warning( pop )
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

// Using statement is translated using System::Details::DisposeGuard class which may store exception and then throw from destructor.
// We block the warnings related as these are false alarms (the exception, if caught, will be re-thrown from the destructor).
#if defined(__MSVC__)
#pragma warning( push )
#pragma warning(disable : 4715)
#pragma warning(disable : 4700)
#pragma warning(disable : 4701)
#elif defined(__GNUC__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreturn-type"
#endif
void ConvertEot::EotToWoffExample2()
{
    System::Console::WriteLine(u"EOT to WOFF2 ex: 4");
    
    //ExampleStart: 4
    // Open eot font
    System::String fontPath = System::IO::Path::Combine(get_DataDir(), u"LoraRegular.eot");
    System::SharedPtr<FontDefinition> fontDefinition = System::MakeObject<FontDefinition>(Aspose::Font::FontType::TTF, System::MakeObject<FontFileDefinition>(System::MakeObject<FileSystemStreamSource>(fontPath)));
    System::SharedPtr<Aspose::Font::Font> font = Aspose::Font::Font::Open(fontDefinition);
    
    // Woff2 output settings
    System::String outPath = System::IO::Path::Combine(get_OutputDir(), u"EotToWoff2_out4.woff2");
    {
        System::SharedPtr<System::IO::FileStream> outStream = System::IO::File::Create(outPath);
        // Clearing resources under 'using' statement
        System::Details::DisposeGuard<1> __dispose_guard_0({ outStream});
        // ------------------------------------------
        
        try
        {
            // Convert eot to woff2
            font->SaveToFormat(outStream, Aspose::Font::FontSavingFormats::WOFF2);
        }
        catch(...)
        {
            __dispose_guard_0.SetCurrentException(std::current_exception());
        }
    }
    //ExampleEnd: 4
}
#if defined(__MSVC__)
#pragma warning( pop )
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

} // namespace ConvertFont
} // namespace Examples
} // namespace Font
} // namespace Aspose
