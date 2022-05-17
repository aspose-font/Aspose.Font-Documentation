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

class ConvertTtfToWoff2 : public Aspose::Font::Examples::BaseExamples
{
    typedef ConvertTtfToWoff2 ThisType;
    typedef Aspose::Font::Examples::BaseExamples BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    ConvertTtfToWoff2(System::String folderName);
    
    void Run() override;
    
private:

    void TtfToWoff2Example1();
    void TtfToWoff2Example2();
    
};

} // namespace ConvertFont
} // namespace Examples
} // namespace Font
} // namespace Aspose


