#include "aspose_pch.h"
#include "GlyphMetrics.h"

#include <system/object_ext.h>
#include <system/io/path.h>
#include <system/enumerator_adapter.h>
#include <system/console.h>
#include <system/collections/list.h>
#include <Aspose.Font.Cpp/src/Sources/FontFileDefinition.h>
#include <Aspose.Font.Cpp/src/Sources/FontDefinition.h>
#include <Aspose.Font.Cpp/src/Sources/FileSystemStreamSource.h>
#include <Aspose.Font.Cpp/src/Rendering/Path/RenderingPath.h>
#include <Aspose.Font.Cpp/src/Rendering/Path/PathSegmentCollection.h>
#include <Aspose.Font.Cpp/src/Rendering/Path/MoveTo.h>
#include <Aspose.Font.Cpp/src/Rendering/Path/LineTo.h>
#include <Aspose.Font.Cpp/src/Rendering/Path/IPathSegment.h>
#include <Aspose.Font.Cpp/src/Rendering/Path/CurveTo.h>
#include <Aspose.Font.Cpp/src/Glyphs/GlyphId.h>
#include <Aspose.Font.Cpp/src/Glyphs/Glyph.h>
#include <Aspose.Font.Cpp/src/FontType.h>
#include <Aspose.Font.Cpp/src/FontBBox.h>
#include <Aspose.Font.Cpp/src/Font.h>
#include <Aspose.Font.Cpp/src/Common/Interfaces/IFontMetrics.h>
#include <Aspose.Font.Cpp/src/Common/Interfaces/IFontEncoding.h>
#include <drawing/point.h>
#include <cstdint>


