---
title: How to load fonts? | .NET
linktitle: How to load fonts?
type: docs
weight: 10
url: /net/developer-guide/how-to-load-font
keywords: download a font, extract a font.
description: Here is described documentation on how to load fonts from different sources. You will learn the objects, parameters, methods required for this, and get examples of loading.
---

## Overview ##

Any font is physically an array of bytes in which data is represented in some format.
Therefore, for correct font loading you need to know two key parameters:
- Font format. Fonts can have different formats like TrueType, Type1, etc.
- Storage, where the binary data that represents the font is being held. Each font is represented as binary data but the way this data stores may differ. In most cases, the font is being stored as a file on a hard drive. But sometimes font binary data can be placed in a different file which is not a font itself. For example, files created by Microsoft Word or Adobe Acrobat. These are files with extensions .docx, .pdf. They can include different fonts.	

## Objects and parameters required for font loading ##

Aspose.Font for .NET gives object FontDefiniton for notifying two key parameters demanded for font loading.
After creating and initiating FontDefinition object you only need to call static method Aspose.Font.Font. Open and pass just initialized object FontDefinition as a parameter to load the desired font and get a reference on it.


Let’s describe it with the pseudocode:
{{< highlight csharp >}} 
    FontDefinition fontDef = new FontDefinition() //Initialize object FontDefinition with appropriate properties
    Font desiredFont = Aspose.Font.Font.Open(fontDef);
{{< /highlight >}}

The final result of the font loading is getting an object of Aspose.Font.Font type.
Class Aspose.Font.Font is a base font class of Aspose.Font for the .NET library. It represents the main functionality of working with fonts.

Getting loaded a font into Aspose.Font.Font type object you will be able to render text with this font, get encoding data, and font metrics. You will also be able to modify or save this font and many more.

To initiate the FontDefinition object we need, as was mentioned before, to give it 2 font parameters, - the format type, and the object that describes the storage for font binary data.
The first parameter is notified with FontType enumeration.

To simplify work with the second parameter, Aspose.Font offers a series of objects that gives universal access to the font binary data independently from where the font is placed.

This universal access is linked with such a thing as a byte stream. 
So, independently from where the font is placed - into a file on a disk, inside another file, byte array in memory - in any case, special Aspose.Font objects will provide an access to the byte stream, related to the desired font. 

Let's describe these objects:
1. StreamSource Class.
This abstract base class defines the properties and methods that give access to the font byte stream. 
GetFontStream Method of this class returns a stream, related to binary font data.
Property Offset points on the position at this stream, from where we must start to read data.
2. Two most used Classes inherited from the base StreamSource:
   - FileSystemStreamSource - designed to provide access to the stream, based on the file system. 
	Property FileName returns the name of the font file. GetFontStream returns a byte stream, related to this file.
   - ByteContentStreamSource - provides access to the stream, based on the byte array.

## How to initiate classes? ##

Here are examples of the initiation of these classes.

1. Let’s assume that the font is in the file named Arial.ttf. In this case, to get access to the byte stream of this font we need to create the object of type FileSystemStreamSource using this single constructor:

{{< highlight csharp >}} 
    FileSystemStreamSource fontSource = new FileSystemStreamSource("Arial.ttf");
{{< /highlight >}}

2. If the font binary data is located in a binary array defined by the byte [] fontArray variable.
In this case, an object of type ByteContentStreamSource will provide an access to the font data stream, based on the fontArray variable.
To get access to the font byte stream, we have to create an object of type ByteContentStreamSource to get access to the stream, related to the font byte array using code like this:

{{< highlight csharp >}} 
    ByteContentStreamSource fontSource = new ByteContentStreamSource(fontArray);
{{< /highlight >}}

So, to provide an access to font binary data, use objects inherited from the base StreamSource class. Further, we will call such objects "font stream sources".

## FontFileDefinition object ##

Most fronts are located in regular files but at the same time part of fonts may have different data sources. To join into one object terms “file” and “font binary stream” Aspose.Font library provides special object FontFileDefinition. 

This object has such properties:
- FileName - name of font file.
- FileExtension - extension of a font file.
- StreamSource - font stream source.
- Offset - offset inside the font byte stream.

