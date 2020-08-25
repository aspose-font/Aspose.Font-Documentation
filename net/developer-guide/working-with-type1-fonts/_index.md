---
title: Working with Type1 Fonts
type: docs
weight: 30
url: /net/working-with-type1-fonts/
---

## **Load Type1 Font from Disc**
Aspose.Font for .NET API lets you read Type1 Font types from files stored in your digital storage. Type1 font files stored on disc can be loaded by using the following steps.
 * Define a new object of FontDefinition class
 * Specify FontType as Type1 and FontFileDefinition as pfb
 * Create a Type1Font object and open the font file from FontDefinition object defined in the earlier step

{{< gist "aspose-font" "10f0e5f274b436379dbc8fd4fb183fc5" "Examples-Aspose.Font.Examples-WorkingWithType1Fonts-LoadType1Fonts-1.cs" >}}

## **Get Font Metrics**
Font metrics contain information such as `Ascender`, `Descender`, `TypoAscender`, `TypoDescender` and `UnitsPerEm`. Aspose.Font for .NET API can read the Font Metrics information from the Type1 Font File using the following sample code.

{{< gist "aspose-font" "10f0e5f274b436379dbc8fd4fb183fc5" "Examples-Aspose.Font.Examples-WorkingWithType1Fonts-GetFontMetrics-1.cs" >}}

## **Detect Latin Symbols**
Aspose.Font for .NET lets you detect Latin Symbols from Type1 font files. This can be achieved using the following sample code.

 * Load the Font file using FontFileDefinition
 * Decode the GlyphId using the DecodeToGid() method
 {{< gist "aspose-font" "10f0e5f274b436379dbc8fd4fb183fc5" "Examples-Aspose.Font.Examples-WorkingWithType1Fonts-DetectLatinSymbolsSupport-1.cs" >}}

## **Rendering Text**

In order to render text, the Rendering subsystem requires the implementation of  Aspose.Font.Rendering.IGlyphOutlinePainter interface to draw glyph. This can be achieved using the following steps.

 1. Implement the IGlyphOutlinePainter methods by creating a class GlyphOutlinePainter which requires object of type System.Drawing.Drawing2D.GraphicsPath for graphic drawing objectives. The implementation is as illustrated below.
 {{< gist "aspose-font" "10f0e5f274b436379dbc8fd4fb183fc5" "Examples-Aspose.Font.Examples-WorkingWithType1Fonts-RenderingText-2.cs" >}}

 1. Create method `DrawText()` which draws specified text into System.Drawing.Bitmap object and saves resultant bitmap on Disc. This will include the following steps:
 * Iterate all symbols in text string.
 * Get glyph identifier for every processed symbol - gid.
 * Create object of type GlyphOutlinePainter which is required by rendering subsystem to draw current glyph.
 * Create object of type Aspose.Font.Renderers.GlyphOutlineRenderer, and pass  just created object of type GlyphOutlinePainter into constructor for GlyphOutlineRenderer. This object GlyphOutlineRenderer intended to render specified glyph.
 * Render current processed glyph using method GlyphOutlineRenderer.RenderGlyph(). Aspose.Fonts.Matrix object is used to specify glyph coordinates.  Glyph to render is specified by gid parameter.

 `Auxillary steps for this strategy`

 * Glyph coordinate for 'Y' axis is constant for this code snippet.
 * Glyph coordinate for 'X' axis is calculated for every processed glyph.
 * Both 'X' and 'Y' coordinates are passed into object Aspose.Fonts.Matrix which is used by GlyphOutlineRenderer to draw glyph.
 * Distance between just processed and previous glyphs is calculated on every iteration step. This distance affects every glyph 'X' coordinate.
 * Object of type GlyphOutlinePainter draws glyph with the help of GlyphOutlinePainter not into Bitmap directly, but into object GraphicsPath, which was passed into constructor for GlyphOutlinePainter, so we use object of type System.Drawing.Graphics to draw GraphicsPath into Bitmap.
 * Method FontWidthToImageWith() which calculates glyph width for bitmap coordinate system.

 Implementation of DrawText method is as shown below.
 {{< gist "aspose-font" "10f0e5f274b436379dbc8fd4fb183fc5" "Examples-Aspose.Font.Examples-WorkingWithType1Fonts-RenderingText-3.cs" >}}
 3. create utility method to calculate font width to image width as shown in the code sample below
  {{< gist "aspose-font" "10f0e5f274b436379dbc8fd4fb183fc5" "Examples-Aspose.Font.Examples-WorkingWithType1Fonts-RenderingText-4.cs" >}}

### Calling the Rendering Text functionality
To use the above implmentations, the following sample code can be executed from the Main method of a console based application.
{{< gist "aspose-font" "10f0e5f274b436379dbc8fd4fb183fc5" "Examples-Aspose.Font.Examples-WorkingWithType1Fonts-RenderingText-1.cs" >}}
