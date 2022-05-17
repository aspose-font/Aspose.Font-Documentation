#pragma once

#include "LoadFont/LoadFontBase.h"

namespace Aspose {

namespace Font {

namespace Examples {

namespace LoadFont {

class LoadCff : public Aspose::Font::Examples::LoadFont::LoadFontBase
{
    typedef LoadCff ThisType;
    typedef Aspose::Font::Examples::LoadFont::LoadFontBase BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    LoadCff();
    
    void Run() override;
    
private:

    void LoadExample1();
    void LoadExample2();
    
};

} // namespace LoadFont
} // namespace Examples
} // namespace Font
} // namespace Aspose


