---
title: SVG Fonts | .NET 
linktitle: SVG Fonts 
type: docs
weight: 20
url: /net/what-is-font/svg-font
description: SVG font or WOFF, or maybe TTF? To know for sure if SVG font covers your use case, first learn about the font itself, its structure and pros and cons.
keywords: svg webfont, svg font example, create font svg, svg and fonts
---

## Introduction to SVG font ##

To explain what svg font is, first let's learn the term svg in common. From the so-called [*Aspose.SVG*](https://docs.aspose.com/svg/net/what-is-an-svg-document/) product we understand that Scalable Vector Graphics (SVG) is an XML language for creating two-dimensional vector and mixed vector/raster graphics. SVG document is a text file that describes images as geometric primitives: lines, curves, shapes, text, etc. Vector objects are constructed and stored as a set of commands, numbers, and formulas, not in a pixel grid as in bitmaps. 

SVG font is a type of font that is used in SVG images and like any other object of the format, it can be scaled without losing quality. You can embed fonts directly into the image, making it easy to create graphics with custom typography.

An SVG font is a font that is defined using XML, just like an SVG image. It is a collection of shapes, lines, and curves that define the characters of the font. The font can also be styled and manipulated using [*CSS*](https://docs.aspose.com/font/net/what-is-font/css-fonts/) therefore you can use the same techniques to code text in an SVG image as you would do this for any other SVG element.

##  Advantages and disadvantages of SVG font ## 

The table below shows the pros and cons of SVG fonts, so you could decide whether to use it in your project or not.

| **Pros**| **Cons**|
| :--- | :--- |
|**Scalability:** SVG fonts can be scaled to any size without losing quality, so they are perfect to use in any responsive design.|**Browser support:** Most modern web browsers support SVG fonts but some older browsers may not.|
|**Smaller file size:** If compared to web fonts SVG fonts have a smaller file size, which is crucial if you want to improve load time.|**Limited editor support:** Not all text editors and design software support SVG fonts.|
|**Better accessibility:** SVG fonts are considered to be more accessible to users with disabilities. They can be easily read by screen readers, and allow including alternative text descriptions.|**Complexity:** SVG fonts are difficult to work with and edit because they require more technical knowledge.|
|**Advanced typography:** SVG fonts include advanced typography features like ligatures, kerning, alternate characters, etc.|**Searchability:** SVG fonts may affect the SEO of a website because they are not searchable by search engines.|
|**Style and animation:** Easily style or animate SVG fonts within CSS and JavaScript.|**Limited font options:** There are fewer font options available in SVG format if compared to True Type fonts.|
|**Better support for non-Latin symbols:** Because of the scalability SVG fonts can be used to draw fonts that have a great number of characters or require complex renderings like hieroglyphs, Arabic, or Hindi letters.| |

## SVG or WOFF? ##

SVG fonts were popular in the early days of SVG, but now web fonts replaced them in most cases as they are more flexible and widely supported by all modern browsers. Anyway, you can still find SVG fonts in older versions of Internet Explorer, for example. So let's compare these fonts.

[*Web Open Font Format*](https://docs.aspose.com/font/net/what-is-font/font-formats/#web-open-font-format) or WOFF  is a format for delivering font files over the internet, designed to cover the needs of the web application market. WOFF format was created to provide a more efficient way to deliver web fonts compared to other file formats, such as TrueType and OpenType. The format compresses font data to reduce file size to download and use web pages faster. It also includes metadata that provides information about the font, such as the font family, style, and copyright information.

SVG is a vector graphics format used to create and display images on the web. It is a text-based format that can be easily edited and manipulated, therefore it is a good choice when creating logos, icons, and other graphics.

So if comparing these formats by their purpose, if you want to create graphics to use on the web, you should use SVG. If you need a font to be used on a website, you should use WOFF.

Both formats can interact with CSS but WOFF files are embedded in web pages using the font-face rule in CSS. This allows web designers to use custom fonts on their websites without relying on users to have the font installed on their devices. This gives better flexibility and a consistent visual experience no matter what browser the user uses.

## SVG or TTF? ##

If choosing between [*TTF*](https://docs.aspose.com/font/net/what-is-font/font-formats/#truetype-font-format) or SVG you first need to clarify the requirements of the project because they are usually used for different cases.
These fonts are pretty similar as they both provide you with high-quality, scalable, and easily readable text. 

True Type Font Format is the most well-known font format for web and print design and is supported by most operating systems and devices. TTF is also pretty easy to use and implement. This is a vector format but uses the developed tool of instructions that allows fonts to have similar to bitmap fonts quality and is considered to be raster by some sources.

SVG is a vector font format. It stores the font as a set of paths, lossless scaled to any size. It lets such fonts provide you with a smaller font file as was already mentioned in the SVG to WOFF comparison. SVG is also a better option than True Type to serve disabled people, as they give better readability.

In short, TTF is the most widely supported format and is best for most cases, but SVG is a great option if you need to scale the text, want to make the text accessible, or need advanced typography features.


## Where to use SVG fonts? ##

Choose SVG font format if you focus on:
- **Responsive designs:** Scalable fonts, like SVG, are good for such issues.
- **Accessibility:** As mentioned above, SVG fonts can supply better readability.
- **Advanced typography:** Features such as ligatures, kerning, and alternate characters are included in SVG fonts.
- **Style and animation:** SVG fonts provide greater flexibility for design and animation.
- **Non-Latin scripts:** You can use SVG fonts to represent fonts that have a large number of complex-to-render characters.
- **Print design:** SVG is useful in certain print design projects where the size of a file is crucial, but you need to use high-resolution images, and complex typography at the same time.
- **Working with SVG graphics:** As SVG fonts in common are part of the SVG graphic image and are represented using XML language, you can manually or with help of the special soft, edit font glyphs and immediately view the results (text view changes) in the whole SVG image.

It's important to note that SVG fonts may not be the best choice for all projects. It's better to also add fonts of a different format as a fallback option.


## Are SVG fonts free? ##

There are many open-source font libraries with a wide variety of free SVG fonts under open-source licenses like Google Fonts, Open Font Library, etc.
However, not all SVG fonts are free to use. Some designers sell licenses and the license conditions can vary. Some fonts may have a free version with a limited set of features and a paid version with more options.
Check the license and usage terms of a font before using it in a project. By doing this you will be sure that it is free to use or that you have the needed permissions. 

**There are four options for font licensing to have in mind:**
1. Allows embedding and temporary loading of fonts on other systems. With such a license you can edit fonts, including the formatting of new text, and save any changes.
2. Allows embedding the font in a temporary manner which enables the font to be loaded onto other systems. With such a license you can edit and format new text using the embedded font, and save any changes.
3. Allows embedding the font in a permanent manner which permits the font to be installed and used by remote systems or other users.
4. Allows embedding the font in a temporary manner for the purpose of viewing or printing the document on other systems.


## SVG font file ##

SVG fonts use XML syntax and can be embedded directly into SVG documents or referenced as external files. Its structure consists of the next components:

- XML declaration at the beginning of the file. It specifies the used version of XML  and encoding information.
- Font element. It contains common information about the font like font name, family, style, etc.
- Glyph element. It defines individual characters of the font. Each [*glyph*](https://docs.aspose.com/font/net/what-is-font/glyph/) has a unique identifier, a Unicode number, and a set of paths or shapes that compose the character.
- Font-face element. It is used to define font metadata([*metrics*](https://reference.aspose.com/font/net/aspose.font/fontmetrics/)) like its ascent, descent, baseline position, and glyph bounding box.
- Missing-glyph element. It defines a default glyph. This glyph will be used if the needed one is not found in the font.
- Optional elements such as font-face-src, which defines the source of the font file, and font-face-uri, which provides a URI for the font.

Here is a code example of the basic structure of an SVG font file:

{{< highlight xml >}} 
    <?xml version="1.0" encoding="UTF-8"?>
    <svg xmlns="http://www.w3.org/2000/svg">
      <font id="MyFont" horiz-adv-x="1000">
        <font-face font-family="MyFont" units-per-em="1000" ascent="800" descent="200" />
        <glyph glyph-name="Triangle" d="M0,0 L100,0 L50,100z" />
        <glyph unicode="B" glyph-name="B" d="M50,50 L50,150 L100,150 L100,115 L85,100 L50,100 M85,100 L100,85 L100,50z" />
      </font>
    </svg>
{{< /highlight >}}

**Let's explain the code example.**

First, we see the common XML declaration, which defines XML version number and encoding.  Encoding UTF-8 is the most common encoding for the World Wide Web since 2008.

The main element (tag) in this XML is the element "svg" which defines an SVG document fragment. 
The attribute `xmlns` of "svg" element references the xml namespace, defined in the Scalable Vector Graphics (SVG) 1.0 specification.

The description for the font itself is started from \<font\> element. This element includes 2 attributes:
An `id` attribute uniquely identifies the font and is used when it's needed to reference the font from an external SVG file.
Attribute `horiz-adv-x` determines the default horizontal advance after rendering a glyph in horizontal orientation (see [*glyph metrics*](https://docs.aspose.com/font/net/what-is-font/glyph/#glyph-metrics) for more information). If this attribute is not specified, the default value will be 1000.

Element "font-face" in this example defines such common characteristics of the font as: 
- [*Font family*](https://docs.aspose.com/font/net/what-is-font/#glossary) - a group of related, similar by-design typefaces.
- Units per em - number of coordinate units on the em square, the size of the design grid on which glyphs are laid out.
- [*Ascent, descent*](https://docs.aspose.com/font/net/what-is-font/glyph/#glyph-metrics) - length from the origin point on the baseline to the highest/lowest point of the glyph respectively. 

Every glyph which our example font contains is represented by the "glyph" element. 
Parameters such as "unicode" and "glyph-name" tell how to access the corresponding glyph - using a character code or name of the glyph respectively. 
In actual SVG font data, it's enough to provide only a single attribute, unicode, or name of glyph to access the desired glyph. 

An attribute `d` is the most important attribute of the "glyph" element. It defines the outline of a glyph using such geometric primitives as lines and curves. 

Let's look at how to get a graphical path for the glyph named "Triangle" in our example.
Every letter in this path is a special abbreviation, relative to the corresponding command of graphical context. Each letter is followed by 2 numbers, these are the coordinates. All the coordinates in the example are global, no one coordinate is relative to the previous point.
The first letter in this path is "M". It's a command "MoveTo". As it goes from its name, this command sets a pen into coordinates specified, in our case - the start of the coordinate system (0, 0).
Next command - "L" means command "LineTo". This command draws a line from the current point (0,0) to the given (x,y) coordinate which becomes the new current point. 
The coordinates of the new current point are the parameters of the "L" command - in our case, these are coordinates (100, 0). 

So the first line in our glyph is the line from point (0,0) to point (100, 0).
The next command - "L50,100" - draws a line from the current point (100, 0) to point (50, 100).
And the last command in our glyph path - "z" is named "closepath" and is used to close the current subpath by drawing a straight line 
from the current point to the current subpath's initial point - (0,0).

{{% alert %}}
So from the explained example we briefly learned how the glyphs are represented in the SVG format, how to access these glyphs, and what the most common characteristics a font should have in order to get texts rendered with this font displayed correctly.
{{% /alert %}}

## How to create an SVG font? ##

Usually, the process of creation of SVG font has the next order:
1. Create vector graphics for each glyph of the font. For such a purpose, you can use software such as Illustrator, Inkscape, or Glyphs.
2. Export each glyph as an SVG file, making sure to use the same font name and attributes for each of them.
3. Create the font file using software like FontForge or FontLab. Then import the SVG files for each character.
4. Add metadata such as the font name, author, and license to the created file.
5. Test the result. Install the font on your computer and try it in different text editors and design software. Keep in mind that not all such programs support SVG fonts, so make sure you have the appropriate ones to create and edit SVG fonts.

## Conclusion ##

SVG font has a pretty high level of popularity and a bunch of cases where it is a better solution than other fonts. But to make a decision if this format is the right choice for your project you'd better learn its pros and cons first. 

If you want to work with SVG online without loading any additional software you can use [*cross-platform applications*](https://products.aspose.app/svg/applications) and if you are focusing on working with fonts go to another bunch of [*apps to work with fonts*](https://products.aspose.app/font/applications) there you can find [*converters*](https://products.aspose.app/font/conversion) to transform your SVG font files to a more suitable format, viewers and mergers.

