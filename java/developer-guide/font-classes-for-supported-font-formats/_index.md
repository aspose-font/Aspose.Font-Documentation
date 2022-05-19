---
title: Font classes for supported font formats | Java
linktitle: Aspose.Font classes for supported font formats
type: docs
weight: 5
url: /java/developer-guide/font-classes-for-supported-font-formats
keywords: download font, save font, font type, convert font.
description: Getting learned Aspose.Font for Java library is better by starting by learning the hierarchy of its classes. The article will give you a clearer understanding of how to manipulate fonts and where to start in this process.
---

## Hierarchy of com.aspose.font classes ##

The hierarchy of classes of [*com.aspose.font*](https://apireference.aspose.com/font/java/com.aspose.font/package-summary) package that are aimed to support fonts of different formats is pretty simple.

Class [*Font*](https://apireference.aspose.com/font/java/com.aspose.font/Font) is a single base class and any class, which supports some font format inherited from *Font*. There is common information for fonts of all formats gathered in this class. This information includes such data as font style, font name, postscript font name, font family, font metrics, the number of glyphs of the font, encoding, etc.

Class *Font* is an abstract class so the instance of the object of `com.aspose.font.Font` type, cannot be created directly.
The reference on the just created object is returned by the static methods of this class that are responsible for the font loading that, family of overloaded methods [*open()*](https://apireference.aspose.com/font/java/com.aspose.font/Font#open-com.aspose.font.FontDefinition-).

As for the specific for one or another font format information, for providing such information are responsible objects inherited from base `com.aspose.font.Font`.
The only data, specific for font format, which base *Font*  class includes, is the value from [*FontType*](https://apireference.aspose.com/font/java/com.aspose.font/FontType) enumeration.

The next classes are inherited from [*com.aspose.font.Font*](https://apireference.aspose.com/font/java/com.aspose.font/Font) and used to work with specific font format: [*TtfFont*](https://apireference.aspose.com/font/java/com.aspose.font/TtfFont), [*Type1Font*](https://apireference.aspose.com/font/java/com.aspose.font/Type1Font), [*CffFont*](https://apireference.aspose.com/font/java/com.aspose.font/CffFont).

### Interrelations between font format, FontType value and com.aspose.font.Font object type ###

The table below shows the accordance between the formats, supported by com.aspose.font, the corresponding to these formats values from *FontType* enumeration, and classes used for manipulating each of these formats.


|**Font Format**|**FontType value**|**com.aspose.font object type**|
| :- | :- |:- |
|`TrueType`|`TTF`|[*TtfFont*](https://apireference.aspose.com/font/java/com.aspose.font/TtfFont)|
|`Type 1`|`Type 1`|[*Type1Font*](https://apireference.aspose.com/font/java/com.aspose.font/Type1Font)|
|`Compact Font Format` (`CFF`)|`CFF`|[*CffFont*](https://apireference.aspose.com/font/java/com.aspose.font/CffFont)|

### Interrelations between font file format, FontType value and com.aspose.font.Font object type ###

The formats of the aforementioned fonts from *FontType* enumeration are wider terms than file formats for those fonts.

For example, `TrueType` format covers the following file formats available for loading with com.aspose.font: `ttf`, `ttc`, `eot`, `woff`, `woff2`. So the common feature for fonts with extensions `.ttf`, `.ttc`, `.eot`, `.woff`, `.woff2` is that they are all related to `TrueType` font family.

That is why, if replacing in the table the column “Font Format” to the column "Font file format", we will get the next table of relations between font file formats, fitting to them *FontType* values, and objects aimed to work with the corresponding font format in com.aspose.font.

|**Font file format**|**FontType value**|**com.aspose.font object type**|
| :- | :- |:- |
|`ttf`, `ttc`, `eot`, `woff`, `woff2`|`TTF`|[*TtfFont*](https://apireference.aspose.com/font/java/com.aspose.font/TtfFont)|
|`pfa`, `pfb`|`Type 1`|[*Type1Font*](https://apireference.aspose.com/font/java/com.aspose.font/Type1Font)|
|`afm`, `pfm`|`Type 1`|[*Type1MetricFont*](https://apireference.aspose.com/font/java/com.aspose.font/Type1MetricFont)|
|binary data of `Compact Font Format` type|`CFF`|[*CffFont*](https://apireference.aspose.com/font/java/com.aspose.font/CffFont)|

## Functionality of com.aspose.font.Font class ##

Functionality is defined by [*Font*](https://apireference.aspose.com/font/java/com.aspose.font/Font) class can be divided into several areas.

### Functionality defined by interfaces that Font class implements ###

The most important interface of the Font interfaces list is [*IFont*](https://apireference.aspose.com/font/java/com.aspose.font/IFont) interface. It provides properties for [*IGlyphAccessor*](https://apireference.aspose.com/font/java/com.aspose.font/IGlyphAccessor) and [*IFontSaver*](https://apireference.aspose.com/font/java/com.aspose.font/IFontSaver) interfaces, 
that are implemented by *Font*  class, so all the functionality, defined by interfaces which *Font* class implements is covered by this 
*IFont* interface. 


Interface *IFont* defines properties that are common for all font formats supported by com.aspose.font.
Below are the descriptions for each property.

### Properties for manipulating font formats ###

- string [*FontName*](https://apireference.aspose.com/font/java/com.aspose.font/IFont#getFontName--) - the name of the font.
- [*MultiLanguageString*](https://apireference.aspose.com/font/java/com.aspose.font/MultiLanguageStringg) [*FontNames*](https://apireference.aspose.com/font/java/com.aspose.font/IFont#getFontNames--) - name of the font in different languages.
- [*MultiLanguageString*](https://apireference.aspose.com/font/java/com.aspose.font/MultiLanguageString) [*PostscriptNames*](https://apireference.aspose.com/font/java/com.aspose.font/IFont#getPostscriptNames--) - postscript name of the font, in different languages.
- string [*FontFamily*](https://apireference.aspose.com/font/java/com.aspose.font/IFont#getFontFamily-java.lang.String-) - the name of the font family. To get more details about  font families see [*Font family*](https://docs.aspose.com/font/java/what-is-font/#font-family) charpter.
- [*FontType*](https://apireference.aspose.com/font/java/com.aspose.font/FontType) [*FontType*](https://apireference.aspose.com/font/java/com.aspose.font/IFont#getFontType--) -  type of font format, represented by *FontType* enumeration.
- [*FontStyle*](https://apireference.aspose.com/font/java/com.aspose.font/FontStyle) [*FontStyle*](https://apireference.aspose.com/font/java/com.aspose.font/IFont#getFontStyle--) - font style value from *FontStyle* class. Learn more information about [*font styles*](https://docs.aspose.com/font/java/what-is-font/#font-style).
- string [*Style*](https://apireference.aspose.com/font/java/com.aspose.font/IFont#getStyle--) - the name of the font style, similar to property [*FontStyle*](https://apireference.aspose.com/font/java/com.aspose.font/IFont#getFontStyle--), represented in its raw string form, provided by font data. 
- [*FontDefinition*](https://apireference.aspose.com/font/java/com.aspose.font/FontDefinition) [*FontDefinition*](https://apireference.aspose.com/font/java/com.aspose.font/IFont#getFontDefinition--) - an object that describes the format and the source to load font from. Go to [*How to load fonts*](https://docs.aspose.com/font/java/how-to-load-fonts/) where you can learn in detail how to work with this object.
- int [*NumGlyphs*](https://apireference.aspose.com/font/java/com.aspose.font/IFont#getNumGlyphs--) - gets number of glyphs of the font.
- [*IFontMetrics*](https://apireference.aspose.com/font/java/com.aspose.font/IFontMetrics) [*Metrics*](https://apireference.aspose.com/font/java/com.aspose.font/IFont#getMetrics--) - gets a reference on *IFontMetrics* interface which provides functionality related to common font metrics.
- [*IFontEncoding*](https://apireference.aspose.com/font/java/com.aspose.font/IFontEncoding) [*Encoding*](https://apireference.aspose.com/font/java/com.aspose.font/IFont#getEncoding--)- gets a reference on *IFontEncoding* interface, which provides encoding functionality.
- [*IGlyphAccessor*](hhttps://apireference.aspose.com/font/java/com.aspose.font/IGlyphAccessor) [*GlyphAccessor*](https://apireference.aspose.com/font/java/com.aspose.font/IFont#getGlyphAccessor--) - gets a reference on *IGlyphAccessor* interface, which provides functionality to retrieve specified glyph identifiers and glyphs.
- [*IFontSaver*](https://apireference.aspose.com/font/java/com.aspose.font/IFontSaver) [*FontSaver*](https://apireference.aspose.com/font/java/com.aspose.font/IFont#getFontSaver--) - provides a font saving functionality with *IFontSaver* interface.

Also, [*IFont*](https://apireference.aspose.com/font/java/com.aspose.font/IFont) interface defines method [*convert()*](https://apireference.aspose.com/font/java/com.aspose.font/IFont#convert-com.aspose.font.FontType-), which is used to convert font to another format. 
At the moment there are available conversions from any format supported by Aspose.Font for reading to `TTF` format. [Supported font formats](https://docs.aspose.com/font/java/convert/#formats-supported-for-reading-andor-writing) are represented in the table.

See [*Font Converter*](https://docs.aspose.com/font/java/convert/) 
for additional information on how to convert fonts with Aspose.Font.

### Font loading ###

Font loading functionality is not covered by implemented interfaces and this functionality is represented by the family of static methods [*open()*](https://apireference.aspose.com/font/java/com.aspose.font/Font#open-com.aspose.font.FontDefinition-). 
Parameters to pass into these methods are described in [*How to load fonts?*](https://docs.aspose.com/font/java/how-to-load-fonts/) article. 

### Font saving ###
											
Class [*Font*](https://apireference.aspose.com/font/java/com.aspose.font/Font) implements interface [*IFontSaver*](https://apireference.aspose.com/font/java/com.aspose.font/IFontSaver), which declares functionality for font saving operations. 
To save a font use one of the overloaded methods [*save()*](https://apireference.aspose.com/font/java/com.aspose.font/Font#save-java.io.OutputStream-) and pass the font file name or stream where to write the font.

In some cases there is a need to save a font into another format. For example, many web pages prefer working  with fonts in `WOFF` format and if you want to place your font on such a page you will have to save the font into `WOFF` format.
Method [*saveToFormat()*](https://apireference.aspose.com/font/java/com.aspose.font/Font#saveToFormat-java.io.OutputStream-com.aspose.font.FontSavingFormats-) was designed for such cases. 

## Classes inherited from com.aspose.font.Font class ##
										
### CffFont and Type1Font classes ###
										
These classes are used to work with fonts of `Compact Font Format` and Adobe `Type 1` font format respectively.
These classes override certain  properties and methods of *Font* class, adapting them for the actual font format.

 
### TtfFont class ###

This class is designed to support fonts of `TrueType` format.
A reference to an object of this type can be obtained by calling the static method [*Font.open()*](https://apireference.aspose.com/font/java/com.aspose.font/Font#open-com.aspose.font.FontDefinition-), with passing `TTF`, as value for [*FontType*](https://apireference.aspose.com/font/java/com.aspose.font/FontType) enumeration. Method *Font.open()* returns reference on base [*Font*](https://apireference.aspose.com/font/java/com.aspose.font/Font) type, so the obtained reference has to be cast to `TtfFont` object type.

As known from the `TrueType` format specification, the font data is represented in different tables.
At the moment Aspose.Font library supports following tables: 
`head`, `cmap`, `glyf`, `loca`, `hhea`, `hmtx`, `maxp`, `OS/2`, `name`, `post`, `kern`, `cvt`, `fpgm`, `prep`. 

*The support for other tables specified by `TrueType` standard is planned to be implemented in the near future.

Support for `TrueType` tables in Aspose.Font implemented by class [*TtfTableBase*](https://apireference.aspose.com/font/java/com.aspose.font/TtfTableBase). 
Every class, which supports some table, has a name related to the  corresponding table name. 
The naming of the class is fulfilled according to the next rule:
the name of every class has the prefix `Ttf`, this prefix is followed by the name of the table and then the word "Table" ends the name of the class.

For example table `head` is supported by class [*TtfHeadTable*](https://apireference.aspose.com/font/java/com.aspose.font/TtfHeadTable), table `hhea` is supported by class [*TtfHheaTable*](https://apireference.aspose.com/font/java/com.aspose.font/TtfHheaTable), and so forth. 

References on all classes which support `TrueType` tables are collected by the object of type [*TtfTableRepository*](https://apireference.aspose.com/font/java/com.aspose.font/TtfTableRepository).

[*TtfFont*](https://apireference.aspose.com/font/java/com.aspose.font/TtfFont) class gives the reference on the [*TtfTableRepository*](https://apireference.aspose.com/font/java/com.aspose.font/TtfTableRepository) object as property [*TtfTables*](https://apireference.aspose.com/font/java/com.aspose.font/TtfFont#getTtfTables--), so to get access to any `TrueType` table is possible by using syntax `font.TtfTables`,
where `font` is the reference on `TtfFont` type.

Support for `OpenType` font features is represented by property [*CffFont*](https://apireference.aspose.com/font/java/com.aspose.font/CffFont). This property returns the reference on [*Font*](https://apireference.aspose.com/font/java/com.aspose.font/Font) object,
loaded from `CFF` table, which contains a `Compact Font Format font` representation. 

Property [*IsSymbolic*](https://apireference.aspose.com/font/java/com.aspose.font/TtfFont#isSymbolic--) used to detect whether the font is symbolic - specialized font, that is composed of non-alphabetic characters, graphics, or both.

## Access to font glyphs ##

Class [*TtfFont*](https://apireference.aspose.com/font/java/com.aspose.font/TtfFont) provides extended functionality to access font glyphs. In addition to methods, defined by interface [*IGlyphAccessor*](https://apireference.aspose.com/font/java/com.aspose.font/IGlyphAccessor),  
[*TtfFont*](https://apireference.aspose.com/font/java/com.aspose.font/TtfFont) provides two overloaded methods with the name [*getGlyphById()*](https://apireference.aspose.com/font/java/com.aspose.font/TtfFont#getGlyphById-com.aspose.font.GlyphId-), which require glyph identifiers in integer or string form. 

Using these methods works faster than using method  *getGlyphById()* from *IGlyphAccessor* interface.
Also, *TtfFont* class provides a set of overloaded methods [*getGlyphComponentsById()*](https://apireference.aspose.com/font/java/com.aspose.font/TtfFont#getGlyphComponentsById-com.aspose.font.GlyphId-com.aspose.font.GlyphIdList-). These methods are designed to work with composite glyphs.

**Composite glyph** is a glyph that references one or more other glyphs in the font. For example, the glyph for character Ä (Unicode U+00C4), can be composed of the glyph for character A (as the base glyph) and the diaeresis mark glyph.

Methods *getGlyphComponentsById()* take the identifier of the composite glyph and return the list of glyphs the transferred composite glyph refers to.








