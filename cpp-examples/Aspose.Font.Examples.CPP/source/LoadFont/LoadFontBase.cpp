#include "aspose_pch.h"
#include "LoadFontBase.h"

#include <system/string.h>
#include <system/console.h>
#include <Aspose.Font.Cpp/src/Font.h>

namespace Aspose {

namespace Font {

namespace Examples {

namespace LoadFont {

RTTI_INFO_IMPL_HASH(3358214102u, ::Aspose::Font::Examples::LoadFont::LoadFontBase, ThisTypeBaseTypesInfo);

void LoadFontBase::PrintExampleTitle(System::String title, int32_t exNum)
{
    System::Console::WriteLine(System::String::Format(u"\n{0} ex: {1}", title, exNum));
}

void LoadFontBase::PrintSimpleFontInfo(System::SharedPtr<Aspose::Font::Font> font, System::String fontSource)
{
    System::Console::WriteLine(System::String::Format(u"\nFont loaded from {0}\n\t has name: \"{1}\",\n\t glyph count : {2}", fontSource, font->get_FontName(), font->get_NumGlyphs()));
}

} // namespace LoadFont
} // namespace Examples
} // namespace Font
} // namespace Aspose
