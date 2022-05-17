#include "aspose_pch.h"
#include "BaseExamples.h"

#include <system/scope_guard.h>
#include <system/io/path.h>
#include <system/io/directory.h>
#include <system/environment.h>
#include <system/console.h>

namespace Aspose {

namespace Font {

namespace Examples {

RTTI_INFO_IMPL_HASH(2990209205u, ::Aspose::Font::Examples::BaseExamples, ThisTypeBaseTypesInfo);

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
    outputDir = System::IO::Path::Combine(System::MakeArray<System::String>({System::Environment::get_CurrentDirectory(), u"..", u"Output", folderName}));
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

} // namespace Examples
} // namespace Font
} // namespace Aspose
