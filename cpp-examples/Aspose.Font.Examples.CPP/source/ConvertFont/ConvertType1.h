#pragma once

#include "BaseExamples.h"

namespace System 
{
class String;
} // namespace System

namespace Aspose {

namespace Font {

namespace Examples {

namespace ConvertFont {

class ConvertType1 : public Aspose::Font::Examples::BaseExamples
{
    typedef ConvertType1 ThisType;
    typedef Aspose::Font::Examples::BaseExamples BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    ConvertType1(System::String folderName);
    
    void Run() override;
    
private:

    void Type1ToTtfExample1();
    void Type1ToTtfExample2();
    void Type1ToWoffExample();
    void Type1ToWoff2Example();
    
};

} // namespace ConvertFont
} // namespace Examples
} // namespace Font
} // namespace Aspose


