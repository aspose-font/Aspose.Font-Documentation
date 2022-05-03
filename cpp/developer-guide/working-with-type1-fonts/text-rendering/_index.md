---
title: Text Rendering using Type1 Font | C++
linktitle: Text Rendering using Type1 Font
type: docs
weight: 30
url: /cpp/text-rendering-type1-font/
---

## **Rendering Text**

In order to render text, the Rendering subsystem requires the implementation of  Aspose.Font.Rendering.IGlyphOutlinePainter interface to draw glyph. This can be achieved using the following steps.

 1. Implement the IGlyphOutlinePainter methods by creating a class GlyphOutlinePainter which requires object of type System.Drawing.Drawing2D.GraphicsPath for graphic drawing objectives. The implementation is as illustrated below.
 {{< gist "aspose-com-gists" "bf610decea4168f9c64482594164892b" "Examples-example-source-WorkingWithType1Fonts-RenderingText_-2.cpp" >}}

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

 Implementation of `DrawText` method is as shown below.
 {{< gist "aspose-com-gists" "bf610decea4168f9c64482594164892b" "Examples-example-source-WorkingWithType1Fonts-RenderingText_-3.cpp" >}}
 3. create utility method to calculate font width to image width as shown in the code sample below
  {{< gist "aspose-com-gists" "bf610decea4168f9c64482594164892b" "Examples-example-source-WorkingWithType1Fonts-RenderingText_-4.cpp" >}}

### Calling the Rendering Text functionality
To use the above implmentations, the following sample code can be executed from the Main method of a console based application.
{{< gist "aspose-com-gists" "bf610decea4168f9c64482594164892b" "Examples-example-source-WorkingWithType1Fonts-RenderingText_-1.cpp" >}}
