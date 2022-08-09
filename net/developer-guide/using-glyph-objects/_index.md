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

				
Glyphs of any font are represented by [*Glyph*](https://reference.aspose.com/font/net/aspose.font.glyphs/glyph/) type in Aspose.Font library.
So, *Glyph* type is a universal object for font glyphs, independently from font format(TrueType, Compact Font Format, etc).

### The functionality provided by the Glyph object

What functionality does this object provide for us?
	
This question is answered by the properties it has. 

- First, let's look at the property [*State*](https://reference.aspose.com/font/net/aspose.font.glyphs/glyph/state/). Some of the fonts may be corrupted, and their glyphs also can be corrupted.
Property *State* tells us whether the glyph is corrupted. If it has the value [*ParsedWithErrors*](https://reference.aspose.com/font/net/aspose.font.glyphs/glyphstate/), then that glyph was parsed with errors, and not all the glyph data was received.
- Properties [*WidthVectorX*](https://reference.aspose.com/font/net/aspose.font.glyphs/glyph/widthvectorx/) and [*LeftSidebearingX*](https://reference.aspose.com/font/net/aspose.font.glyphs/glyph/leftsidebearingx/) tell us about such [*glyph metrics*](https://docs.aspose.com/font/net/what-is-font/glyph/#glyph-metrics) as advance width and left side bearing correspondingly.
- Properties [*WidthVectorY*](https://reference.aspose.com/font/net/aspose.font.glyphs/glyph/widthvectory/) and [*LeftSidebearingY*](https://reference.aspose.com/font/net/aspose.font.glyphs/glyph/leftsidebearingy/) have the same sense as *WidthVectorX* and *LeftSidebearingX*, but *WidthVectorY* and *LeftSidebearingY* are related to coordinates for the vertical Y-axis.

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

To get the glyph's Bounding box use the [*GlyphBBox*](https://reference.aspose.com/font/net/aspose.font.glyphs/glyph/glyphbbox/) property of the [*Glyph*](https://reference.aspose.com/font/net/aspose.font.glyphs/glyph/) object. 

To get a visual representation of glyphs you need to know the coordinates for all glyphs' points.

### How to get coordinates for all glyph points from the Glyph object?

The next properties, [*IsEmpty*](https://reference.aspose.com/font/net/aspose.font.glyphs/glyph/isempty/) and [*Path*](https://reference.aspose.com/font/net/aspose.font.glyphs/glyph/path/) were designed for this case.
	
Property *IsEmpty* is auxiliary. It tells us whether the glyph's path is empty, or in other words glyph has no drawing instructions at all. If it has the value *false*, it's time to construct the whole glyph's figure using the very useful property *Path*.

In the concept of Aspose.Font library the representation of any glyph is divided into the simplest graphic primitives, called *segments*, and represented by interface [*IPathSegment*](https://reference.aspose.com/font/net/aspose.font.renderingpath/ipathsegment/). 
Interface *IPathSegment* is a base abstract graphic primitive. 

Concrete graphic primitives are represented by such types as [*MoveTo*](https://reference.aspose.com/font/net/aspose.font.renderingpath/moveto/), [*LineTo*](https://reference.aspose.com/font/net/aspose.font.renderingpath/lineto/), [*CurveTo*](https://reference.aspose.com/font/net/aspose.font.renderingpath/curveto/), and [*ClosePath*](https://reference.aspose.com/font/net/aspose.font.renderingpath/closepath/).

Type *ClosePath* is used to indicate the end of the current graphic contour. 

Types *MoveTo*, *LineTo*, and *CurveTo* by their definition correspond with the identical postscript operators.

Also, the types *MoveTo* and *LineTo* by their definition correspond to the functions `MoveToEx()` and `LineTo()`  from windows GDI lib, type *CurveTo* is used to describe *Bézier* curves.

*Glyph* property *Path* provides us with a collection of all graphic primitives for that glyph. 

Property *Path* has type [*SegmentPath*](https://reference.aspose.com/font/net/aspose.font.renderingpath/segmentpath/) and every object of this type has property [*Segments*](https://reference.aspose.com/font/net/aspose.font.renderingpath/segmentpath/segments/) of type [*PathSegmentCollection*](https://reference.aspose.com/font/net/aspose.font.renderingpath/pathsegmentcollection/). This property *Segments* returns all the graphic primitives which object *SegmentPath* includes. In other words, we can get all the graphic primitives for the glyph using the entry glyph.Path.Segments.

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

### How to calculate kerning value for glyphs?
			

Another Glyph metric but the one that is not supplied by the Glyph-type object.
Here we are	talking about [*kerning*](https://docs.aspose.com/font/net/what-is-font/glyph/#kerning). Such a characteristic as kerning, applies not to one but to a pair of glyphs. So to calculate kerning you need to use the identifier not of one but of two glyphs.

Interface [*IFontMetrics*](https://reference.aspose.com/font/net/aspose.font/ifontmetrics/) in Aspose.Font library defines method [GetKerningValue()](https://reference.aspose.com/font/net/aspose.font/ifontmetrics/getkerningvalue/) which takes glyph identifiers for a glyphs pair and returns a kerning value, related to that pair. If no kerning information exists for glyphs pair, the method returns 0.
Implementation of *IFontMetrics* interface exists for all classes of supported font formats and it is accessible using property [Metrics](https://reference.aspose.com/font/net/aspose.font/ifont/metrics/).

The next snippet calculates the kerning value for glyphs associated with symbols 'A' and 'C':

{{< highlight csharp >}}
    Font font; 

    double kerning = font.Metrics.GetKerningValue(font.Encoding.UnicodeToGid('A'), font.Encoding.UnicodeToGid('C'));	
{{< /highlight >}}

### How To obtain glyphs from font?
						
Any glyph in a font can be accessed by a special glyph identifier. This rule is true for any font format. 

Glyph identifiers [*GlyphId*](https://reference.aspose.com/font/net/aspose.font.glyphs/glyphid/) can be of two types: integer or string. These *GlyphId* data types are linked with such glyph characteristics as glyph index and glyph name correspondingly. 

Also, each glyph has an index equal to its numbering in the font. An important moment is that the numbering starts not from 1 but from 0 so if a font contains of 15 glyphs, they have Glyph IDs 0–14. 

The glyphs usually also have glyph names which are brief ASCII text labels without spaces. For example, the glyph name for symbol “+” is “plus”.

So the data type `integer` corresponds with such a characteristic of the glyph as glyph index, and the data type `string` corresponds with the name of the glyph.
Each glyph of a font represents the image of the symbol which this glyph is associated with so the glyph is linked not only to its identifier but to the unique code corresponding to this symbol.
	
The relation between character codes and glyph identifiers is called encoding.
Glyphs in the font can be accessed directly by glyph identifiers or using encoding. 

In the last case first, the glyph identifier based on the character code is calculated. Then the glyph corresponding to the calculated identifier is received.

#### What type of glyph identifier should be used to access the desired glyph?

It depends on the format of the font. 
Glyphs in fonts of Type 1 Font Format and Compact Font Format (CFF) are accessible by the glyph name. Actually, glyphs in fonts of these formats are kept as an array and are physically accessible via numerical index but on the higher logical level for getting a glyph its name is used. 

TrueType fonts use integer type for glyph identifiers. If the TrueType font has 'post' table, glyph name or a glyph identifier of string type can be used to access the glyph.

### Retrieving glyphs from font using Aspose.Font library.
	
Aspose.Font library introduces namespace [*Aspose.Font.Glyphs*](https://reference.aspose.com/font/net/aspose.font.glyphs/) where glyphs, glyph identifiers, and other objects are placed.
Class *GlyphId* is a base abstract class for glyph identifiers. 
Objects of that class are used to get desired glyphs. 

Glyph identifiers for integers and a string type are represented by classes [*GlyphUInt32Id*](https://reference.aspose.com/font/net/aspose.font.glyphs/glyphuint32id/) and [*GlyphStringId*](https://reference.aspose.com/font/net/aspose.font.glyphs/glyphstringid/) correspondingly.

Both these classes are inherited from the base abstract class *GlyphId* and particularly the objects of this abstract class *GlyphId* are passed in the function of the library for access to the needed glyph. So to get the required glyph you create a *GlyphUInt32Id* or *GlyphStringId*-type object and then pass the created object to one of the functions that are designed for retrieving glyphs.

In most cases, you do not know which glyph identifier corresponds to the specific character so to get the glyph identifier you need to find the relation between character code and glyph identifier. 

As it was mentioned above, font encoding is responsible for such relations.
Base font encoding functionality is defined by the [*IFontEncoding*](https://reference.aspose.com/font/net/aspose.font/ifontencoding/) interface.

Base interface [*IFont*](https://reference.aspose.com/font/net/aspose.font/ifont/) implemented by all font classes defines property [*Encoding*](https://reference.aspose.com/font/net/aspose.font/ifont/encoding/) of type *IFontEncoding*, so any font object created by Aspose.Font library provides implementation for *IFontEncoding* functionality by the property *Encoding*.

Next methods were designed to calculate glyph identifier for a character code: [*UnicodeToGid()*](https://reference.aspose.com/font/net/aspose.font/ifontencoding/unicodetogid/#unicodetogid), [*DecodeToGid*](https://reference.aspose.com/font/net/aspose.font/ifontencoding/decodetogid/) and [*DecodeToGidParameterized*](https://reference.aspose.com/font/net/aspose.font/ifontencoding/decodetogidparameterized/):
	
- Use method *UnicodeToGid()* if your character code is unicode.
- If your character code is not unicode use *DecodeToGid()* method.
- Method *DecodeToGidParameterized()* is designed for compound cases when special parameters are needed to calculate glyph identifiers.

After you get a glyph identifier or in other words a reference to the *GlyphId* object, you can get the glyph associated with this *GlyphId* using functionality, defined by the interface [*IGlyphAccessor*](https://reference.aspose.com/font/net/aspose.font.glyphs/iglyphaccessor/). 

The interface *IGlyphAccessor* is implemented by any class, derived from the base *Font* class and it's accessible by the [*IFont.GlyphAccessor*](https://reference.aspose.com/font/net/aspose.font/ifont/glyphaccessor/) property.

Interface *IGlyphAccessor* defines the method [GetGlyphById()](https://reference.aspose.com/font/net/aspose.font.glyphs/iglyphaccessor/getglyphbyid/). Use this method to get the glyph for *GlyphId* passed.

The example of how to use the *GetGlyphById* method to get GlyphId and the corresponding glyph is included in the example from the [*The functionality provided by the Glyph object*](http://localhost:1313/font/net/developer-guide/using-glyph-objects/#glyph-object) chapter.

The next 2 methods of this interface are designed to get glyph identifiers:	
- If you need to get a glyph identifier for every character in some text string, you can use the method [*GetGlyphsForText()*](https://reference.aspose.com/font/net/aspose.font.glyphs/iglyphaccessor/getglyphsfortext/). 
- Method [*GetAllGlyphIds()*](https://reference.aspose.com/font/net/aspose.font.glyphs/iglyphaccessor/getallglyphids/) is designed to get all glyph identifiers, available in the font.

Also, interface *IGlyphAccessor* defines the property [*GlyphIdType*](https://reference.aspose.com/font/net/aspose.font.glyphs/iglyphaccessor/glyphidtype/) which tells us what data type, integer, or string имеет glyph identifier.
	
Support for retrieving glyphs is more powerful for TrueType fonts. Here you can find the information on how to get [access to font glyphs](https://docs.aspose.com/font/net/developer-guide/font-classes-for-supported-font-formats/#access-to-font-glyphs).


{{% alert color="primary" %}}
All the examples of using the Aspose.Font are stored in [*Aspose.Font.Examples.sln solution*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/net-examples), in the [*net-examples*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/net-examples) of the [*Aspose.Font Documentation*](https://github.com/aspose-font/Aspose.Font-Documentation)

If you have any issues, you may post them at the [*Aspose.Font.Product Family*](https://forum.aspose.com/c/font/41) section of the [*Free Support Forum*](https://forum.aspose.com/) and within a few hours our support team will clear everything up for you.
{{% /alert %}}

