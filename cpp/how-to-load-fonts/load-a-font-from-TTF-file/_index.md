---
title: Load a font from TTF file | C++
linktitle: Load a font from TTF file
type: docs
weight: 10
url: /cpp/how-to-load-fonts/load-a-font-from-TTF-file
keywords: load font, download font, extract font from cff file.
description: With this API solution you can load a font from a file on your hard drive even if this file is not a font inself. Let’s look at how to make it from a TTF file.
---
Here are described four differently fulfilled examples on how to load a font from the file Montserrat-Regular.ttf. 
___

First learn the loading fundamentals at the [*How to load fonts?*](https://docs.aspose.com/font/cpp/how-to-load-fonts/) page.

Add the next namespaces at the head of the file:

```C++
using namespace Aspose::Font;
using namespace Aspose::Font::Sources;
using namespace System.IO;
```

## Loading from the file using FileSystemStreamSource object ##

Take the next steps to fulfil the operation:
1. Construct path to the file.
2. Initiate [*FontDefiniton*](https://apireference.aspose.com/font/cpp/class/aspose.font.sources.font_definition) object.
3. Set [*fileExtension*](https://apireference.aspose.com/font/cpp/class/aspose.font.sources.font_file_definition#a8e3342459894f1271bc5bbc8f8d1021a) to `ttf`.
4. Load the font.

```C++
    // Construct path to the file
    System::String fontPath = System::IO::Path::Combine(get_DataDir(), u"Montserrat-Regular.ttf");

    // Initialize FontDefinition object passing TTF as FontType value and using FontFileDefinition
    FontFileDefinition fileDef = new FontFileDefinition("ttf", new FileSystemStreamSource(fontPath));
    System::SharedPtr<FontFileDefinition> fileDef = System::MakeObject<FontFileDefinition>(System::MakeObject<FileInfo>(fontPath));

    // Based on FileSystemStreamSource object, set fileExtension to "ttf"
    System::SharedPtr<FontFileDefinition> fileDef = System::MakeObject<FontFileDefinition>(u"ttf", System::MakeObject<FileSystemStreamSource>(fontPath));
    System::SharedPtr<FontDefinition> fontDef = System::MakeObject<FontDefinition>(Aspose::Font::FontType::TTF, fileDef);
```

## Loading from the file using FileInfo object ##

To fulfil loading do the next:
1. Construct path to the file.
2. Initiate [*FontDefiniton*](https://apireference.aspose.com/font/cpp/class/aspose.font.sources.font_definition) object passing `TTF` as [*FontType*](https://apireference.aspose.com/font/cpp/namespace/aspose.font#af7d5912b11b4a035acb454f48888122f) value.
3. Get automatically calculated value [*fileExtension*](https://apireference.aspose.com/font/cpp/class/aspose.font.sources.font_file_definition#a8e3342459894f1271bc5bbc8f8d1021a).
4. Load the font.

```C++
     // Construct path to the file
    System::String fontPath = System::IO::Path::Combine(get_DataDir(), u"Montserrat-Regular.ttf");

    // Initialize FontDefinition object passing TTF as FontType value and using FontFileDefinition
    // based on FileInfo object, fileExtension value is calculated automatically from FileInfo fields.
    System::SharedPtr<FontFileDefinition> fileDef = System::MakeObject<FontFileDefinition>(System::MakeObject<System::IO::FileInfo>(fontPath));
    System::SharedPtr<FontDefinition> fontDef = System::MakeObject<FontDefinition>(Aspose::Font::FontType::TTF, fileDef);

     // Load the font
    System::SharedPtr<Aspose::Font::Font> font = Aspose::Font::Font::Open(fontDef);
```

## Loading from the file excluding FontFileDefinition object from initialization chain ##

The next actions have to be taken to load the font this way:
1. Construct path to the file.
2. Initiate [*FontDefiniton*](https://apireference.aspose.com/font/cpp/class/aspose.font.sources.font_definition) object passing `TTF` as [*FontType*](https://apireference.aspose.com/font/cpp/namespace/aspose.font#af7d5912b11b4a035acb454f48888122f) value, `ttf` as [*fileExtension*](https://apireference.aspose.com/font/cpp/class/aspose.font.sources.font_file_definition#a8e3342459894f1271bc5bbc8f8d1021a) value and [*FileSystemStreamSource*](https://apireference.aspose.com/font/cpp/class/aspose.font.sources.file_system_stream_source)  object. Parameter [*fileExtension*](https://apireference.aspose.com/font/cpp/class/aspose.font.sources.font_file_definition#a8e3342459894f1271bc5bbc8f8d1021a) here is not a duplicate value for parameter [*FontType*](https://apireference.aspose.com/font/cpp/namespace/aspose.font#af7d5912b11b4a035acb454f48888122f).
3. Load the font.

```C++
     // Construct path to the file
    System::String fontPath = System::IO::Path::Combine(get_DataDir(), u"Montserrat-Regular.ttf");

    // Initialize FontDefinition object passing TTF as FontType value, "ttf" as fileExtension value, 
    // and FileSystemStreamSource object. Parameter 'fileExtension' here is not duplicate value 
    // for parameter 'FontType' and it's needed for correct font format detection
    System::SharedPtr<FontDefinition> fontDef = System::MakeObject<FontDefinition>(Aspose::Font::FontType::TTF, u"ttf", System::MakeObject<FileSystemStreamSource>(fontPath));

     // Load the font
    System::SharedPtr<Aspose::Font::Font> font = Aspose::Font::Font::Open(fontDef);
```

## Loading the font from the byte array ##

To load the font from the byte array:
1. Construct path to the file.
2. Load font binary data into the byte array.
3. Initialize [*FontDefiniton*](https://apireference.aspose.com/font/cpp/class/aspose.font.sources.font_definition) object  passing `TTF` as [*FontType*](https://apireference.aspose.com/font/cpp/namespace/aspose.font#af7d5912b11b4a035acb454f48888122f) value,`ttf` as [*fileExtension*](https://apireference.aspose.com/font/cpp/class/aspose.font.sources.font_file_definition#a8e3342459894f1271bc5bbc8f8d1021a) value, and [*ByteContentStreamSource*](https://apireference.aspose.com/font/cpp/class/aspose.font.sources.byte_content_stream_source) object based on fontBytes array.
4. Load the font.

```C++
     // Construct path to the file
    System::String fontPath = System::IO::Path::Combine(get_DataDir(), u"Montserrat-Regular.ttf");

	// Load font binary data into byte array
    System::ArrayPtr<uint8_t> fontBytes = System::IO::File::ReadAllBytes(fontPath);
    
    // Initialize FontDefinition object  passing TTF as FontType value, "ttf" as fileExtension value, 
    // and ByteContentStreamSource object based on fontBytes array
    System::SharedPtr<FontDefinition> fontDef = System::MakeObject<FontDefinition>(Aspose::Font::FontType::TTF, u"ttf", System::MakeObject<ByteContentStreamSource>(fontBytes));

     // Load the font
    System::SharedPtr<Aspose::Font::Font> font = Aspose::Font::Font::Open(fontDef);
```

{{% alert color="primary" %}}
More examples on how to use Aspose.Font are in [*Aspose.Font.Examples.CPP.sln solution*](https://github.com/aspose-font/Aspose.Font-for-C/tree/master/Examples).
{{% /alert %}}