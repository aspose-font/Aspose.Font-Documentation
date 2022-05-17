#pragma once

#include "LoadFont/LoadFontBase.h"

namespace Aspose {

namespace Font {

namespace Examples {

namespace LoadFont {

class LoadTtf : public Aspose::Font::Examples::LoadFont::LoadFontBase
{
    typedef LoadTtf ThisType;
    typedef Aspose::Font::Examples::LoadFont::LoadFontBase BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    LoadTtf();
    
    void Run() override;
    
private:

    void LoadExample1();
    void LoadExample2();
    void LoadExample3();
    void LoadExample4();
    
};

} // namespace LoadFont
} // namespace Examples
} // namespace Font
} // namespace Aspose


