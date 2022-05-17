#pragma once

#include <cstdint>

#include "BaseExamples.h"

namespace System 
{
class String;
} // namespace System
namespace Aspose 
{
namespace Font 
{
class Font;
} // namespace Font
} // namespace Aspose

namespace Aspose {

namespace Font {

namespace Examples {

namespace LoadFont {

class LoadFontBase : public Aspose::Font::Examples::BaseExamples
{
    typedef LoadFontBase ThisType;
    typedef Aspose::Font::Examples::BaseExamples BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
protected:

    void PrintExampleTitle(System::String title, int32_t exNum);
    void PrintSimpleFontInfo(System::SharedPtr<Aspose::Font::Font> font, System::String fontSource);
    
};

} // namespace LoadFont
} // namespace Examples
} // namespace Font
} // namespace Aspose


