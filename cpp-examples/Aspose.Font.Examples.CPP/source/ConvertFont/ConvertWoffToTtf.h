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

class ConvertWoffToTtf : public Aspose::Font::Examples::BaseExamples
{
    typedef ConvertWoffToTtf ThisType;
    typedef Aspose::Font::Examples::BaseExamples BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    ConvertWoffToTtf(System::String folderName);
    
    void Run() override;
    
private:

    void WoffToTtfExample1();
    void WoffToTtfExample2();
    void WoffToTtfExample3();
    
};

} // namespace ConvertFont
} // namespace Examples
} // namespace Font
} // namespace Aspose