The simplest and one of the most used constructors of this object is the constructor with the following signature: FontFileDefinition(FileInfo fontFile), use this constructor for cases when the desired font is in a file on the hard drive. 

Here is an example of initiating such an object for font “Times New Roman” which is located in the file C:\Windows\Fonts\times.ttf:

{{< highlight csharp >}} 
    FontFileDefinition fileDef = new FontFileDefinition(new FileInfo(@"C:\Windows\Fonts\times.ttf"));
{{< /highlight >}}

Also, FontFileDefinition can reference "Times New Roman" font using the following constructors:

{{< highlight csharp >}} 
    FontFileDefinition fileDef = new FontFileDefinition(new FileSystemStreamSource(@"C:\Windows\Fonts\times.ttf"));

    FontFileDefinition fileDef = new FontFileDefinition("ttf", new FileSystemStreamSource(@"C:\Windows\Fonts\times.ttf"));
{{< /highlight >}}

Parameter ‘fileExtension’ should match the standard, for the font format, extension. For example, if the font format is TrueType, then the value of the ‘fileExtetsion’ parameter may be “ttf” or “ttc” (if the font file is a collection of TrueTypes fonts). 
If the font format is Embedded Open Type, then the value of ‘fileExtension’ parameter should be “eot”.

The table below shows the most often used in Aspose.Font for .NET font file formats. There they are with the matching values that the ‘fileExtension’ parameter should take.

|**Font file Format**|**‘fileExtension’**|
| :- | :- |
|TrueType, single font|ttf|
|TrueType font collection|ttc|
|Web Open Font Format|woff|
| Web Open Font Format version 2.0|woff2|
| Embedded OpenType|eot|
|Adobe Type 1 font|pfa, pfb, afm, pfm|
|Compact Font Format|cff, can be null|

If font data starts not from the position 0 of the byte stream, use the following constructor with the 'offset' parameter:

{{< highlight csharp >}} 
    FontFileDefinition(string fileExtension, StreamSource streamSource, long offset).
{{< /highlight >}}

## How to initiate FontDefinition object? ##

Now, when you’ve got an idea of the objects inherited from the StreamSource class and providing access to the font byte stream, and of the FontFileDefinition object, we will explain to you how to initiate FontDefinition object with these objects properly for different situations.

FontDefinition object provides you with many overloaded constructors.
The common feature of all existing constructors is the FontType parameter. It describes the type of font format.
As it was mentioned before, apart from the FontType value, object FontDefinition should be initialized with reference to the font binary data. 


Next parameters of FontDefinition constructors can be used in this case:
- fontName;
- "fileExtension";
- object of the StreamSource type;
- object of the FontFileDefinition type.

You may have a question. Why would we pass the parameter ‘fileExtension’ to the FontDefinition or the FontFileDefinition object when we always pass the parameter FontType which seems to coincide by its value with ‘fileExtension’?
The problem is that FontType does not always coincide with the value of ‘fileExtension’. FontType defines the common font format but not the font format of a specific file. Some fonts of one format can have different file formats.
For example, the value FontType.TTF defines TrueType format. But at the same time TrueType includes a few font formats and there are font files with extensions “ttf”, “eot”, “ttc”, etc. in there. And if, for example, for the font of EOT format we pass to FontDefinition only FontType.TTF value, then how will this object understand that the font belongs to EOT format and not to TTF?
In the same way, the value of FontType.Type1 is the common definition for fonts of this format. At the same time, Type1 format font files have extensions “.pfa”, “.pfb”, “.afm”, “.pfm”. So you cannot define font file format properly relying only on the FonType.Type1 value. So to define font format correctly we need to specify the parameter FontType with the value of the fileExtension parameter.

Below you can learn examples of FontDefinition object initialization and following font loading for different cases. 

In all the cases the final font loading result is put into a variable of Aspose.Font.Font type. This type is the basic font class of Aspose.Font library and objects of this type provide common base functionality to work with fonts. 
Loading the font into this object you will be able to render text with this font, get coding information, font metrics, etc.

## Examples of font loading ##

Let's have as an example of loading font “Times New Roman” placed in the file C:\Windows\Fonts\times.ttf

Add the next namespaces at the head of the file:

{{< highlight csharp >}}
    using System;
    using Aspose.Font.Sources;
    using System.IO;
{{< /highlight >}}


