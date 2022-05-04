---
title: Font Formats | .NET
linktitle: Font Formats
type: docs
weight: 40
url: /net/what-is-font/font-formats
description: The diversity of font formats allows you to choose the one that really suits your purposes. The most popular and well-known one is TrueType Font.
keywords: font formats, woff, truetype font, woff 2, opentype, font file, otf font, eot file, eot font, ttf, cff.
---
## Which font format to choose? ##

There are pretty many font formats already. You may have heard such as `TTF`, `WOFF`, `WOFF2`, `OpenType`, `EOT`, `Type 1`, and others. The first questions that appear in mind when you see that many font formats are:
- Why have they all been developed?
- Which one should I use in my project?

The answer to the first one is simple. All the formats were created for specific purposes. In time almost all of them have evolved and now they are not that narrowly specialized, but because of their initial scope of application, they have their drawbacks and restrictions when using in some areas or tasks. And understanding these pros and cons of every font format gives you the answer to the second question.

### TrueType Font Format ###

`TrueType Font` format or `TTF` was first developed by Apple. Now it is one of the most popular formats as it is used in Microsoft and Apple operating systems. With the help of `FreeType` library fonts, `TrueType` format  can also be used in many Linux distributions.

The other reason for the popularity of the `TTF` format is that this type uses special technique to supply the high-quality rendering of the font on devices with low screen resolution. It uses the developed tool of instructions that allow fonts to have similar to bitmap fonts quality. On the other hand the process of font hinting is pretty challenging and time-consuming so many companies partly neglect it. As a result, an average `TTF` font may look worse than the equal font of the `PostScript` format.

**Font-hinting** - is a part of font rasterization used to improve text rendering.

**Hints** are a pair of guidelines that define glyph position and thickness.  

There are two components of `TTF` format technology:
- The first component is fonts themselves of many different designs and variations. All of them are licensed and have to be purchased. Some manufacturers provide you with sets of such fonts, so you can buy a collection of fonts, or just buy one which you intend to use. 
- The second component is the rasterizer, which is embedded into the Apple Macintosh computers, and Microsoft’s Windows family of operating systems.

