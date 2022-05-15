---
title: How to load fonts? | C++
linktitle: How to load fonts?
type: docs
weight: 50
url: /cpp/how-to-load-fonts
keywords: download a font, extract a font, how to load fonts.
description: Here is described how to load fonts from different sources. You will learn the objects, parameters, methods required for this, and get examples of loading.
---

## Overview ##

 To answer the question, how to load fonts, first we need to learn that any font is physically an array of bytes in which data is represented in some format.
Therefore, for correct font loading you need to know two key parameters:
- Font format. Fonts can have different formats like `TrueType`, `Type1`, etc.
- Storage, where the binary data that represents the font is being held. Each font is represented as binary data but the way this data is stored may differ. In most cases, the font is being stored as a file on a hard drive. But sometimes font binary data can be placed in a different file which is not a font itself. For example, files created by Microsoft Word or Adobe Acrobat. These are files with extensions `.docx`, `.pdf`. They can include different fonts.	

## Objects and parameters required for font loading ##

Aspose.Font for C++ gives object [*FontDefiniton*](https://apireference.aspose.com/font/cpp/class/aspose.font.sources.font_definition) for notifying two key parameters demanded for font loading.
After creating and initiating [*FontDefiniton*](https://apireference.aspose.com/font/cpp/class/aspose.font.sources.font_definition) object you only need to call static method [*Aspose.Font.Font.Open()*](https://apireference.aspose.com/font/cpp/class/aspose.font.font#ac2387bf04ccb5bac51cf37984d4ebf33) and pass just initialized object [*FontDefiniton*](https://apireference.aspose.com/font/cpp/class/aspose.font.sources.font_definition) as a parameter to load the desired font and get a reference on it.


Let’s describe it with the pseudocode:
```C++
using Aspose::Font;
    ...

    // Initialize object FontDefinition with appropriate properties
    System::SharedPtr<FontDefinition> fontDef = System::MakeObject<FontDefinition>();
    System::SharedPtr<Font> desiredFont = Aspose::Font::Font::Open(fd);

```

The final result of the font loading is getting an object of [*Aspose.Font.Font*](https://apireference.aspose.com/font/cpp/class/aspose.font.font) type.
Class [*Aspose.Font.Font*](https://apireference.aspose.com/font/cpp/class/aspose.font.font) is a base font class of [*Aspose.Font*](https://apireference.aspose.com/font/cpp/namespace/aspose.font) for the C++ library. It represents the main functionality of working with fonts.

Getting loaded a font into [*Aspose.Font.Font*](https://apireference.aspose.com/font/cpp/class/aspose.font.font) type object you will be able to render text with this font, get encoding data, and font metrics. You will also be able to modify or save this font and many more.

To initiate the [*FontDefiniton*](https://apireference.aspose.com/font/cpp/class/aspose.font.sources.font_definition) object we need to give [*FontDefinition()*](https://apireference.aspose.com/font/cpp/class/aspose.font.sources.font_definition#ad278b45a083df140140aec66084c4750) 2 font parameters, - the format type, and the object that describes the storage for font binary data.
The first parameter is notified with [*FontType*](https://apireference.aspose.com/font/cpp/namespace/aspose.font#af7d5912b11b4a035acb454f48888122f) enumeration.

To simplify work with the second parameter, [*Aspose.Font*](https://apireference.aspose.com/font/cpp/namespace/aspose.font) offers a series of objects that gives universal access to the font binary data independently from where the font is placed.h

This universal access is linked with such a thing as a byte stream. 
So, independently from where the font is placed - into a file on a disk, inside another file, byte array in memory - in any case, special [*Aspose.Font*](https://apireference.aspose.com/font/cpp/namespace/aspose.font) objects will provide an access to the byte stream, related to the desired font. 

Let's describe these objects:
1. [*StreamSource*](https://apireference.aspose.com/font/cpp/class/aspose.font.sources.stream_source) class.
This abstract base class defines the properties and methods that give access to the font byte stream. 
[*GetFontStream*()](https://apireference.aspose.com/font/cpp/class/aspose.font.sources.stream_source#a77e585b72a7a7d90a5e6a5c384810092) method of this class returns a stream, related to binary font data.
Property [*Offset*](https://apireference.aspose.com/font/cpp/class/aspose.font.sources.stream_source#a29fdcc3c902d73b12cb6f312a02ec6be) points on the position at this stream, from where we must start to read data.
2. Two most used classes inherited from the base [*StreamSource*](https://apireference.aspose.com/font/cpp/class/aspose.font.sources.stream_source):
   - [*FileSystemStreamSource*](https://apireference.aspose.com/font/cpp/class/aspose.font.sources.file_system_stream_source) - designed to provide access to the stream, based on the file system. 
	Property [*FileName*](https://apireference.aspose.com/font/cpp/class/aspose.font.sources.file_system_stream_source#a4d0f6710eba97a918b1039591903e3a6) returns the name of the font file. [*GetFontStream*()](https://apireference.aspose.com/font/cpp/class/aspose.font.sources.file_system_stream_source#a3a6eb10d25467f2c68c94a962e96f0e7) method returns a byte stream, related to this file.
   - [*ByteContentStreamSource*](https://apireference.aspose.com/font/cpp/class/aspose.font.sources.byte_content_stream_source) - provides access to the stream, based on the byte array.

## How to initiate classes? ##

Here are examples of the initiation of these classes.

1. Let’s assume that the font is in the file named Lora.ttf. In this case, to get access to the byte stream of this font we need to create the object of type [*FileSystemStreamSource*](https://apireference.aspose.com/font/cpp/class/aspose.font.sources.file_system_stream_source) using this single constructor:

```C++
    System::SharedPtr<FileSystemStreamSource> fontSource = System::MakeObject<FileSystemStreamSource>("Lora.ttf");
```

2. If the font binary data is located in a binary array defined by the byte [] fontArray variable, then an object of type [*ByteContentStreamSource*](https://apireference.aspose.com/font/cpp/class/aspose.font.sources.byte_content_stream_source) will provide an access to the font data stream, based on the fontArray variable.
To get access to the font byte stream, we have to create an object of type [*ByteContentStreamSource*](https://apireference.aspose.com/font/cpp/class/aspose.font.sources.byte_content_stream_source) to get access to the stream, related to the font byte array using code like this:

```C++
    System::SharedPtr<ByteContentStreamSource> fontSource = System::MakeObject<ByteContentStreamSource>(fontArray);
```

So, to provide access to font binary data, use objects inherited from the base [*StreamSource*](https://apireference.aspose.com/font/cpp/class/aspose.font.sources.stream_source) class. Further, we will call such objects **font stream sources**.

## FontFileDefinition object ##

Most fronts are located in regular files but at the same time, part of fonts may have different data sources. To join into one object terms **file** and **font binary stream**, [*Aspose.Font*](https://apireference.aspose.com/font/cpp/namespace/aspose.font) library provides special object [*FontFileDefinition*](https://apireference.aspose.com/font/cpp/class/aspose.font.sources.font_file_definition). 

This object has such properties:
- [*FileName*](https://apireference.aspose.com/font/cpp/class/aspose.font.sources.font_file_definition#a3557a1e82a4d5107b2cf2557fb1d9b8e) - name of font file.
- [*FileExtension*](https://apireference.aspose.com/font/cpp/class/aspose.font.sources.font_file_definition#a8e3342459894f1271bc5bbc8f8d1021a) - extension of a font file.
- [*StreamSource*](https://apireference.aspose.com/font/cpp/class/aspose.font.sources.font_file_definition#a36b290738e85cab1558d06d87e0c8d80) - font stream source.
- [*Offset*](https://apireference.aspose.com/font/cpp/class/aspose.font.sources.font_file_definition#a19e209a3d8966e7d1866b9a7cef6b027) - offset inside the font byte stream.

The simplest and one of the most used constructors of this object is the constructor with the following signature: [*FontFileDefinition*](https://apireference.aspose.com/font/cpp/class/aspose.font.sources.font_file_definition#a23c4a23f63020e4c8444dd39c6bded9f) (System::SharedPtr<System::IO::FileInfo> fontFile), use this constructor for cases when the desired font is in a file on the hard drive. 

Here is an example of initiating such an object for font `Montserrat` which is located in the file C:\Windows\Fonts\Montserrat.ttf:

```C++
    System::SharedPtr<FontFileDefinition> fileDef = System::MakeObject<FontFileDefinition>(System::MakeObject<System::IO::FileInfo>(u"C:\\Windows\\Fonts\\Montserrat.ttf"));
```

Also, [*FontFileDefinition*](https://apireference.aspose.com/font/cpp/class/aspose.font.sources.font_file_definition) can reference `Montserrat` font using the following constructors:

```C++
    System::SharedPtr<FontFileDefinition> fileDef = System::MakeObject<FontFileDefinition>(System::MakeObject<FileSystemStreamSource>(u"C:\\Windows\\Fonts\\Montserrat.ttf"));

    System::SharedPtr<FontFileDefinition> fileDef = System::MakeObject<FontFileDefinition>(u"ttf", System::MakeObject<FileSystemStreamSource>(u"C:\\Windows\\Fonts\\Montserrat.ttf"));
```

Parameter [*fileExtension*](https://apireference.aspose.com/font/cpp/class/aspose.font.sources.font_file_definition#a8e3342459894f1271bc5bbc8f8d1021a) should match the standard, for the font format, extension. For example, if the font format is `TrueType`, then the value of the [*fileExtension*](https://apireference.aspose.com/font/cpp/class/aspose.font.sources.font_file_definition#a8e3342459894f1271bc5bbc8f8d1021a) parameter may be `ttf` or `ttc` (if the font file is a collection of `TrueType` fonts). 
If the font format is `Embedded Open Type`, then the value of [*fileExtension*](https://apireference.aspose.com/font/cpp/class/aspose.font.sources.font_file_definition#a8e3342459894f1271bc5bbc8f8d1021a) parameter should be `eot`.

The table below shows the most often used in Aspose.Font for C++ font file formats. There they are with the matching values that the [*fileExtension*](https://apireference.aspose.com/font/cpp/class/aspose.font.sources.font_file_definition#a8e3342459894f1271bc5bbc8f8d1021a) parameter should take.

|**Font file Format**|**fileExtension**|
| :- | :- |
|`TrueType`, single font|`ttf`|
|`TrueType` font collection|`ttc`|
|`Web Open Font Format`|`woff`|
| `Web Open Font Format version 2.0`|`woff2`|
| `Embedded OpenType`|`eot`|
|Adobe `Type 1` font|`pfa`, `pfb`, `afm`, `pfm`|
|`Compact Font Format`|`cff`, can be null|

If font data starts not from the position 0 of the byte stream, use the following constructor with the [*offset*](https://apireference.aspose.com/font/cpp/class/aspose.font.sources.font_file_definition#a19e209a3d8966e7d1866b9a7cef6b027) parameter:

```C++
    FontFileDefinition(System::String fileExtension, System::SharedPtr<Aspose::Font::Sources::StreamSource> streamSource, int64_t offset).
```
## How to initiate FontDefinition object? ##

Now, when you’ve got an idea of the objects inherited from the [*StreamSource*](https://apireference.aspose.com/font/cpp/class/aspose.font.sources.stream_source) class and providing access to the font byte stream, and of the [*FontFileDefinition*](https://apireference.aspose.com/font/cpp/class/aspose.font.sources.font_file_definition) object, we will explain to you how to initiate [*FontDefiniton*](https://apireference.aspose.com/font/cpp/class/aspose.font.sources.font_definition) object with these objects properly for different situations.

[*FontDefiniton*](https://apireference.aspose.com/font/cpp/class/aspose.font.sources.font_definition) object provides you with many overloaded constructors.
The common feature of all existing constructors is the [*FontType*](https://apireference.aspose.com/font/cpp/namespace/aspose.font#af7d5912b11b4a035acb454f48888122f) parameter. It describes the type of font format.
As it was mentioned before, apart from the [*FontType*](https://apireference.aspose.com/font/cpp/namespace/aspose.font#af7d5912b11b4a035acb454f48888122f) value, object [*FontDefiniton*](https://apireference.aspose.com/font/cpp/class/aspose.font.sources.font_definition) should be initialized with reference to the font binary data. 


Next parameters of [*FontDefiniton*](https://apireference.aspose.com/font/cpp/class/aspose.font.sources.font_definition) constructors can be used in this case:
- [*fontName*]https://apireference.aspose.com/font/cpp/class/aspose.font.sources.font_definition#a0215ad7c9ba3a9483a7a3271a2f068a1);
- [*fileExtension*](https://apireference.aspose.com/font/cpp/class/aspose.font.sources.font_definition#a55746ecb0dc3fa520b5b07604f01884b);
- object of the [*StreamSource*](https://apireference.aspose.com/font/cpp/class/aspose.font.sources.stream_source) type;
- object of the [*FontFileDefinition*](https://apireference.aspose.com/font/cpp/class/aspose.font.sources.font_file_definition) type.

You may have a question. Why would we pass the parameter [*fileExtension*](https://apireference.aspose.com/font/cpp/class/aspose.font.sources.font_file_definition#a8e3342459894f1271bc5bbc8f8d1021a) to the [*FontDefiniton*](https://apireference.aspose.com/font/cpp/class/aspose.font.sources.font_definition) or the [*FontFileDefinition*](https://apireference.aspose.com/font/cpp/class/aspose.font.sources.font_file_definition) object, when we always pass the parameter [*FontType*](https://apireference.aspose.com/font/cpp/namespace/aspose.font#af7d5912b11b4a035acb454f48888122f) which seems to coincide by its value with [*fileExtension*](https://apireference.aspose.com/font/cpp/class/aspose.font.sources.font_file_definition#a8e3342459894f1271bc5bbc8f8d1021a)?
The problem is that [*FontType*](https://apireference.aspose.com/font/cpp/namespace/aspose.font#af7d5912b11b4a035acb454f48888122f) does not always coincide with the value of [*fileExtension*](https://apireference.aspose.com/font/cpp/class/aspose.font.sources.font_file_definition#a8e3342459894f1271bc5bbc8f8d1021a). [*FontType*](https://apireference.aspose.com/font/cpp/namespace/aspose.font#af7d5912b11b4a035acb454f48888122f) defines the common font format but not the font format of a specific file. Some fonts of one format can have different file formats.
For example, the value FontType.TTF defines `TrueType` format. But at the same time `TrueType` includes a few font formats and there are font files with extensions `ttf`, `eot`, `ttc`, etc. in there. And if, for example, for the font of `EOT` format we pass to [*FontDefiniton*](https://apireference.aspose.com/font/cpp/class/aspose.font.sources.font_definition) only FontType.TTF value, then how will this object understand that the font belongs to `EOT` format and not to `TTF`?
In the same way, the value of FontType.Type1 is the common definition for fonts of this format. At the same time, `Type1` format font files have extensions `.pfa`, `.pfb`, `.afm`, `.pfm`. So you cannot define font file format properly relying only on the FonType.Type1 value. Hence, to define font format correctly we need to specify the parameter [*FontType*](https://apireference.aspose.com/font/cpp/namespace/aspose.font#af7d5912b11b4a035acb454f48888122f) with the value of the [*fileExtension*](https://apireference.aspose.com/font/cpp/class/aspose.font.sources.font_file_definition#a8e3342459894f1271bc5bbc8f8d1021a) parameter.

Below you can learn examples of [*FontDefiniton*](https://apireference.aspose.com/font/cpp/class/aspose.font.sources.font_definition) object initialization and following font loading for different cases. 

In all the cases the final font loading result is put into the variable of [*Aspose.Font.Font*](https://apireference.aspose.com/font/cpp/class/aspose.font.font) type. This type is the basic font class of [*Aspose.Font*](https://apireference.aspose.com/font/cpp/namespace/aspose.font) library and objects of this type provide common base functionality to work with fonts. 
Loading the font into this object you will be able to render text with this font, get coding information, font metrics, etc.

## Examples of how to load fonts ##

Let's have as an example, loading font `Montserrat` from the file C:\Windows\Fonts\Montserrat.ttf

Add the next namespaces at the head of the file:

```C++
using Aspose::Font;
using Aspose::Font::Sources;
using System::IO;
```

You can load this font using [*FontDefiniton*](https://apireference.aspose.com/font/cpp/class/aspose.font.sources.font_definition) and [*FontFileDefinition*](https://apireference.aspose.com/font/cpp/class/aspose.font.sources.font_file_definition) objects in a few different ways:

### Loading with the help of System::IO::FileInfo object ###

  To fulfil loading do the next:
1. Construct path to the file.
2. Initiate [*FontDefiniton*](https://apireference.aspose.com/font/cpp/class/aspose.font.sources.font_definition) object passing `TTF` as [*FontType*](https://apireference.aspose.com/font/cpp/namespace/aspose.font#af7d5912b11b4a035acb454f48888122f) value.
3. Get automatically calculated value [*fileExtension*](https://apireference.aspose.com/font/cpp/class/aspose.font.sources.font_file_definition#a8e3342459894f1271bc5bbc8f8d1021a).
4. Load the font.
```C++
    // Construct path to the file
    System::String fontPath = u"C:\\Windows\\Fonts\\Montserrat.ttf";

    // Initialize FontDefinition object passing TTF as FontType value and using FontFileDefinition
    System::SharedPtr<FontFileDefinition> fileDef = System::MakeObject<FontFileDefinition>(System::MakeObject<System::IO::FileInfo>(fontPath));

    // Based on FileInfo object, fileExtension value is calculated automatically from FileInfo fields.
    System::SharedPtr<FontDefinition> fontDef = System::MakeObject<FontDefinition>(Aspose::Font::FontType::TTF, fileDef);
	
    // Load font
    System::SharedPtr<Font> font = Font::Open(fontDef);
```

### Loading with the help of FileSystemStreamSource type object ###

Take the next steps to fulfil the operation:
1. Construct path to the file.
2. Initiate [*FontDefiniton*](https://apireference.aspose.com/font/cpp/class/aspose.font.sources.font_definition) object.
3. Set [*fileExtension*](https://apireference.aspose.com/font/cpp/class/aspose.font.sources.font_file_definition#a8e3342459894f1271bc5bbc8f8d1021a) to `ttf`.
4. Load the font.
```C++
    // Construct path to the file
    System::String fontPath = u"C:\\Windows\\Fonts\\Montserrat.ttf";

    // Initialize FontDefinition object passing TTF as FontType value and using FontFileDefinition
    System::SharedPtr<FontFileDefinition> fileDef = System::MakeObject<FontFileDefinition>(u"ttf", System::MakeObject<FileSystemStreamSource>(fontPath));

    // Based on FileSystemStreamSource object, set fileExtension to "ttf"
    System::SharedPtr<FontDefinition> fontDef = System::MakeObject<FontDefinition>(Aspose::Font::FontType::TTF, fileDef);
		
    // Load font   
    System::SharedPtr<Font> font = Font::Open(fontDef);
```

### Font loading without FontFileDefinition object, with passing FileSystemStreamSource directly to FontDefinition ###

The next actions have to be taken for loading the font this way:
1. Construct path to the file.
2. Initiate [*FontDefiniton*](https://apireference.aspose.com/font/cpp/class/aspose.font.sources.font_definition) object passing `TTF` as [*FontType*](https://apireference.aspose.com/font/cpp/namespace/aspose.font#af7d5912b11b4a035acb454f48888122f) value, `ttf` as [*fileExtension*](https://apireference.aspose.com/font/cpp/class/aspose.font.sources.font_file_definition#a8e3342459894f1271bc5bbc8f8d1021a) value and [*FileSystemStreamSource*](https://apireference.aspose.com/font/cpp/class/aspose.font.sources.file_system_stream_source) object. Parameter [*fileExtension*](https://apireference.aspose.com/font/cpp/class/aspose.font.sources.font_file_definition#a8e3342459894f1271bc5bbc8f8d1021a) here is not a duplicate value for parameter [*FontType*](https://apireference.aspose.com/font/cpp/namespace/aspose.font#af7d5912b11b4a035acb454f48888122f).
3. Load the font.
```C++
    // Construct path to the file
    System::String fontPath = u"C:\\Windows\\Fonts\\Montserrat.ttf";

    // Initialize FontDefinition object passing TTF as FontType value, "ttf" as fileExtension value, 
    // and FileSystemStreamSource object. Parameter 'fileExtension' here is not duplicate value 
    // for parameter 'FontType' and it's needed for correct font format detection
    System::SharedPtr<FontDefinition> fontDef = System::MakeObject<FontDefinition>(Aspose::Font::FontType::TTF, u"ttf", System::MakeObject<FileSystemStreamSource>(fontPath));

    // Load font	
    System::SharedPtr<Font> font = Font::Open(fontDef);
```

### Font loading with the byte[] type variable and with using ByteContentStreamSource type object ###

To load a font from the byte array you need to:
1. Construct path to the file.
2. Load font binary data into the byte array
3. Initialize [*FontDefiniton*](https://apireference.aspose.com/font/cpp/class/aspose.font.sources.font_definition) object  passing `TTF` as [*FontType*](https://apireference.aspose.com/font/cpp/namespace/aspose.font#af7d5912b11b4a035acb454f48888122f) value, `ttf` as [*fileExtension*](https://apireference.aspose.com/font/cpp/class/aspose.font.sources.font_file_definition#a8e3342459894f1271bc5bbc8f8d1021a) value, and [*ByteContentStreamSource*](https://apireference.aspose.com/font/cpp/class/aspose.font.sources.byte_content_stream_source) object based on fontBytes array.
4. Load the font.
```C++
    // Construct path to the file
    System::String fontPath = u"C:\\Windows\\Fonts\\Montserrat.ttf";

    // Load font binary data into byte array
    System::ArrayPtr<uint8_t> fontBytes;

    // Initialize FontDefinition object  passing TTF as FontType value, "ttf" as fileExtension value, 
    // and ByteContentStreamSource object based on fontBytes array
    System::SharedPtr<FontDefinition> fontDef = System::MakeObject<FontDefinition>(Aspose::Font::FontType::TTF, u"ttf", System::MakeObject<ByteContentStreamSource>(fontBytes));
	
    // Load font	
    System::SharedPtr<Font> font = Font::Open(fontDef);
```

{{% alert color="primary" %}}
For getting more examples of using the Aspose.Font go to [*Aspose.Font.Examples.CPP.sln solution*](https://github.com/aspose-font/Aspose.Font-for-C/tree/master/Examples)

If you have any problems or questions left, you may post them at the [*Aspose.Font.Product Family*](https://forum.aspose.com/c/font/41) section of the [*Free Support Forum*](https://forum.aspose.com/) and within a few hours our support team will clear everything up for you.
{{% /alert %}}