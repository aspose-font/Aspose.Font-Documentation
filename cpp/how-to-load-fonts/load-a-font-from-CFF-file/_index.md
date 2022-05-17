---
title: Load a font from CFF file | C++
linktitle: Load a font from CFF file
type: docs
weight: 20
url: /cpp/how-to-load-fonts/load-a-font-from-CFF-file
keywords: load font, download font, extract font from cff file.
description: With this API solution you can load a font from a file on your hard drive even if this file is not a font inself. Let’s look at how to make it from a CFF file.
---

On this page we will have a look at examples of loading font `CenturyGothic` placed in the file CenturyGothic.cff.
____
If you did not read the Aspose.Font loading fundamentals, go to 
 [*How to load fonts?*](https://docs.aspose.com//font/cpp/how-to-load-fonts) page.

First you need to notify the next namespaces at the head of the file:

```C++
using namespace Aspose::Font;
using namespace Aspose::Font::Sources;
using namespace System.IO;
```

## Loading from the file using FileInfo object ##

Follow the algorithm to fulfill the font loading:
1. Construct path to the file.
2. Initiate [*FontDefiniton*](https://apireference.aspose.com/font/cpp/class/aspose.font.sources.font_definition) object passing `CFF` as [*FontType*](https://apireference.aspose.com/font/cpp/namespace/aspose.font#af7d5912b11b4a035acb454f48888122f) value.
3. Get automatically calculated value [*FileExtension*](https://apireference.aspose.com/font/cpp/class/aspose.font.sources.font_file_definition#a8e3342459894f1271bc5bbc8f8d1021a).
4. Load the font.

```C++
    // Construct path to the file.
    System::String fontPath = System::IO::Path::Combine(get_DataDir(), u"CenturyGothic.cff");

    // Initialize FontDefinition object passing CFF as FontType value and using FontFileDefinition
    // based on FileInfo object, fileExtension value is calculated automatically from FileInfo fields.
    System::SharedPtr<FontFileDefinition> fileDef = System::MakeObject<FontFileDefinition>(System::MakeObject<System::IO::FileInfo>(fontPath));
    System::SharedPtr<FontDefinition> fontDef = System::MakeObject<FontDefinition>(Aspose::Font::FontType::CFF, fileDef);

    // Load the font 
    System::SharedPtr<Aspose::Font::Font> font = Aspose::Font::Font::Open(fontDef);
```

## Font loading with the byte[] type variable and with using ByteContentStreamSource type object ##

To load font this way, you need to take the following steps:
1. Construct path to the file.
2. Initialize [*FontDefiniton*](https://apireference.aspose.com/font/cpp/class/aspose.font.sources.font_definition) object  passing `CFF` as [*FontType*](https://apireference.aspose.com/font/cpp/namespace/aspose.font#af7d5912b11b4a035acb454f48888122f) value, `cff` as [*FileExtension*](https://apireference.aspose.com/font/cpp/class/aspose.font.sources.font_file_definition#a8e3342459894f1271bc5bbc8f8d1021a) value, and  [*ByteContentStreamSource*](https://apireference.aspose.com/font/cpp/class/aspose.font.sources.byte_content_stream_source) object based on fontBytes array.
3. Load the font.

```C++
    // Construct path to the file
    System::String fontPath = System::IO::Path::Combine(get_DataDir(), u"CenturyGothic.cff");

    // Load font binary data into byte array
    System::ArrayPtr<uint8_t> fontBytes = System::IO::File::ReadAllBytes(fontPath);
    
    // Initialize FontDefinition object  passing CFF as FontType value, "cff" as fileExtension value, 
    // and ByteContentStreamSource object based on fontBytes array
    System::SharedPtr<FontDefinition> fontDef = System::MakeObject<FontDefinition>(Aspose::Font::FontType::CFF, u"ttf", System::MakeObject<ByteContentStreamSource>(fontBytes));
    
    // Load font and print results
    System::SharedPtr<Aspose::Font::Font> font = Aspose::Font::Font::Open(fontDef);
    ```

{{% alert color="primary" %}}
More examples on how to use Aspose.Font are in [*Aspose.Font.Examples.CPP.sln solution*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/cpp-examples), in the [*cpp-examples*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/cpp-examples) of the [*Aspose.Font Documentation*](https://github.com/aspose-font/Aspose.Font-Documentation).
{{% /alert %}}