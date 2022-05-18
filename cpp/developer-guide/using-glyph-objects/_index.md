---
title: Using Glyph objects | C++
linktitle: Using Glyph objects in Aspose.Font for C++ library
type: docs
weight: 50
url: /cpp/developer-guide/using-glyph-objects
keywords: coding glyphs, glyph object, glyph type, glyph property, glyphs software, scripting glyphs
description: Glyph objects in Aspose.Font library functionality is described by the properties it has. The attached code snippets help you understand how to code Glyphs.
---

Working with glyphs is crucial when coding fonts as it is their unit. When the basic information about glyphs is explained in the [*article*](https://docs.aspose.com/font/net/what-is-font/glyph/) of the [*What is font paragraph*](https://docs.aspose.com/font/net/what-is-font/), here we are going to teach you the functionality of Aspose.Font for working with glyphs and the *Glyph* objects in particular.

## Glyph object

				
Glyphs of any font are represented by [*Glyph*](https://apireference.aspose.com/font/cpp/aspose.font.glyphs/glyph) type in Aspose.Font library.
So, *Glyph* type is a universal object for font glyphs, independently from font format(TrueType, Compact Font Format, etc).

### The functionality provided by the Glyph object

What functionality does this object provide for us?
	
This question is answered by the properties it has. 

- First, let's look at the property [*State*](https://apireference.aspose.com/font/cpp/class/aspose.font.glyphs.glyph#a429ca552ff46331e65e307a9a1d754b5). Some of the fonts may be corrupted, and their glyphs also can be corrupted.
Property *State* tells us whether the glyph is corrupted. If it has the value [*ParsedWithErrors*](https://apireference.aspose.com/font/cpp/namespace/aspose.font.glyphs#acd6c03fef04c5af04d4e4085a1eb44b4), then that glyph was parsed with errors, and not all the glyph data was received.
- Properties [*WidthVectorX*](https://apireference.aspose.com/font/cpp/class/aspose.font.glyphs.glyph#a781baf958e0486057caedc041175bc23) and [*LeftSidebearingX*](https://apireference.aspose.com/font/cpp/class/aspose.font.glyphs.glyph#a5b73723c57eb95de14146c7993d3b3a4) tell us about such [*glyph metrics*](https://docs.aspose.com/font/net/what-is-font/glyph/#glyph-metrics) as advance width and left side bearing correspondingly.
- Properties [*WidthVectorY*](https://apireference.aspose.com/font/cpp/class/aspose.font.glyphs.glyph#af1ac799dcbee5a73f217515dd9cbaafa) and [*LeftSidebearingY*](https://apireference.aspose.com/font/cpp/class/aspose.font.glyphs.glyph#a021ba54c2b77a350ffad84d01099335f) have the same sense as *WidthVectorX* and *LeftSidebearingX*, but *WidthVectorY* and *LeftSidebearingY* are related to coordinates for the vertical Y-axis.

Let's have an [*example*](https://github.com/aspose-font/Aspose.Font-Documentation/blob/master/cpp-examples/Aspose.Font.Examples.CPP/source/Glyphs/GlyphMetrics.cpp) with the next code snippet that shows how to calculate the width for the text "Hello world" in pixels when the font size is 10.

Add the next namespaces at the head of the file:

```C++
using namespace Aspose::Font::Glyphs;
System::SharedPtr<Aspose::Font::Font> font;
```

Then you need to take the next steps:

```C++
    //Declare text and other constants
    const System::String text = u"Hello world";
    const int32_t fontSize = 10;
    
    //Declare variable for string width
    double width = 0;
    
    //Get glyph for each letter in text and calculate width for whole text.
    //The same result can be achieved using method font->get_Metrics()->MeasureString(text, fontSize).
    for (char16_t symbol : text)
    {
        System::SharedPtr<GlyphId> gid = this->_font->get_Encoding()->DecodeToGid(symbol);
        System::SharedPtr<Glyph> glyph = this->_font->GetGlyphById(gid);
        width += (glyph->get_WidthVectorX() / this->_font->get_Metrics()->get_UnitsPerEM()) * fontSize;
    }

```

To get the glyph's Bounding box use the [*GlyphBBox*](https://apireference.aspose.com/font/cpp/class/aspose.font.glyphs.glyph#a5cb7d6b41e3ceb3a0abb371ecd993be3) property of the [*Glyph*](https://apireference.aspose.com/font/cpp/aspose.font.glyphs/glyph) object. 

To get a visual representation of glyphs you need to know the coordinates for all glyphs' points.

### How to get coordinates for all glyph points from the Glyph object?

The next properties, [*IsEmpty*](https://apireference.aspose.com/font/cpp/class/aspose.font.glyphs.glyph#ab9b4c978123d021d2be7b5bce6e24541) and [*Path*](https://apireference.aspose.com/font/cpp/class/aspose.font.glyphs.glyph#a92dba17a5750ba41154c706493f4d289) were designed for this case.
	
Property *IsEmpty* is auxiliary. It tells us whether the glyph's path is empty, or in other words glyph has no drawing instructions at all. If it has the value *false*, it's time to construct the whole glyph's figure using the very useful property *Path*.

In the concept of Aspose.Font library the representation of any glyph is divided into the simplest graphic primitives, called *segments*, and represented by interface [*IPathSegment*](https://apireference.aspose.com/font/cpp/class/aspose.font.rendering_path.i_path_segment). 
Interface *IPathSegment* is a base abstract graphic primitive. 

Concrete graphic primitives are represented by such types as [*MoveTo*](https://apireference.aspose.com/font/cpp/class/aspose.font.rendering_path.move_to), [*LineTo*](https://apireference.aspose.com/font/cpp/class/aspose.font.rendering_path.line_to), [*CurveTo*](https://apireference.aspose.com/font/cpp/class/aspose.font.rendering_path.curve_to), and [*ClosePath*](https://apireference.aspose.com/font/cpp/class/aspose.font.rendering_path.close_path).

Type *ClosePath* is used to indicate the end of the current graphic contour. 

Types *MoveTo*, *LineTo*, and *CurveTo* by their definition correspond with the identical postscript operators.

Also, the types *MoveTo* and *LineTo* by their definition correspond to the functions `MoveToEx()` and `LineTo()`  from windows GDI lib, type *CurveTo* is used to describe *Bézier* curves.

*Glyph* property *Path* provides us with a collection of all graphic primitives for that glyph. 

Property *Path* has type [*SegmentPath*](https://apireference.aspose.com/font/cpp/class/aspose.font.rendering_path.segment_path) and every object of this type has property [*Segments*](https://apireference.aspose.com/font/cpp/class/aspose.font.rendering_path.segment_path#a60bccd351dedfb1ee9e8ba756b8d77cb) of type [*PathSegmentCollection*](https://apireference.aspose.com/font/cpp/class/aspose.font.rendering_path.path_segment_collection). This property *Segments* returns all the graphic primitives which object *SegmentPath* includes. In other words, we can get all the graphic primitives for the glyph using the entry glyph.Path.Segments.

The next [*example*](https://github.com/aspose-font/Aspose.Font-Documentation/blob/master/cpp-examples/Aspose.Font.Examples.CPP/source/Glyphs/GlyphMetrics.cpp) calculates all the points which glyph has and stores them in variable `points`, which represents an array of objects with [Point](https://docs.microsoft.com/en-us/dotnet/api/system.drawing.point?view=net-6.0) type.

The logic used by this sample is simple and it doesn't extract glyph contours. To get these contours using type *ClosePath* must be added to segments processing. 

Add the next namespaces at the head of the file:

```C++
using System::Collections::Generic;
using System::Drawing;
using Aspose::Font::Glyphs;
using Aspose::Font::RenderingPath;
```

Then you need to take the next steps:

```C++
    System::SharedPtr<Glyph> glyph;

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
                System::SharedPtr<MoveTo> moveTo = System::DynamicCast_noexcept<Aspose::Font::RenderingPath::MoveTo>(prevSegment);
                AddPoint((int32_t)moveTo->get_X(), (int32_t)moveTo->get_Y(), points);
            }
            if (System::ObjectExt::Is<LineTo>(segment))
            {
                System::SharedPtr<LineTo> line = System::DynamicCast_noexcept<Aspose::Font::RenderingPath::LineTo>(segment);
                AddPoint((int32_t)line->get_X(), (int32_t)line->get_Y(), points);
            }
            else if (System::ObjectExt::Is<CurveTo>(segment))
            {
                System::SharedPtr<CurveTo> curve = System::DynamicCast_noexcept<Aspose::Font::RenderingPath::CurveTo>(segment);
                AddPoint((int32_t)curve->get_X1(), (int32_t)curve->get_Y1(), points);
                AddPoint((int32_t)curve->get_X2(), (int32_t)curve->get_Y2(), points);
                AddPoint((int32_t)curve->get_X3(), (int32_t)curve->get_Y3(), points);
            }
        }
        prevSegment = segment;
    }	

void GlyphMetrics::AddPoint(int32_t x, int32_t y, System::SharedPtr<System::Collections::Generic::List<System::Drawing::Point>> points)
{
    System::Drawing::Point p;
    p.set_X(x);
    p.set_Y(y);
    points->Add(p);
}

```


{{% alert color="primary" %}}
All the examples of using the Aspose.Font are stored in [*Aspose.Font.Examples.CPP.sln solution*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/cpp-examples), in the [*cpp-examples*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/cpp-examples) of the [*Aspose.Font Documentation*](https://github.com/aspose-font/Aspose.Font-Documentation)

If you have any issues, you may post them at the [*Aspose.Font.Product Family*](https://forum.aspose.com/c/font/41) section of the [*Free Support Forum*](https://forum.aspose.com/) and within a few hours our support team will clear everything up for you.
{{% /alert %}}

