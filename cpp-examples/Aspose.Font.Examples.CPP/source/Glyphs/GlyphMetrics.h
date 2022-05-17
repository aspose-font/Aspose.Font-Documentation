#pragma once

#include "BaseExamples.h"

namespace Aspose
{
namespace Font
{
class Font;
class FontBBox;
namespace Glyphs
{
class Glyph;
} // namespace Glyphs
} // namespace Font
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class List;
} // namespace Generic
} // namespace Collections
namespace Drawing
{
class Point;
} // namespace Drawing
} // namespace System

namespace Aspose {

namespace Font {

namespace Examples {

namespace Glyphs {

class GlyphMetrics : public Aspose::Font::Examples::BaseExamples
{
    typedef GlyphMetrics ThisType;
    typedef Aspose::Font::Examples::BaseExamples BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    GlyphMetrics();
    
    void Run() override;
    
protected:

    #ifdef ASPOSE_GET_SHARED_MEMBERS
    System::Object::shared_members_type GetSharedMembers() const override;
    #endif
    
    
private:

    static const System::String FontName;
    static const char16_t GlyphName;
    System::SharedPtr<Aspose::Font::Font> _font;
    
    void CalculateStringWidth();
    void PrintGlyphBbox();
    System::String GetBBoxString(System::SharedPtr<FontBBox> bBox);
    void PrintGlyphPointsCoordinates();
    /// <summary>
    /// Next method calculates all glyph points with coordinates. 
    /// Logic used to calculate points is simple and it doesn't extract
    /// glyph contours. To divide whole path on contours use such 
    /// type as <see cref="ClosePath"></see> when iterating path segments.
    /// </summary>
    /// <param name="glyph">glyph to get points from</param>
    /// <returns>All points calculated</returns>
    System::ArrayPtr<System::Drawing::Point> GetGlyphPoints(System::SharedPtr<Aspose::Font::Glyphs::Glyph> glyph);
    void AddPoint(int32_t x, int32_t y, System::SharedPtr<System::Collections::Generic::List<System::Drawing::Point>> points);
    void InitFont();
    
};

} // namespace Glyphs
} // namespace Examples
} // namespace Font
} // namespace Aspose


