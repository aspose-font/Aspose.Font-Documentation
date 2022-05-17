---
title: Using Glyph objects | .NET
linktitle: Using Glyph objects in Aspose.Font library
type: docs
weight: 50
url: /net/developer-guide/using-glyph-objects
keywords: coding glyphs, glyph object, glyph type, glyph property, glyphs software, scripting glyphs
description: Glyph objects in Aspose.Font library functionality is described by the properties it has. The attached code snippets help you understand how to code Glyphs.
---

Working with glyphs is crucial when coding fonts as it is their unit. When the basic information about glyphs is explained in the [*article*](https://docs.aspose.com/font/net/what-is-font/glyph/) of the [*What is font paragraph*](https://docs.aspose.com/font/net/what-is-font/), here we are going to teach you the functionality of Aspose.Font for working with glyphs and the *Glyph* objects in particular.

## Glyph object

				
Glyphs of any font are represented by [*Glyph*](https://apireference.aspose.com/font/net/aspose.font.glyphs/glyph) type in Aspose.Font library.
So, *Glyph* type is a universal object for font glyphs, independently from font format(TrueType, Compact Font Format, etc).

### The functionality provided by the Glyph object

What functionality does this object provide for us?
	
This question is answered by the properties it has. 

- First, let's look at the property [*State*](https://apireference.aspose.com/font/net/aspose.font.glyphs/glyph/properties/state). Some of the fonts may be corrupted, and their glyphs also can be corrupted.
Property *State* tells us whether the glyph is corrupted. If it has the value [*ParsedWithErrors*](https://apireference.aspose.com/font/net/aspose.font.glyphs/glyphstate), then that glyph was parsed with errors, and not all the glyph data was received.
- Properties [*WidthVectorX*](https://apireference.aspose.com/font/net/aspose.font.glyphs/glyph/properties/widthvectorx) and [*LeftSidebearingX*](https://apireference.aspose.com/font/net/aspose.font.glyphs/glyph/properties/leftsidebearingx) tell us about such [*glyph metrics*](https://docs.aspose.com/font/net/what-is-font/glyph/#glyph-metrics) as advance width and left side bearing correspondingly.
- Properties [*WidthVectorY*](https://apireference.aspose.com/font/net/aspose.font.glyphs/glyph/properties/widthvectory) and [*LeftSidebearingY*](https://apireference.aspose.com/font/net/aspose.font.glyphs/glyph/properties/leftsidebearingy) have the same sense as *WidthVectorX* and *LeftSidebearingX*, but *WidthVectorY* and *LeftSidebearingY* are related to coordinates for the vertical Y-axis.

Let's have an [*example*](https://github.com/aspose-font/Aspose.Font-Documentation/blob/master/net-examples/Aspose.Font.Examples/Glyphs/GlyphMetrics.cs) with the next code snippet that shows how to calculate the width for the text "Hello world" in pixels when the font size is 10.

Add the next namespaces at the head of the file:

{{< highlight csharp >}}
using Aspose.Font.Glyphs;			
using Aspose.Font.Font font;
{{< /highlight >}}

Then you need to take the next steps:

{{< highlight csharp >}}
    Aspose.Font.Font font;

    // Declare text and other constants
    const string text = "Hello world";
    const int fontSize = 10;

    //Declare a variable for string width
    double width = 0;     

    //Get glyphs for each letter in the text and calculate the width for the whole text
    //The same result can be achieved using the method font.Metrics.MeasureString (text, fontSize)
    foreach (char symbol in text)
        {
            GlyphId gid = font.Encoding.DecodeToGid(symbol);
            Glyph glyph = font.GetGlyphById(gid);
            width += (glyph.WidthVectorX / font.Metrics.UnitsPerEM) * fontSize;
        }

{{< /highlight >}}

To get the glyph's Bounding box use the [*GlyphBBox*](https://apireference.aspose.com/font/net/aspose.font.glyphs/glyph/properties/glyphbbox) property of the [*Glyph*](https://apireference.aspose.com/font/net/aspose.font.glyphs/glyph) object. 

To get a visual representation of glyphs you need to know the coordinates for all glyphs' points.

### How to get coordinates for all glyph points from the Glyph object?

The next properties, [*IsEmpty*](https://apireference.aspose.com/font/net/aspose.font.glyphs/glyph/properties/isempty) and [*Path*](https://apireference.aspose.com/font/net/aspose.font.glyphs/glyph/properties/path) were designed for this case.
	
Property *IsEmpty* is auxiliary. It tells us whether the glyph's path is empty, or in other words glyph has no drawing instructions at all. If it has the value *false*, it's time to construct the whole glyph's figure using the very useful property *Path*.

In the concept of Aspose.Font library the representation of any glyph is divided into the simplest graphic primitives, called *segments*, and represented by interface [*IPathSegment*](https://apireference.aspose.com/font/net/aspose.font.renderingpath/ipathsegment). 
Interface *IPathSegment* is a base abstract graphic primitive. 

Concrete graphic primitives are represented by such types as [*MoveTo*](https://apireference.aspose.com/font/net/aspose.font.renderingpath/moveto), [*LineTo*](https://apireference.aspose.com/font/net/aspose.font.renderingpath/lineto), [*CurveTo*](https://apireference.aspose.com/font/net/aspose.font.renderingpath/curveto), and [*ClosePath*](https://apireference.aspose.com/font/net/aspose.font.renderingpath/closepath/properties/index).

Type *ClosePath* is used to indicate the end of the current graphic contour. 

Types *MoveTo*, *LineTo*, and *CurveTo* by their definition correspond with the identical postscript operators.

Also, the types *MoveTo* and *LineTo* by their definition correspond to the functions `MoveToEx()` and `LineTo()`  from windows GDI lib, type *CurveTo* is used to describe *Bézier* curves.

*Glyph* property *Path* provides us with a collection of all graphic primitives for that glyph. 

Property *Path* has type [*SegmentPath*](https://apireference.aspose.com/font/net/aspose.font.renderingpath/segmentpath) and every object of this type has property [*Segments*](https://apireference.aspose.com/font/net/aspose.font.renderingpath/segmentpath/properties/segments) of type [*PathSegmentCollection*](https://apireference.aspose.com/font/net/aspose.font.renderingpath/pathsegmentcollection). This property *Segments* returns all the graphic primitives which object *SegmentPath* includes. In other words, we can get all the graphic primitives for the glyph using the entry glyph.Path.Segments.

The next [*example*](https://github.com/aspose-font/Aspose.Font-Documentation/blob/master/net-examples/Aspose.Font.Examples/Glyphs/GlyphMetrics.cs) calculates all the points which glyph has and stores them in variable `points`, which represents an array of objects with [Point](https://docs.microsoft.com/en-us/dotnet/api/system.drawing.point?view=net-6.0) type.

The logic used by this sample is simple and it doesn't extract glyph contours. To get these contours using type *ClosePath* must be added to segments processing. 

Add the next namespaces at the head of the file:

{{< highlight csharp >}}
using System.Collections.Generic;
using System.Drawing;
using Aspose.Font.Glyphs;
using Aspose.Font.RenderingPath;
{{< /highlight >}}

Then you need to take the next steps:

{{< highlight csharp >}}
    Glyph glyph;

    //Declare resultant list with points
    List<Point> points = new List<Point>();

    //Init service reference on IPathSegment
    IPathSegment prevSegment = null;

    //Iterate all glyph path segments and collect points
    foreach (IPathSegment segment in glyph.Path.Segments)
        {
            if ((segment is LineTo)
                || (segment is CurveTo))
            {
                if (prevSegment is MoveTo)
                {
                    MoveTo moveTo = prevSegment as MoveTo;
                    AddPoint((int)moveTo.X, (int)moveTo.Y, points);
                }
                if (segment is LineTo)
                {
                    LineTo line = segment as LineTo;
                    AddPoint((int)line.X, (int)line.Y, points);
                }
                else if (segment is CurveTo)
                {
                    CurveTo curve = segment as CurveTo;
                    AddPoint((int)curve.X1, (int)curve.Y1, points);
                    AddPoint((int)curve.X2, (int)curve.Y2, points);
                    AddPoint((int)curve.X3, (int)curve.Y3, points);
                }
            }
            prevSegment = segment;
        }	
	
	void AddPoint(int x, int y, List<Point> points)
	{
		Point p = new Point();
		p.X = x;
		p.Y = y;
		points.Add(p);
	}

{{< /highlight >}}


{{% alert color="primary" %}}
All the examples of using the Aspose.Font are stored in [*Aspose.Font.Examples.sln solution*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/net-examples), in the [*net-examples*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/net-examples) of the [*Aspose.Font Documentation*](https://github.com/aspose-font/Aspose.Font-Documentation)

If you have any issues, you may post them at the [*Aspose.Font.Product Family*](https://forum.aspose.com/c/font/41) section of the [*Free Support Forum*](https://forum.aspose.com/) and within a few hours our support team will clear everything up for you.
{{% /alert %}}

