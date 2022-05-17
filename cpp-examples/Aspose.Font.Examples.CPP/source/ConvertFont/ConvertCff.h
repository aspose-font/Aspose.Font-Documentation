#pragma once

#include "..\BaseExamples.h"

namespace System 
{
class String;
} // namespace System

namespace Aspose {

namespace Font {

namespace Examples {

namespace ConvertFont {

class ConvertCff : public Aspose::Font::Examples::BaseExamples
{
    typedef ConvertCff ThisType;
    typedef Aspose::Font::Examples::BaseExamples BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    ConvertCff(System::String folderName);
    
    void Run() override;
    
private:

    void CffToTtfExample1();
    void CffToTtfExample2();
    void CffToWoffExample();
    void CffToWoffExample2();
    
};

} // namespace ConvertFont
} // namespace Examples
} // namespace Font
} // namespace Aspose