`TrueType` format fonts can include up to 65000 glyphs coded in Unicode standard. But in fact most fonts have much more humble glyphsets. To learn more about glyphsets and glyphs encoding, see this article about [*glyphs*](https://docs.aspose.com/font/net/what-is-font/glyph/).

Font in `TrueType` format is a single file with `.ttf` extension. In Mac OS it is a suitcase-file with SFNT resource. Beginning from Mac OS X, operational systems have an embedded font processor which supports `TTF` font files too. So a file with `.ttf` extension can be used on both platforms.

Fonts of `TrueType` format can be located in one single file as a collection of fonts. Such a file would have `.ttc` extension.

### OpenType Font Format ###

`OpenType Font` or `OTF` was created on the basis `TrueType` font from which it took the basic structure. To this were added additional data constructs to order the typographic behavior. The format is known as the  conjunction of `TrueType` and `Postscript` fonts. As it is really flexible it is supported by the most operational systems and devices.

`OTF`, `TTF` and `Type1` are processed in Windows and Macintosh the same way, that is why there are no bugs and issues when texts render. They are also completely scaled without losing the quality.

#### Advanced data included in OTF font files ####

`OpenType` is technically a combination of vector and other data joined to a bunch of tables. The next data is included in such tables:

- **Title** - has the common font information like font name, version, modification, etc.
- **CMAP** - is the table that logs the relations between symbols and glyphs.
- **Table of names** - includes font name, font family name, and font type.
- Other tables with vector glyphs.
- **Advanced Typographic Tables** - have the necessary data to maintain advanced typographic features.
- **Bitmap glyphs** -  this table includes data for raster fonts.
- **Digital Signature** table - has the designer's e-signature.

Even with all the mentioned advantages, `OTF` fonts may not be the best option for web projects. Most but not all the browsers will support them. If the majority of your audience uses a browser that does not go well with `OTF`, you'd better convert it to one of the web formats.

#### OTF Advantages: ####

- `OpenType` supports Unicode; its glyphs can include more than 65 000 symbols along with all the eastern symbols and some like Chinese and Japanese. That is why this format is preferred when working with multi-language environments and software. 
- `OTF` fonts are easy to compress so the smaller font files are easier to integrate into other files, which is important when working with PDF files or web pages.
- `OTF` can contain a wide range of special glyphs like ligatures, historical and mathematical symbols, and many more.
- Fonts of this format can also contain several optical font sizes of a single font family. Fonts of different sizes are based on different vector contours kits. This improves the readability and renderability of the small size symbols.
- Improved [kerning](https://docs.aspose.com/font/net/what-is-font/glyph/#kerning): symbols with the shape of one type (**o**,**c**,**e**, for example) can be kerned in a similar way. By this, the kerning table gets smaller and there are more kerning pairs. 

#### OTF vs TTF ####

There is a pretty frequent question that sounds like:"What is better `OTF` or `TTF`?". As `OTF` is an advanced font based on `TrueType`, with the advanced features to support much-improved typography it looks like it is a better option to choose. In reality, not that many users need and use these features, so in most cases it does not matter which one of two formats to choose.


### Web Open Font Format ###

`Web Open Font Format` or `WOFF` was developed in 2009 to cover the needs of the web application market.

It was created by adding format-specific compression to `TrueType` and `OpenType` fonts. It uses zlib compression that gives fonts about 40% compression. Another peculiarity of `WOFF` format is that the font of the format can include attached additional metadata. This metadata does not affect the way the font renders, but may be shown to a user when it is needed. Like when you use Aspose [*Font Viewer*](https://products.aspose.app/font/viewer). By choosing the font you want, you get much information about it: information about its license, number of glyphs, manufacturer, version, copyright information, etc.

Development of `WOFF` followed two main goals:
- The first goal was to differentiate fonts for web applications from fonts that are used in the desktop environment and have to be locally installed. 
- The second goal was to shorten the amount of time taken to transfer fonts from a server to a client over a network connection.

`WOFF` files let developers use custom fonts instead of standard web fonts. The latest versions of most browsers support  `WOFF` format on desktop as well as on mobile devices.

`WOFF` file is a web-font file in `WOFF` format. It downloads a compressed container. The file has `.woff` extension.

The table below shows the browsers that support `WOFF` format.

| **Operating system**| **Browsers with WOFF format support**|
| :--- | :--- |
|Windows|Mozilla Firefox, Opera, Google Chrome, Safari, Microsoft Internet Explorer, Microsoft Edge.|
|Linux|Mozilla Firefox, Opera, Google Chrome.|
|Android|Android browser, Chrome for Android, Firefox for Android, Opera Mobile.|
|Macintosh|Mozilla Firefox, Opera, Google Chrome, Safari.|
|iOS|Google Chrome, iOS Safari.|

### Web Open Font Format 2 ###
`Web Open Font Format` or `WOFF2` is the next version of `WOFF` format with better compression. To be precise it gives a 30% advantage in compression over `WOFF` format. It uses the byte-level compression algorithm Brotli, which is a library for data compression with the open-source. It is used to speed up the loading of web pages. 

The file of `WOFF2` format has `.woff2` extension.

`WOFF2` format got a recommendation from W3C in 2018.

As `WOFF` format, `WOFF2` is also supported by most browsers.

### OpenType Font Format ###

`OpenType` Font format or `OTF` was developed by a collaboration of Adobe and Microsoft.
This format is an extension of `TrueType` format. 

`OpenType` fonts are containers built on rules of `TrueType` format. This container can hold `TrueType` as well as `PostScript` data. In addition, `OpenType` fonts may contain new data types that are absent in `TrueType` format.
Fonts that contain `PostScript` data have extension `.otf` and those that contain `TrueType` fonts have extension `.ttf`.

Alike `TrueType` format, each `OpenType` font uses one file to store information about outlines, metrics, and service data. One the same file can be set in Windows and Macintosh operating systems.

`OpenType` fonts use the multi-byte coding system Unicode which spans almost all world languages. `OpenType` fonts can also have a manufacturer’s digital signature which lets the operating system define the font origin and to find out if it was modified.

Because of the better-compressing methods, `OpenType` fonts are faster to send over the network and take less space on a drive. 

`OpenType` format has its typographic rules. The main feature of them is that the terms character and [*glyph*](https://docs.aspose.com/font/net/what-is-font/glyph/) are separate. Every character is defined by default with a basic glyph and the order of placement in the text. Applying additional rules to one or several characters may change their mutual arrangement or replace basic glyphs with alternative ones.

Adobe InDesign and Adobe Photoshop were the first applications that supported `OpenType` typography rules. By 2023 Adobe will not have supported [*Type1*](https://docs.aspose.com/font/net/what-is-font/font-formats/#type-1-font-format) format anymore, supporting `OpenType` format instead. 

### Embedded OpenType Font Format ###

`Embedded OpenType` or `EOT` format. It is a compact format of `OpenType` fonts embedded into web pages. The format is developed by Microsoft. The format has the next peculiarities:
- Because of using LZ compression and including only necessary characters into a font, `OpenType` files are compact.
- The simplicity of embedding fonts into web pages may lead to uncontrolled spread of copyrighted fonts. `EOT` format has functions that prevent such violations. 
- As `EOT` fonts have only a part of the number of characters the of original font the price of font copy is smaller.
- Another feature of the font is that if the `EOT` font fails another available font will be used. So the page will always be readable.

The drawback of the font is that it is proprietary and supported only by Internet Explorer.

### Type 1 Font Format ###

`Type 1` format came to market along with the PostScript programming language in 1984. Because of this, the format is also called `Postscript Type 1`.

Font of `Type 1` format is a special form of the program Postscript and the file format, which is oriented on describing the font. 

`Type 1` format is recognized by printers and computers either by built-in interpreters or by additional utilities like  Adobe Type Manager. This technology is present in Microsoft Windows and Macintosh OS X.
The peculiarity of `Type 1`  fonts is that they do not support Unicode coding standards.

`Type 1` font for Microsoft may consist of the next files:
- Print Font Binary file (`.pfb` extension). The file includes information about outlines.
- Adobe Font Metrics (`.afm` extension).  The file has information about glyph width and kerning.
- Setup information File (`.inf` extension). Has the additional information for installation.
- Print Font Metrics (`.pfm` extension). The file is generated during the installation process based on the information from `INF` and `AFM` files. After this only `PFM` and `PFB` files are used.

Font `Type 1` for Macintosh consists of a suitcase file and a printer file.
If you have one typeface you may have one suitcase file and four printer files (for `normal`, `bold`, `italic` and `bold italic` styles). Or you may get eight files, one suitcase for each font style plus four printer files.

`Type 1` format has next drawbacks:
- [*Glyphsets*](https://docs.aspose.com/font/net/what-is-font/glyph/#glyphsets) are limited to 256 glyphs.
- Fonts of this format are not cross-platform.
- When getting a font, you get many separate files.
- The format is very old and will not have been supported by Adobe by 2023. Some programs have stopped supporting it already.

### Compact Font Format ###

`Compact Font Format` or `CFF` is also known as `Type 2` font format, or `CFF/Type 2` font format. 
It is said that `CFF`  is not exactly the font format. It is the way to compress other font formats, like `Type 1`. 

It offers a notable space saving.

The principle of `CFF` work is that it works as a container to hold several fonts together as one unit. This unit is called FontSet.

Like `Type 1` and `TrueType` formats, `CFF` also uses hinting. It uses the same methods to represent hints as `Type 1`, but they are easier and cleaner to write in code.

In comparison to `Type 1`, has `CFF` gained:
- Operators to constructions (hstem3, flex, hint replacements, counter controls), some not necessary operators were deleted.
- The size of the code was reduced.
- Were added new features like oblique flex, more arithmetic operations, etc.

## Conclusion ##

The article was aimed  to teach you about font formats and make it easier for you to make a choice. Here are the most famous font formats described. 
Some of them are known as web formats because they are built to suit purposes better. These fonts are:
- `TTF`
- `WOFF`
- `WOFF2`
- `EOT`

But not a single one of them can be counted as a cross-platform one, so you may need to use a few of them simultaneously. 

Regardless of which format you have chosen, you can manipulate it with [*Aspose.Font*](https://docs.aspose.com/font/)solution. It comes in handy when you need to convert one font format to another like `TTF` to `WOFF` and vice versa or load a font. 
Learn it yourself to see what advantages the solution gives to you.
And if you have a need to convert one font to a font of a different format, you may also use an online web application. Aspose.Font has such a [*Font Converter*](https://products.aspose.app/font/conversion) in its ecosystem.