You can load this font using FontDefinition and FontFiledefinition objects in a few different ways:

### Loading with the help of System.IO.FileInfo object ###

  To fulfil loading do the next:
1. Notify font storage.
2. Initiate FontDefinition object passing TTF as FontType value.
3. Get automatically calculated value fileExtention.
4. Load the font.
{{< highlight csharp >}}
     // Notify font storage
     string fontPath = "C:\Windows\Fonts\times.ttf";

     //Initialize FontDefinition object passing TTF as FontType value and using FontFileDefinition
     FontFileDefinition fileDef = new FontFileDefinition(new FileInfo(fontPath));

     //Based on FileInfo object, fileExtension value is calculated automatically from FileInfo fields.
     FontDefinition fontDef = new FontDefinition(FontType.TTF, fileDef);
	
     //Load font
     Font font = Font.Open(fontDef);
{{< /highlight >}}

### Loading with the help of FileSystemStreamSource type object ###

Take the next steps to fulfil the operation:
1. Notify font storage.
2. Initiate FontDefinition object.
3. Set fileExtention to “ttf”.
4. Load the font.
{{< highlight csharp >}}
     // Notify font storage
     string fontPath = "C:\Windows\Fonts\times.ttf";

     //Initialize FontDefinition object passing TTF as FontType value and using FontFileDefinition
	 FontFileDefinition fileDef = new FontFileDefinition("ttf", new FileSystemStreamSource(fontPath));

     //Based on FileSystemStreamSource object, set fileExtension to "ttf"
     FontDefinition fontDef = new FontDefinition(FontType.TTF, fileDef);
		
     //Load font   
     Font font = Font.Open(fontDef);
{{< /highlight >}}

### Font loading without FontFileDefinition object, with passing FileSystemStreamSource directly to FontDefinition ###

The next actions have to be taken for loading the font this way:
1. Notify font storage.
2. Initiate FontDefinition object passing TTF as FontType value, “ttf” as fileExtension value and FileSystemStreamSource object. Parameter 'fileExtension' here is not a duplicate value for parameter 'FontType'.
3. Load the font.
{{< highlight csharp >}}
     // Notify font storage
     string fontPath = "C:\Windows\Fonts\times.ttf";

     //Initialize FontDefinition object passing TTF as FontType value, "ttf" as fileExtension value, 
     //and FileSystemStreamSource object. Parameter 'fileExtension' here is not duplicate value 
     //for parameter 'FontType' and it's needed for correct font format detection
     FontDefinition fontDef = new FontDefinition(FontType.TTF, "ttf", new FileSystemStreamSource(fontPath));

     //Load font	
     Font font = Font.Open(fontDef);
{{< /highlight >}}

### Font loading with the byte[] type variable and with using ByteContentStreamSource type object ###

To load a font from the byte array you need to:
1. Notify font storage.
2. Load font binary data into the byte array
3. Initialize FontDefinition object  passing TTF as FontType value, "ttf" as fileExtension value, and ByteContentStreamSource object based on fontBytes array.
4. Load the font.
{{< highlight csharp >}}
     // Notify font storage
     string fontPath = "C:\Windows\Fonts\times.ttf";

     //Load font binary data into byte array
     byte[] fontBytes;

     //Initialize FontDefinition object  passing TTF as FontType value, "ttf" as fileExtension value, 
     //and ByteContentStreamSource object based on fontBytes array
     FontDefinition fontDef = new FontDefinition(FontType.TTF, "ttf", new ByteContentStreamSource(fontBytes));
	
     //Load font	
     Font font = Font.Open(fontDef);
{{< /highlight >}}

{{% alert color="primary" %}}
For getting more examples of using the Aspose. Font go to [*Aspose.Font.Examples.sln solution*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/net-examples), in the [*net-examples*](https://github.com/aspose-font/Aspose.Font-Documentation/tree/master/net-examples) of the [*Aspose.Font Documentation*](https://github.com/aspose-font/Aspose.Font-Documentation)/

If you have any problems or questions left, you may post them at the [*Aspose.Font.Product Family*] (https://forum.aspose.com/c/font/41) section of the [*Free Support Forum*](https://forum.aspose.com/) and within a few hours our support team will clear everything up for you.
{{% /alert %}}