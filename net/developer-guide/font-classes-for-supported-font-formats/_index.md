---
title: Font classes for supported font formats | .NET
linktitle: Aspose.Font classes for supported font formats
type: docs
weight: 5
url: /net/developer-guide/font-classes-for-supported-font-formats
keywords: download font, save font, font type, convert font.
description: Getting learned Aspose.Font for .NET library is better by starting by learning the hierarchy of its classes. The article will give you understanding of how to manipulate fonts.
---

## Hierarchy of Aspose.Font classes ##

The hierarchy of [*Aspose.Font*](https://reference.aspose.com/font/net/) classes for supporting fonts of different formats is pretty simple.

Class [*Font*](https://reference.aspose.com/font/net/aspose.font/font/) is a single base class and any class, which supports some font format inherited from [*Font*](https://reference.aspose.com/font/net/aspose.font/font/). There is common information for fonts of all formats gathered in this class. This information includes such data as font style, font name, postscript font name, font family, font metrics, the number of glyphs of the font, encoding, etc.

Class [*Font*](https://reference.aspose.com/font/net/aspose.font/font/) is an abstract class so the instance of the object of `Aspose.Font.Font` type, cannot be created directly.
The reference on the just created object is returned by the static methods of this class that are responsible for the font loading that, family of overloaded methods [*Open()*](https://reference.aspose.com/font/net/aspose.font/font/open/).

As for the specific for one or another font format information, for providing such information are responsible objects inherited from base `Aspose.Font.Font`.
The only data, specific for font format, which base [*Font*](https://reference.aspose.com/font/net/aspose.font/font/)  class includes, is the value from [*FontType*](https://reference.aspose.com/font/net/aspose.font/fonttype/) enumeration.

The next classes are inherited from [*Aspose.Font*](https://reference.aspose.com/font/net/aspose.font/font/) and used to work with specific font format: [*TtfFont*](https://reference.aspose.com/font/net/aspose.font.ttf/ttffont/), [*Type1Font*](https://reference.aspose.com/font/net/aspose.font.type1/type1font/), [*CffFont*](https://reference.aspose.com/font/net/aspose.font.cff/cfffont/).

### Interrelations between font format, FontType value and Aspose.Font object type ###

The table below shows the accordance between the formats, supported by Aspose.Font, the corresponding to these formats values from [*FontType*](https://reference.aspose.com/font/net/aspose.font/fonttype/) enumeration, and classes used for manipulating each of these formats.


|**Font Format**|**FontType value**|**Aspose.Font object type**|
| :- | :- |:- |
|`TrueType`|`TTF`|[*TtfFont*](https://reference.aspose.com/font/net/aspose.font.ttf/ttffont/)|
|`Type 1`|`Type 1`|[*Type1Font*](https://reference.aspose.com/font/net/aspose.font.type1/type1font/)|
|`Compact Font Format` (`CFF`)|`CFF`|[*CffFont*](https://reference.aspose.com/font/net/aspose.font.cff/cfffont/)|

### Interrelations between font file format, FontType value and Aspose.Font object type ###

The formats of the aforementioned fonts from [*FontType*](https://reference.aspose.com/font/net/aspose.font/fonttype/) enumeration are wider terms than file formats for those fonts.

For example, `TrueType` format covers the following file formats available for loading with Aspose.Font: `ttf`, `ttc`, `eot`, `woff`, `woff2`. So the common feature for fonts with extensions `.ttf`, `.ttc`, `.eot`, `.woff`, `.woff2` is that they are all related to `TrueType` font family.

That is why, if replacing in the table the column “Font Format” to the column "Font file format", we will get the next table of relations between font file formats, fitting to them [*FontType*](https://reference.aspose.com/font/net/aspose.font/fonttype/) values, and objects aimed to work with the corresponding font format in Aspose.Font.

|**Font file format**|**FontType value**|**Aspose.Font object type**|
| :- | :- |:- |
|`ttf`, `ttc`, `eot`, `woff`, `woff2`|`TTF`|[*TtfFont*](https://reference.aspose.com/font/net/aspose.font.ttf/ttffont/)|
|`pfa`, `pfb`|`Type 1`|[*Type1Font*](https://reference.aspose.com/font/net/aspose.font.type1/type1font/)|
|`afm`, `pfm`|`Type 1`|[*Type1MetricFont*](https://reference.aspose.com/font/net/aspose.font.type1/type1metricfont/)|
|binary data of `Compact Font Format` type|`CFF`|[*CffFont*](https://reference.aspose.com/font/net/aspose.font.cff/cfffont/)|

## Functionality of Aspose.Font.Font class ##

Functionality is defined by [*Font*](https://reference.aspose.com/font/net/aspose.font/font/) class can be divided into several areas.

### Functionality defined by interfaces that Font class implements ###

The most important interface of the Font interfaces list is [*IFont*](https://reference.aspose.com/font/net/aspose.font/ifont/) interface. It provides properties for [*IGlyphAccessor*](https://reference.aspose.com/font/net/aspose.font/ifont/glyphaccessor/) and [*IFontSaver*](https://reference.aspose.com/font/net/aspose.font/ifont/fontsaver/) interfaces, 
that are implemented by [*Font*](https://reference.aspose.com/font/net/aspose.font/font/)  class, so all the functionality, defined by interfaces which [*Font*](https://reference.aspose.com/font/net/aspose.font/font/) class implements is covered by this 
[*IFont*](https://reference.aspose.com/font/net/aspose.font/ifont/)  interface. 


Interface [*IFont*](https://reference.aspose.com/font/net/aspose.font/ifont/) defines properties that are common for all font formats supported by Aspose.Font.
Below are the descriptions for each property.

### Properties for manipulating font formats ###

- string [*FontName*](https://reference.aspose.com/font/net/aspose.font/ifont/fontname/) - the name of the font.
- [*MultiLanguageString*](https://reference.aspose.com/font/net/aspose.font/multilanguagestring/) [*FontNames*](https://reference.aspose.com/font/net/aspose.font/font/fontnames/) - name of the font in different languages.
- [*MultiLanguageString*](https://reference.aspose.com/font/net/aspose.font/multilanguagestring/) [*PostscriptNames*](https://reference.aspose.com/font/net/aspose.font/font/postscriptnames/) - postscript name of the font, in different languages.
- string [*FontFamily*](https://reference.aspose.com/font/net/aspose.font/font/fontfamily/) - the name of the font family. To get more details about  font families see [*Font family*](https://docs.aspose.com/font/net/what-is-font/#font-family) charpter.
- [*FontType*](https://reference.aspose.com/font/net/aspose.font/fonttype/) [*FontType*](https://reference.aspose.com/font/net/aspose.font/font/fonttype/) -  type of font format, represented by [*FontType*](https://reference.aspose.com/font/net/aspose.font/fonttype/) enumeration.
- [*FontStyle*](https://reference.aspose.com/font/net/aspose.font/fontstyle/) [*FontStyle*](https://reference.aspose.com/font/net/aspose.font/font/fontstyle/) - font style value from [*FontStyle*](https://reference.aspose.com/font/net/aspose.font/fontstyle/) enumeration. Learn more information about [*font styles*](https://docs.aspose.com/font/net/what-is-font/#font-style).
- string [*Style*](https://reference.aspose.com/font/net/aspose.font/font/style/) - the name of the font style, similar to property [*FontStyle*](https://reference.aspose.com/font/net/aspose.font/font/fontstyle/), represented in its raw string form, provided by font data. 
- [*FontDefinition*](https://reference.aspose.com/font/net/aspose.font.sources/fontdefinition/) [*FontDefinition*](https://reference.aspose.com/font/net/aspose.font/font/fontdefinition/) - an object that describes the format and the source to load font from. Go to [*How to load fonts*](https://docs.aspose.com/font/net/how-to-load-fonts/) where you can learn in detail how to work with this object.
- int [*NumGlyphs*](https://reference.aspose.com/font/net/aspose.font/font/numglyphs/) - gets number of glyphs of the font.
- [*IFontMetrics*](https://reference.aspose.com/font/net/aspose.font/ifontmetrics/) [*Metrics*](https://reference.aspose.com/font/net/aspose.font/font/metrics/) - gets a reference on [*IFontMetrics*](https://reference.aspose.com/font/net/aspose.font/ifontmetrics/) interface which provides functionality related to common font metrics.
- [*IFontEncoding*](https://reference.aspose.com/font/net/aspose.font/ifontencoding/) [*Encoding*](https://reference.aspose.com/font/net/aspose.font/font/encoding/)- gets a reference on [*IFontEncoding*](https://reference.aspose.com/font/net/aspose.font/ifontencoding/) interface, which provides encoding functionality.
- [*IGlyphAccessor*](https://reference.aspose.com/font/net/aspose.font.glyphs/iglyphaccessor/) [*GlyphAccessor*](https://reference.aspose.com/font/net/aspose.font/font/glyphaccessor/) - gets a reference on [*IGlyphAccessor*](https://reference.aspose.com/font/net/aspose.font.glyphs/iglyphaccessor/) interface, which provides functionality to retrieve specified glyph identifiers and glyphs.
- [*IFontSaver*](https://reference.aspose.com/font/net/aspose.font/ifontsaver/) [*FontSaver*](https://reference.aspose.com/font/net/aspose.font/font/fontsaver/) - provides a font saving functionality with [*IFontSaver*](https://reference.aspose.com/font/net/aspose.font/ifontsaver/) interface.

Also, [*IFont*](https://reference.aspose.com/font/net/aspose.font/ifont/) interface defines method [*Convert()*](https://reference.aspose.com/font/net/aspose.font/font/convert/), which is used to convert font to another format. 
At the moment there are available conversions from any format supported by Aspose.Font for reading to `TTF` format. [Supported font formats](https://docs.aspose.com/font/net/convert/#formats-supported-for-reading-andor-writing) are represented in the table.

See [*Font converter*](https://docs.aspose.com/font/net/convert/) 
for additional information on how to convert fonts with Aspose.Font.

### Font loading ###

Font loading functionality is not covered by implemented interfaces and this functionality is represented by the family of static methods [*Open()*](https://reference.aspose.com/font/net/aspose.font/font/open/). 
Parameters to pass into these methods are described in [*How to load fonts?*](https://docs.aspose.com/font/net/how-to-load-fonts/) article. 

### Font saving ###
											
Class [*Font*](https://reference.aspose.com/font/net/aspose.font/font/) implements interface [*IFontSaver*](https://reference.aspose.com/font/net/aspose.font/ifontsaver/), which declares functionality for font saving operations. 
To save a font use one of the overloaded methods [*Save()*](https://reference.aspose.com/font/net/aspose.font/font/save/) and pass the font file name or stream where to write the font.

In some cases there is a need to save a font into another format. For example, many web pages prefer working  with fonts in `WOFF` format and if you want to place your font on such a page you will have to save the font into `WOFF` format.
Method [*SaveToFormat()*](https://reference.aspose.com/font/net/aspose.font/font/savetoformat/) was designed for such cases. 

## Classes inherited from base Aspose.Font.Font class ##
										
### CffFont and Type1Font classes ###
										
These classes are used to work with fonts of `Compact Font Format` and Adobe `Type 1` font format respectively.
These classes override certain  properties and methods of [*Font*](https://reference.aspose.com/font/net/aspose.font/font/) class, adapting them for the actual font format.

 
### TtfFont class ###

This class is designed to support fonts of `TrueType` format.
A reference to an object of this type can be obtained by calling the static method [*Font.Open()*](https://reference.aspose.com/font/net/aspose.font/font/open/), with passing `TTF`, as value for [*FontType*](https://reference.aspose.com/font/net/aspose.font/fonttype/) enumeration. Method [*Font.Open()*](https://reference.aspose.com/font/net/aspose.font/font/open/) returns reference on base [*Font*](https://reference.aspose.com/font/net/aspose.font/font/) type, so the obtained reference has to be cast to `TtfFont` object type.

As known from the `TrueType` format specification, the font data is represented in different tables.
At the moment Aspose.Font library supports following tables: 
`head`, `cmap`, `glyf`, `loca`, `hhea`, `hmtx`, `maxp`, `OS/2`, `name`, `post`, `kern`, `cvt`, `fpgm`, `prep`. 

*The support for other tables specified by `TrueType` standard is planned to be implemented in the near future.

Support for `TrueType` tables in Aspose.Font implemented by classes from namespace [*Aspose.Font.TtfTables*](https://reference.aspose.com/font/net/aspose.font.ttftables/). 
Every class, which supports some table, has a name related to the  corresponding table name. 
The naming of the class is fulfilled according to the next rule:
the name of every class has the prefix `Ttf`, this prefix is followed by the name of the table and then the word "Table" ends the name of the class.

For example table `head` is supported by class [*TtfHeadTable*](https://reference.aspose.com/font/net/aspose.font.ttftables/ttfcfftable/), table `hhea` is supported by class [*TtfHheaTable*](https://reference.aspose.com/font/net/aspose.font.ttftables/ttfcfftable/), and so forth. 

References on all classes which support `TrueType` tables are collected by the object of type [*TtfTableRepository*](https://reference.aspose.com/font/net/aspose.font.ttftables/ttftablerepository/).

[*TtfFont*](https://reference.aspose.com/font/net/aspose.font.ttf/ttffont/) class gives the reference on the [*TtfTableRepository*](https://reference.aspose.com/font/net/aspose.font.ttftables/ttftablerepository/) object as property [*TtfTables*](https://reference.aspose.com/font/net/aspose.font.ttf/ttffont/ttftables/), so to get access to any `TrueType` table is possible by using syntax `font.TtfTables`,
where `font` is the reference on `TtfFont` type.

Support for `OpenType` font features is represented by property [*CffFont*](https://reference.aspose.com/font/net/aspose.font.ttf/ttffont/cfffont/). This property returns the reference on [*Font*](https://reference.aspose.com/font/net/aspose.font/font/) object,
loaded from `CFF` table, which contains a `Compact Font Format font` representation. 

Property [*IsSymbolic*](https://reference.aspose.com/font/net/aspose.font.ttf/ttffont/issymbolic/) used to detect whether the font is symbolic - specialized font, that is composed of non-alphabetic characters, graphics, or both.

## Access to font glyphs ##

Class [*TtfFont*](https://reference.aspose.com/font/net/aspose.font.ttf/ttffont/) provides extended functionality to access font glyphs. In addition to methods, defined by interface [*IGlyphAccessor*](https://reference.aspose.com/font/net/aspose.font.glyphs/iglyphaccessor/),  
[*TtfFont*](https://reference.aspose.com/font/net/aspose.font.ttf/ttffont/) provides two overloaded methods with the name [*GetGlyphById()*](https://reference.aspose.com/font/net/aspose.font.ttf/ttffont/getglyphbyid/), which require glyph identifiers in integer or string form. 

Using these methods works faster than using method  [*GetGlyphById()*](https://reference.aspose.com/font/net/aspose.font.ttf/ttffont/getglyphbyid/) from [*IGlyphAccessor*](https://reference.aspose.com/font/net/aspose.font.glyphs/iglyphaccessor/) interface.
Also, [*TtfFont*](https://reference.aspose.com/font/net/aspose.font.ttf/ttffont/) class provides a set of overloaded methods [*GetGlyphComponentsById()*](https://reference.aspose.com/font/net/aspose.font.ttf/ttffont/getglyphcomponentsbyid/). These methods are designed to work with composite glyphs.

**Composite glyph** is a glyph that references one or more other glyphs in the font. For example, the glyph for character Ä (Unicode U+00C4), can be composed of the glyph for character A (as the base glyph) and the diaeresis mark glyph.

Methods [*GetGlyphComponentsById()*](https://reference.aspose.com/font/net/aspose.font.ttf/ttffont/getglyphcomponentsbyid/) take the identifier of the composite glyph and return the list of glyphs the transferred composite glyph refers to.








