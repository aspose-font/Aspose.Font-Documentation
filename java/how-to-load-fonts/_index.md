---
title: How to load fonts? | Java
linktitle: How to load fonts?
type: docs
weight: 35
url: /java/how-to-load-fonts
keywords: download a font java, extract a font java, how to load fonts java,font downloader.
description: How to download fonts on yout device with the use of Aspose.Font for Java solution? The answer is given in this article. Not only you will know how to load any font but also see the code examples on how to fulfill font loading.
---

## Overview ##

 To answer the question, how to load fonts, first we need to learn that any font is physically an array of bytes in which data is represented in some format.
Therefore, for correct font loading you need to know two key parameters:
- Font format. Fonts can have different formats like `TrueType`, `Type1`, etc.
- Storage, where the binary data that represents the font is being held. Each font is represented as binary data but the way this data is stored may differ. In most cases, the font is being stored as a file on a hard drive. But sometimes font binary data can be placed in a different file which is not a font itself. For example, files created by Microsoft Word or Adobe Acrobat. These are files with extensions `.docx`, `.pdf`. They can include different fonts.	

## Objects and parameters required for font loading ##

Aspose.Font for Java gives object [*FontDefiniton*](https://apireference.aspose.com/font/java/com.aspose.font/FontDefinition) for notifying two key parameters demanded for font loading.
After creating and initiating [*FontDefiniton*](https://apireference.aspose.com/font/java/com.aspose.font/FontDefinition) object you only need to call static method [*Aspose.Font.Font.Open()*](https://apireference.aspose.com/font/java/com.aspose.font/Font#open-com.aspose.font.FontDefinition-) and pass just initialized object [*FontDefiniton*](https://apireference.aspose.com/font/java/com.aspose.font/FontDefinition) as a parameter to load the desired font and get a reference on it.


Let’s describe it with the pseudocode:
{{< highlight java >}} 
    package com.aspose.font;

    import com.aspose.font.FontDefinition;
    ...

    // Initialize object FontDefinition with appropriate properties
    FontDefinition fontDef = new FontDefinition(); 
    Font desiredFont = Font.Open(fontDef);
{{< /highlight >}}

The final result of the font loading is getting an object of [*Aspose.Font.Font*](https://apireference.aspose.com/font/java/com.aspose.font/Font) type.
Class [*Aspose.Font.Font*](https://apireference.aspose.com/font/java/com.aspose.font/Font) is a base font class of [*Aspose.Font*](https://apireference.aspose.com/font/java/com.aspose.font/package-summary) for the Java library. It represents the main functionality of working with fonts.

Getting loaded a font into [*Aspose.Font.Font*](https://apireference.aspose.com/font/java/com.aspose.font/Font) type object you will be able to render text with this font, get encoding data, and font metrics. You will also be able to modify or save this font and many more.

To initiate the [*FontDefiniton*](https://apireference.aspose.com/font/java/com.aspose.font/FontDefinition) object we need, as was mentioned before, to give it 2 font parameters, - the format type, and the object that describes the storage for font binary data.
The first parameter is notified with [*FontType*](https://apireference.aspose.com/font/java/com.aspose.font/FontType) enumeration.

To simplify work with the second parameter, [*Aspose.Font*](https://apireference.aspose.com/font/java/com.aspose.font/package-summary) offers a series of objects that gives universal access to the font binary data independently from where the font is placed.

This universal access is linked with such a thing as a byte stream. 
So, independently from where the font is placed - into a file on a disk, inside another file, byte array in memory - in any case, special [*Aspose.Font*](https://apireference.aspose.com/font/java/com.aspose.font/package-summary) objects will provide an access to the byte stream, related to the desired font. 

Let's describe these objects:
1. [*StreamSource*](https://apireference.aspose.com/font/java/com.aspose.font/StreamSource) class.
This abstract base class defines the properties and methods that give access to the font byte stream. 
[*GetFontStream*()](https://apireference.aspose.com/font/java/com.aspose.font/StreamSource) method of this class returns a stream, related to binary font data.
Property [*Offset*](https://apireference.aspose.com/font/java/com.aspose.font/StreamSource#setOffset-long-) points on the position at this stream, from where we must start to read data.
2. Two most used classes inherited from the base [*StreamSource*](https://apireference.aspose.com/font/java/com.aspose.font/StreamSource):
   - [*FileSystemStreamSource*](https://apireference.aspose.com/font/java/com.aspose.font/StreamSource#setOffset-long-) - designed to provide access to the stream, based on the file system. 
	Property [*FileName*](https://apireference.aspose.com/font/java/com.aspose.font/FileSystemStreamSource#getFileName--) returns the name of the font file. [*GetFontStream*()](https://apireference.aspose.com/font/java/com.aspose.font/FileSystemStreamSource#getFontStream--) method returns a byte stream, related to this file.
   - [*ByteContentStreamSource*](https://apireference.aspose.com/font/java/com.aspose.font/ByteContentStreamSource) - provides access to the stream, based on the byte array.

## How to initiate classes? ##

Here are examples of the initiation of these classes.

1. Let’s assume that the font is in the file named Lora.ttf. In this case, to get access to the byte stream of this font we need to create the object of type [*FileSystemStreamSource*](https://apireference.aspose.com/font/java/com.aspose.font/FileSystemStreamSource) using this single constructor:

{{< highlight java>}} 
    FileSystemStreamSource fontSource = new FileSystemStreamSource("Lora.ttf");
{{< /highlight >}}

2. If the font binary data is located in a binary array defined by the byte [] fontArray variable, then an object of type [*ByteContentStreamSource*](https://apireference.aspose.com/font/java/com.aspose.font/ByteContentStreamSource) will provide an access to the font data stream, based on the fontArray variable.
To get access to the font byte stream, we have to create an object of type [*ByteContentStreamSource*](https://apireference.aspose.com/font/java/com.aspose.font/ByteContentStreamSource) to get access to the stream, related to the font byte array using code like this:

{{< highlight java >}} 
    ByteContentStreamSource fontSource = new ByteContentStreamSource(fontArray);
{{< /highlight >}}

So, to provide access to font binary data, use objects inherited from the base [*StreamSource*](https://apireference.aspose.com/font/java/com.aspose.font/StreamSource) class. Further, we will call such objects **font stream sources**.

## FontFileDefinition object ##

Most fronts are located in regular files but at the same time, part of fonts may have different data sources. To join into one object terms **file** and **font binary stream**, [*Aspose.Font*](https://apireference.aspose.com/font/java/com.aspose.font/package-summary) library provides special object [*FontFileDefinition*](https://apireference.aspose.com/font/java/com.aspose.font/FontFileDefinition). 

This object has such properties:
- [*FileName*](https://apireference.aspose.com/font/java/com.aspose.font/FontFileDefinition#getFileName--) - name of font file.
- [*FileExtension*](https://apireference.aspose.com/font/java/com.aspose.font/FontFileDefinition#getFileExtension--) - extension of a font file.
- [*StreamSource*](https://apireference.aspose.com/font/java/com.aspose.font/FontFileDefinition#getStreamSource--) - font stream source.
- [*Offset*](https://apireference.aspose.com/font/java/com.aspose.font/FontFileDefinition#getOffset--) - offset inside the font byte stream.

The simplest and one of the most used constructors of this object is the constructor with the following signature: [*FontFileDefinition*](https://apireference.aspose.com/font/java/com.aspose.font/FontFileDefinition) (FileInfo fontFile), use this constructor for cases when the desired font is in a file on the hard drive. 

Here is an example of initiating such an object for font `Montserrat` which is located in the file C:\Windows\Fonts\Montserrat.ttf:

{{< highlight java >}} 
    FontFileDefinition fileDef = new FontFileDefinition(new FileInfo(@"C:\Windows\Fonts\Montserrat.ttf"));
{{< /highlight >}}

Also, [*FontFileDefinition*](https://apireference.aspose.com/font/java/com.aspose.font/FontFileDefinition) can reference `Montserrat` font using the following constructors:

{{< highlight java >}} 
    FontFileDefinition fileDef = new FontFileDefinition(new FileSystemStreamSource(@"C:\Windows\Fonts\Montserrat.ttf"));

    FontFileDefinition fileDef = new FontFileDefinition("ttf", new FileSystemStreamSource(@"C:\Windows\Fonts\Montserrat.ttf"));
{{< /highlight >}}

Parameter [*fileExtension*](https://apireference.aspose.com/font/java/com.aspose.font/FontFileDefinition#FontFileDefinition-java.lang.String-com.aspose.font.StreamSource-) should match the standard, for the font format, extension. For example, if the font format is `TrueType`, then the value of the [*fileExtension*](https://apireference.aspose.com/font/java/com.aspose.font/FontFileDefinition#FontFileDefinition-java.lang.String-com.aspose.font.StreamSource-) parameter may be `ttf` or `ttc` (if the font file is a collection of `TrueType` fonts). 
If the font format is `Embedded Open Type`, then the value of [*fileExtension*](https://apireference.aspose.com/font/java/com.aspose.font/FontFileDefinition#FontFileDefinition-java.lang.String-com.aspose.font.StreamSource-) parameter should be `eot`.

The table below shows the most often used in Aspose.Font font file formats. There they are with the matching values that the [*fileExtension*](https://apireference.aspose.com/font/java/com.aspose.font/FontFileDefinition#FontFileDefinition-java.lang.String-com.aspose.font.StreamSource-) parameter should take.

|**Font file Format**|**fileExtension**|
| :- | :- |
|`TrueType`, single font|`ttf`|
|`TrueType` font collection|`ttc`|
|`Web Open Font Format`|`woff`|
| `Web Open Font Format version 2.0`|`woff2`|
| `Embedded OpenType`|`eot`|
|Adobe `Type 1` font|`pfa`, `pfb`, `afm`, `pfm`|
|`Compact Font Format`|`cff`, can be null|

If font data starts not from the position 0 of the byte stream, use the following constructor with the [*offset*](https://apireference.aspose.com/font/java/com.aspose.font/FontFileDefinition#FontFileDefinition-java.lang.String-com.aspose.font.StreamSource-) parameter:

{{< highlight java >}} 
    FontFileDefinition(string fileExtension, StreamSource streamSource, long offset).
{{< /highlight >}}

## How to initiate FontDefinition object? ##

Now, when you’ve got an idea of the objects inherited from the [*StreamSource*](https://apireference.aspose.com/font/java/com.aspose.font/StreamSource) class and providing access to the font byte stream, and of the [*FontFileDefinition*](https://apireference.aspose.com/font/java/com.aspose.font/FontFileDefinition) object, we will explain to you how to initiate [*FontDefiniton*](https://apireference.aspose.com/font/java/com.aspose.font/FontDefinition) object with these objects properly for different situations.

[*FontDefiniton*](https://apireference.aspose.com/font/java/com.aspose.font/FontDefinition) object provides you with many overloaded constructors.
The common feature of all existing constructors is the [*FontType*](https://apireference.aspose.com/font/java/com.aspose.font/FontType) parameter. It describes the type of font format.
As it was mentioned before, apart from the [*FontType*](https://apireference.aspose.com/font/java/com.aspose.font/FontType) value, object [*FontDefiniton*](https://apireference.aspose.com/font/java/com.aspose.font/FontDefinition) should be initialized with reference to the font binary data. 


Next parameters of [*FontDefiniton*](https://apireference.aspose.com/font/java/com.aspose.font/FontDefinition) constructors can be used in this case:
- [*fontName*](https://apireference.aspose.com/font/java/com.aspose.font/FontDefinition#getFontName--);
- [*fileExtension*](https://apireference.aspose.com/font/java/com.aspose.font/FontFileDefinition#FontFileDefinition-java.lang.String-com.aspose.font.StreamSource-);
- object of the [*StreamSource*](https://apireference.aspose.com/font/java/com.aspose.font/StreamSource) type;
- object of the [*FontFileDefinition*](https://apireference.aspose.com/font/java/com.aspose.font/FontFileDefinition) type.

You may have a question. Why would we pass the parameter [*fileExtension*](https://apireference.aspose.com/font/java/com.aspose.font/FontFileDefinition#FontFileDefinition-java.lang.String-com.aspose.font.StreamSource-) to the [*FontDefiniton*](https://apireference.aspose.com/font/java/com.aspose.font/FontDefinition) or the [*FontFileDefinition*](https://apireference.aspose.com/font/java/com.aspose.font/FontFileDefinition) object, when we always pass the parameter [*FontType*](https://apireference.aspose.com/font/java/com.aspose.font/FontType) which seems to coincide by its value with [*fileExtension*](https://apireference.aspose.com/font/java/com.aspose.font/FontFileDefinition#FontFileDefinition-java.lang.String-com.aspose.font.StreamSource-)?
The problem is that [*FontType*](https://apireference.aspose.com/font/java/com.aspose.font/FontType) does not always coincide with the value of [*fileExtension*](https://apireference.aspose.com/font/java/com.aspose.font/FontFileDefinition#FontFileDefinition-java.lang.String-com.aspose.font.StreamSource-). [*FontType*](https://apireference.aspose.com/font/java/com.aspose.font/FontType) defines the common font format but not the font format of a specific file. Some fonts of one format can have different file formats.
For example, the value FontType.TTF defines `TrueType` format. But at the same time `TrueType` includes a few font formats and there are font files with extensions `ttf`, `eot`, `ttc`, etc. in there. And if, for example, for the font of `EOT` format we pass to [*FontDefiniton*](https://apireference.aspose.com/font/java/com.aspose.font/FontDefinition) only FontType.TTF value, then how will this object understand that the font belongs to `EOT` format and not to `TTF`?
In the same way, the value of FontType.Type1 is the common definition for fonts of this format. At the same time, `Type1` format font files have extensions `.pfa`, `.pfb`, `.afm`, `.pfm`. So you cannot define font file format properly relying only on the FonType.Type1 value. Hence, to define font format correctly we need to specify the parameter [*FontType*](https://apireference.aspose.com/font/java/com.aspose.font/FontType) with the value of the [*fileExtension*](https://apireference.aspose.com/font/java/com.aspose.font/FontFileDefinition#FontFileDefinition-java.lang.String-com.aspose.font.StreamSource-) parameter.

Below you can learn examples of [*FontDefiniton*](https://apireference.aspose.com/font/java/com.aspose.font/FontDefinition) object initialization and following font loading for different cases. 

In all the cases the final font loading result is put into the variable of [*Aspose.Font.Font*](https://apireference.aspose.com/font/java/com.aspose.font/Font) type. This type is the basic font class of [*Aspose.Font*](https://apireference.aspose.com/font/java/com.aspose.font/package-summary) library and objects of this type provide common base functionality to work with fonts. 
Loading the font into this object you will be able to render text with this font, get coding information, font metrics, etc.

## Examples of how to load fonts ##

Let's have as an example, loading font `Montserrat` from the file Montserrat-Regular.ttf.

Import the next classes:

{{< highlight java >}}
    package com.aspose.font;

    import java.io.File;
    import java.io.IOException;
    import java.nio.file.Files;
    import java.nio.file.Paths;

    import com.aspose.font.ByteContentStreamSource;
    import com.aspose.font.FileSystemStreamSource;
    import com.aspose.font.Font;
    import com.aspose.font.FontDefinition;
    import com.aspose.font.FontFileDefinition;
    import com.aspose.font.FontType;
{{< /highlight >}}


You can load this font using [*FontDefiniton*](https://apireference.aspose.com/font/java/com.aspose.font/FontDefinition) and [*FontFileDefinition*](https://apireference.aspose.com/font/java/com.aspose.font/FontFileDefinition) objects in a few different ways:

### Loading with the help of System.IO.FileInfo object ###

  To fulfil loading do the next:
1. Construct path to the file.
2. Initiate [*FontDefiniton*](https://apireference.aspose.com/font/java/com.aspose.font/FontDefinition) object passing `TTF` as [*FontType*](https://apireference.aspose.com/font/java/com.aspose.font/FontType) value.
3. Get automatically calculated value [*fileExtension*](https://apireference.aspose.com/font/java/com.aspose.font/FontFileDefinition#FontFileDefinition-java.lang.String-com.aspose.font.StreamSource-).
4. Load the font.
{{< highlight java >}}
    // Construct path to the file
    String fontPath = Paths.get(getDataDir(), "Montserrat-Regular.ttf").toString();

    // Initialize FontDefinition object passing TTF as FontType value and using FontFileDefinition
    FontFileDefinition fileDef = new FontFileDefinition(new File(fontPath));

    // Based on FileInfo object, fileExtension value is calculated automatically from FileInfo fields.
    FontDefinition fontDef = new FontDefinition(FontType.TTF, fileDef);

    // Load the font 
    Font font = Font.open(fontDef);
{{< /highlight >}}

### Loading with the help of FileSystemStreamSource type object ###

Take the next steps to fulfil the operation:
1. Construct path to the file.
2. Initiate [*FontDefiniton*](https://apireference.aspose.com/font/java/com.aspose.font/FontDefinition) object.
3. Set [*fileExtension*](https://apireference.aspose.com/font/java/com.aspose.font/FontFileDefinition#FontFileDefinition-java.lang.String-com.aspose.font.StreamSource-) to `ttf`.
4. Load the font.
{{< highlight java>}}
    // Construct path to the file
    String fontPath = Paths.get(getDataDir(), "Montserrat-Regular.ttf").toString();

    // Initialize FontDefinition object passing TTF as FontType value and using FontFileDefinition
    FontFileDefinition fileDef = new FontFileDefinition("ttf", new FileSystemStreamSource(fontPath));

    // Based on FileSystemStreamSource object, set fileExtension to "ttf"
    FontDefinition fontDef = new FontDefinition(FontType.TTF, fileDef);

    // Load the font
    Font font = Font.open(fontDef);
{{< /highlight >}}

### Font loading without FontFileDefinition object, with passing FileSystemStreamSource directly to FontDefinition ###

The next actions have to be taken for loading the font this way:
1. Construct path to the file.
2. Initiate [*FontDefiniton*](https://apireference.aspose.com/font/java/com.aspose.font/FontDefinition) object passing `TTF` as [*FontType*](https://apireference.aspose.com/font/java/com.aspose.font/FontType) value, `ttf` as [*fileExtension*](https://apireference.aspose.com/font/java/com.aspose.font/FontFileDefinition#FontFileDefinition-java.lang.String-com.aspose.font.StreamSource-) value and [*FileSystemStreamSource*](https://apireference.aspose.com/font/java/com.aspose.font/FileSystemStreamSource) object. Parameter [*fileExtension*](https://apireference.aspose.com/font/java/com.aspose.font/FontFileDefinition#FontFileDefinition-java.lang.String-com.aspose.font.StreamSource-) here is not a duplicate value for parameter [*FontType*](https://apireference.aspose.com/font/java/com.aspose.font/FontType).
3. Load the font.
{{< highlight java >}}
    // Construct path to the file
    String fontPath = Paths.get(getDataDir(), "Montserrat-Regular.ttf").toString();

    // Initialize FontDefinition object passing TTF as FontType value, "ttf" as fileExtension value, 
    // and FileSystemStreamSource object. Parameter 'fileExtension' here is not duplicate value 
    // for parameter 'FontType' and it's needed for correct font format detection
    FontDefinition fontDef = new FontDefinition(FontType.TTF, "ttf", new FileSystemStreamSource(fontPath));

    // Load the font
    Font font = Font.open(fontDef);
{{< /highlight >}}

### Font loading with the byte[] type variable and with using ByteContentStreamSource type object ###

To load a font from the byte array you need to:
1. Construct path to the file.
2. Load font binary data into the byte array
3. Initialize [*FontDefiniton*](https://apireference.aspose.com/font/java/com.aspose.font/FontDefinition) object  passing `TTF` as [*FontType*](https://apireference.aspose.com/font/java/com.aspose.font/FontType) value, `ttf` as [*fileExtension*](https://apireference.aspose.com/font/java/com.aspose.font/FontFileDefinition#FontFileDefinition-java.lang.String-com.aspose.font.StreamSource-) value, and [*ByteContentStreamSource*](https://apireference.aspose.com/font/java/com.aspose.font/ByteContentStreamSource) object based on fontBytes array.
4. Load the font.
{{< highlight java >}}
    // Construct path to the file
    String fontPath = Paths.get(getDataDir(), "Montserrat-Regular.ttf").toString();

    // Load font binary data into byte array
    byte[] fontBytes = Files.readAllBytes(Paths.get(fontPath));

    // Initialize FontDefinition object  passing TTF as FontType value, "ttf" as fileExtension value, 
    // and ByteContentStreamSource object based on fontBytes array
    FontDefinition fontDef = new FontDefinition(FontType.TTF, "ttf", new ByteContentStreamSource(fontBytes));

    // Load the font
    Font font = Font.open(fontDef);
{{< /highlight >}}

{{% alert color="primary" %}}
For getting more examples of using the Aspose.Font go to [*Aspose.Font.Examples.sln solution*](https://github.com/aspose-font/Aspose.Font-Documentation/commit/b265697db59728c3530d0116f12409606bdd01aa), in the [*java-examples*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/java-examples) of the [*Aspose.Font Documentation*](https://github.com/aspose-font/Aspose.Font-Documentation)

If you have any problems or questions left, you may post them at the [*Aspose.Font.Product Family*](https://forum.aspose.com/c/font/41) section of the [*Free Support Forum*](https://forum.aspose.com/) and within a few hours our support team will clear everything up for you.
{{% /alert %}}