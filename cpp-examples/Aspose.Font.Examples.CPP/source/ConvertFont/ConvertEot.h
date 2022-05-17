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

class ConvertEot : public Aspose::Font::Examples::BaseExamples
{
    typedef ConvertEot ThisType;
    typedef Aspose::Font::Examples::BaseExamples BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    ConvertEot(System::String folderName);
    
    void Run() override;
    
private:

    void EotToTtfExample1();
    void EotToTtfExample2();
    void EotToWoffExample1();
    void EotToWoffExample2();
    
};

} // namespace ConvertFont
} // namespace Examples
} // namespace Font
} // namespace Aspose


