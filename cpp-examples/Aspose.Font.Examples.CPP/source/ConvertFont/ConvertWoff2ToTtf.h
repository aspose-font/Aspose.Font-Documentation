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

class ConvertWoff2ToTtf : public Aspose::Font::Examples::BaseExamples
{
    typedef ConvertWoff2ToTtf ThisType;
    typedef Aspose::Font::Examples::BaseExamples BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    ConvertWoff2ToTtf(System::String folderName);
    
    void Run() override;
    
private:

    void Woff2ToTtfExample1();
    void Woff2ToTtfExample2();
    void Woff2ToTtfExample3();
    
};

} // namespace ConvertFont
} // namespace Examples
} // namespace Font
} // namespace Aspose