using namespace Aspose::Font::Sources;
using namespace Aspose::Font::Glyphs;
using namespace Aspose::Font::RenderingPath;
namespace Aspose {

namespace Font {

namespace Examples {

namespace Glyphs {

RTTI_INFO_IMPL_HASH(3387812377u, ::Aspose::Font::Examples::Glyphs::GlyphMetrics, ThisTypeBaseTypesInfo);

const System::String GlyphMetrics::FontName = u"Montserrat-Regular";
const char16_t GlyphMetrics::GlyphName = u'A';

GlyphMetrics::GlyphMetrics() : Aspose::Font::Examples::BaseExamples()
{
}

void GlyphMetrics::Run()
{
    PrintAlignedTitle(u"Glyph metrics examples", true);
    System::Console::WriteLine(System::String::Format(u"\nThese examples will use font \"{0}\" and glyph for '{1}' symbol", FontName, GlyphName));
    InitFont();
    
    CalculateStringWidth();
    PrintGlyphBbox();
    PrintGlyphPointsCoordinates();
    System::Console::WriteLine();
}

void GlyphMetrics::CalculateStringWidth()
{
    PrintExampleTitle(u"Calculate string width", 1);
    
    //Declare text and other constants
    const System::String text = u"Hello world";
    const int32_t fontSize = 10;
    
    //Declare variable for string width
    double width = 0;
    
    //Get glyph for each letter in text and calculate width for whole text.
    //The same result can be achieved using method font.Metrics.MeasureString(text, fontSize).
    for (char16_t symbol : text)
    {
        System::SharedPtr<GlyphId> gid = this->_font->get_Encoding()->DecodeToGid(symbol);
        System::SharedPtr<Glyph> glyph = this->_font->GetGlyphById(gid);
        width += (glyph->get_WidthVectorX() / this->_font->get_Metrics()->get_UnitsPerEM()) * fontSize;
    }
    
    //Print output results
    System::Console::WriteLine(System::String::Format(u"Width for text \"{0}\" with font size {2} is equal {3}.", text, FontName, fontSize, width));
}

void GlyphMetrics::PrintGlyphBbox()
{
    PrintExampleTitle(u"Glyph's BBox and left side bearing", 2);
    
    //Get glyph for symbol 'A' 
    System::SharedPtr<Glyph> glyph = this->_font->GetGlyphById(this->_font->get_Encoding()->DecodeToGid(GlyphName));
    
    //Print BBox and left side bearing
    System::Console::WriteLine(System::String::Format(u"Glyph '{0}' BBox: {1}, left side bearing: {2}.", GlyphName, GetBBoxString(glyph->get_GlyphBBox()), glyph->get_LeftSidebearingX()));
}

System::String GlyphMetrics::GetBBoxString(System::SharedPtr<FontBBox> bBox)
{
    return System::String::Format(u"{{ XMin = {0}, YMin = {1}, XMax = {2}, YMax = {3}  }}", bBox->get_XMin(), bBox->get_YMin(), bBox->get_XMax(), bBox->get_YMax());
}

void GlyphMetrics::PrintGlyphPointsCoordinates()
{
    PrintExampleTitle(u"Retrieving glyph points coordinates", 3);
    System::ArrayPtr<System::Drawing::Point> glyphPoints = GetGlyphPoints(this->_font->GetGlyphById(this->_font->get_Encoding()->DecodeToGid(GlyphName)));
    
    System::Console::WriteLine(u"Points for glyph '{0}':", GlyphName);
    int32_t columnSize = 3, columnNum = 0;
    for (int32_t ptNum = 0; ptNum < glyphPoints->get_Length(); ptNum++)
    {
        System::Console::Write(System::String::Format(u"{{ X = {0}, Y = {1} }}", glyphPoints[ptNum].get_X(), glyphPoints[ptNum].get_Y()));
        
        if (ptNum == (glyphPoints->get_Length() - 1))
        {
            return;
        }
        if (columnNum == (columnSize - 1))
        {
            System::Console::Write(u",\r\n");
            columnNum = 0;
        }
        else
        {
            System::Console::Write(u", ");
            columnNum++;
        }
        
    }
}

System::ArrayPtr<System::Drawing::Point> GlyphMetrics::GetGlyphPoints(System::SharedPtr<Aspose::Font::Glyphs::Glyph> glyph)
{
    //Declare resultant list with pints
    System::SharedPtr<System::Collections::Generic::List<System::Drawing::Point>> points = System::MakeObject<System::Collections::Generic::List<System::Drawing::Point>>();
    
    //Init service reference on IPathSegment
    System::SharedPtr<IPathSegment> prevSegment;
    
    //Iterate all glyph path segments and collect points
    for (auto&& segment : glyph->get_Path()->get_Segments())
    {
        if ((System::ObjectExt::Is<LineTo>(segment)) || (System::ObjectExt::Is<CurveTo>(segment)))
        {
            if (System::ObjectExt::Is<MoveTo>(prevSegment))
            {
                System::SharedPtr<MoveTo> moveTo = System::AsCast<Aspose::Font::RenderingPath::MoveTo>(prevSegment);
                AddPoint((int32_t)moveTo->get_X(), (int32_t)moveTo->get_Y(), points);
            }
            if (System::ObjectExt::Is<LineTo>(segment))
            {
                System::SharedPtr<LineTo> line = System::AsCast<Aspose::Font::RenderingPath::LineTo>(segment);
                AddPoint((int32_t)line->get_X(), (int32_t)line->get_Y(), points);
            }
            else if (System::ObjectExt::Is<CurveTo>(segment))
            {
                System::SharedPtr<CurveTo> curve = System::AsCast<Aspose::Font::RenderingPath::CurveTo>(segment);
                AddPoint((int32_t)curve->get_X1(), (int32_t)curve->get_Y1(), points);
                AddPoint((int32_t)curve->get_X2(), (int32_t)curve->get_Y2(), points);
                AddPoint((int32_t)curve->get_X3(), (int32_t)curve->get_Y3(), points);
            }
        }
        prevSegment = segment;
    }
    
    return points->ToArray();
}

void GlyphMetrics::AddPoint(int32_t x, int32_t y, System::SharedPtr<System::Collections::Generic::List<System::Drawing::Point>> points)
{
    System::Drawing::Point p;
    p.set_X(x);
    p.set_Y(y);
    points->Add(p);
}

void GlyphMetrics::InitFont()
{
    System::String fontPath = System::IO::Path::Combine(get_DataDir(), FontName + u".ttf");
    System::SharedPtr<FontDefinition> fontDefinition = System::MakeObject<FontDefinition>(Aspose::Font::FontType::TTF, System::MakeObject<FontFileDefinition>(System::MakeObject<FileSystemStreamSource>(fontPath)));
    this->_font = Aspose::Font::Font::Open(fontDefinition);
}

} // namespace Glyphs
} // namespace Examples
} // namespace Font
} // namespace Aspose
