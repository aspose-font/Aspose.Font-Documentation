#pragma once

#include <system/array.h>

namespace Aspose {

namespace Font {

namespace Examples {

class IExamples : public System::Object
{
    typedef IExamples ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    virtual System::String get_DataDir() = 0;
    virtual System::String get_OutputDir() = 0;
    virtual System::String get_LicenseDir() = 0;
    
    virtual System::String DataPath(System::String path) = 0;
    virtual System::String DataPath(const System::ArrayPtr<System::String>& paths) = 0;
    virtual System::String OutputPath(System::String path) = 0;
    virtual void Run() = 0;
    
};

} // namespace Examples
} // namespace Font
} // namespace Aspose


