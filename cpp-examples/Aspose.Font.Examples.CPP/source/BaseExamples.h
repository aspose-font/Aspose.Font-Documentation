#pragma once

#include <system/array.h>
#include <cstdint>

#include "IExamples.h"

namespace Aspose {

namespace Font {

namespace Examples {

class BaseExamples : public Aspose::Font::Examples::IExamples
{
    typedef BaseExamples ThisType;
    typedef Aspose::Font::Examples::IExamples BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    System::String get_DataDir() override;
    System::String get_OutputDir() override;
    System::String get_LicenseDir() override;
    
    BaseExamples(System::String folderName);
    BaseExamples();
    
    System::String DataPath(System::String fileName) override;
    System::String DataPath(const System::ArrayPtr<System::String>& paths) override;
    System::String OutputPath(System::String fileName) override;
    void Run() override = 0;
    
protected:

    void PrintExampleTitle(System::String title, int32_t exNum);
    
private:

    System::String dataDir;
	System::String outputDir;
    System::String licenseDir;
    
};

} // namespace Examples
} // namespace Font
} // namespace Aspose


