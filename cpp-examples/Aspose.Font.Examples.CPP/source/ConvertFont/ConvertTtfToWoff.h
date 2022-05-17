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

class ConvertTtfToWoff : public Aspose::Font::Examples::BaseExamples
{
    typedef ConvertTtfToWoff ThisType;
    typedef Aspose::Font::Examples::BaseExamples BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    ConvertTtfToWoff(System::String folderName);
    
    void Run() override;
    
private:

    void TtfToWoffExample1();
    void TtfToWoffExample2();
    
};

} // namespace ConvertFont
} // namespace Examples
} // namespace Font
} // namespace Aspose


