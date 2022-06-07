---
title: Working with 'name' table | .NET
linktitle: Working with 'name' table
type: docs
weight: 40
url: /net/working-with-name-table/
description: TrueType font table ‘name’ is storage for text strings that describe font metadata like font names, family names, designer names, license information, copyright notices, and others.
keywords: font table name, font metadata api
---

TrueType font table 'name' is storage for text strings related to that font. These strings can be written in different languages and can represent various entities, such as font names, family names, designer names, license info, copyright notices, and so on. 
In short, the lines that are held in the table 'name' describe font metadata.

## Schema of 'name' table.
{{% alert color="primary" %}}
The detailed specification for 'name' table is accessible in 
[*Microsoft*](https://docs.microsoft.com/en-us/typography/opentype/spec/name) and [*Apple*](
https://developer.apple.com/fonts/TrueType-Reference-Manual/RM06/Chap6name.html) documentations.
{{% /alert %}}

There are 2 formats for a 'name' table with numbers 0 and 1 correspondingly. In terms of the 'name' table, these format numbers are named as version, so format 0 is designated as *version 0*, and format 1 - as *version 1*. 

Format 1 differs from format 0 in language identification. Any entry in the 'name' table has a language identifier, which is used to detect the language of that string. And the difference between format 0 and format 1 is in how these language identifiers are interpreted.

Language identifiers for format 0 have platform-specific interpretation, but language identifiers for format 1 are associated with language-tag strings, which identify languages regardless of the platform.

For more accuracy, format 1 allows keeping language identifiers of both types - identifiers with platform-specific interpretation, and identifiers associated with language-tag strings(i.e independent from a platform). 

Aspose.Font library supports format 0 of the 'name' table. Support for format 1 is planned for future releases.
	
Independently from the format that the 'name' table has, any entry in this table is based on a particular component - the structure [*NameRecord*](https://docs.microsoft.com/ru-ru/typography/opentype/spec/name#name-records).

The four main parameters of this structure are : 
- platform identifier(platformID), 
- platform-specific identifier(platformSpecificID), 
- name identifier (nameID), 
- and language identifier (languageID).

Parameters `platformID`, `platformSpecificID`, and `languageID` are used to set the language of the string in a platform-specific manner. Values of the parameters `platformSpecificID`, and `languageID` matter only in the context of the platformID parameter. 

For example, `platformSpecificID` equal 0 defines Roman script for the Mac platform, and at the same time, `platformSpecificID` defines Roman script for the Windows platform. 
In a similar way the value of `languageID` matters only in the context of the used platformID parameter.

For example `languageID` defining English USA equals 0 for platformID = 1(Mac) and 0x0409 for `platformID` = 3(Windows).

The exclusions only are `languageID` for the name table format 1, associated with a language-tag string, which identifies languages regardless of the platform.

Parameter `nameID` is a number, which identifies a logical string category, such as font name, family name, and others. There is a [*predefined set*](https://docs.microsoft.com/ru-ru/typography/opentype/spec/name#name-ids) of name identifiers, which is the same for all platforms and languages.

So, each entry of the table 'name' conditionally can be divided into 3 parts:
1. logical string category, 
2. string language,
3. the string itself.

Parameter `nameID` is related to the first part, parameters `platformID`, `platformSpecificID` and `languageID` are related to the second part.
	
## How to work with 'name' table records using Aspose.Font?

Support for the 'name' table is provided by class [*TtfNameTable*](https://apireference.aspose.com/font/net/aspose.font.ttftables/ttfnametable/#ttfnametable-class). Further, we consider the functionality of this object.
	
First, let's describe the enumerations needed to work with the functionality of *TtfNameTable* class. 
- Enumerations [*NameID*](https://reference.aspose.com/font/net/aspose.font.ttftables/ttfnametable/ttfnametable.nameid) and [*PlatformId*](https://reference.aspose.com/font/net/aspose.font.ttftables/ttfnametable/ttfnametable.platformid) are related to such parameters described above as nameID and platformID. 
- Enumerations [*UnicodePlatformSpecificId*](https://reference.aspose.com/font/net/aspose.font.ttftables/ttfnametable/ttfnametable.unicodeplatformspecificid), [*MacPlatformSpecificId*](https://reference.aspose.com/font/net/aspose.font.ttftables/ttfnametable/ttfnametable.macplatformspecificid), [*MSPlatformSpecificId*](https://reference.aspose.com/font/net/aspose.font.ttftables/ttfnametable/ttfnametable.msplatformspecificid) are related to parameter platformSpecificID. 

As it was mentioned above, "Values of the parameters platformSpecificID, and languageID matter only in the context of the platformID parameter." So, when platformID is 0, and this defines the Unicode platform, use *UnicodePlatformSpecificId* enumeration, when platformID is 1 (Macintosh platform), use *MacPlatformSpecificId* enumeration, and when platformID is 3 (Windows platform), use *MSPlatformSpecificId* enumeration.

	
Enumerations [*MSLanguageId*](https://reference.aspose.com/font/net/aspose.font.ttftables/ttfnametable/ttfnametable.mslanguageid) and [*MacLanguageId*](https://reference.aspose.com/font/net/aspose.font.ttftables/ttfnametable/ttfnametable.maclanguageid) are related to languageID parameter. 
Use *MSLanguageId* enumeration, when platformID is 3 (Windows platform) and use *MacLanguageId* enumeration when platformID is 1 (Macintosh platform). 

Let's now proceed with the matter of getting and refreshing entries from the 'name table.

## How to get records from the 'name' table?

							
Let's start from the method [*GetAllNameRecords()*](https://reference.aspose.com/font/net/aspose.font.ttftables/ttfnametable/getallnamerecords/). This method, as follows from its name, returns all the entries without exclusions of the  'name' table. In practice the method is not often called as users in most cases do not need all the entries, so to get the needed entry the list of entries has to be thoroughly filtered. 

The matter is that even in one logic category, FontFamily for example, the string data of this category can be in different languages. So each language needs a separate entry in the 'name' table for this logic category. Like if the data for the FontFamily category exists in English, French, and German the FontFamily category would include 3 entries.

Furthermore, the language entry can be itself divided into a few entries that coincide by string data values and `languageID` value, but differ by values of `platformID` and `platformSpecificID` parameters. 

To simplify the data sampling from the 'name' table Aspose.Font library offers the next methods:
- [*GetNameRecordsByNameId()*](https://reference.aspose.com/font/net/aspose.font.ttftables/ttfnametable/getnamerecordsbynameid/)- returns the list of entries for the set by the user logic category, defined by the `nameID` parameter. 
- [*GetMultiLanguageNameById()*](https://reference.aspose.com/font/net/aspose.font.ttftables/ttfnametable/getmultilanguagenamebyid/) - returns all the entries, relevant to the passed logic category nameID as an object of [*MultiLanguageString*](https://reference.aspose.com/font/net/aspose.font/multilanguagestring/) type. By means of the object of -  *MultiLanguageString* type, we can find out all the languages of this category and get the string data for the set language.
You can get the list of all the languages by calling the [*GetAllLanguageIds()*](https://reference.aspose.com/font/net/aspose.font/multilanguagestring/getalllanguageids/) method of the *MultiLanguageString* type. After receiving the list of the languages we can call the [*GetStringForLanguageId()*](https://reference.aspose.com/font/net/aspose.font/multilanguagestring/getstringforlanguageid/) method for each languageID. This method returns the data string written in this language.
    
	*MultiLanguageString* Class also offers the next methods:

    - [*ContainsString*](https://reference.aspose.com/font/net/aspose.font/multilanguagestring/containsstring/) (string str)- checks whether a passed string is present inside all the language strings of the object.
    - [*GetEnglishString()*](https://reference.aspose.com/font/net/aspose.font/multilanguagestring/getenglishstring/) - returns a string written in English if found. It returns the first string, languageID of which is MSLanguageId.English_United_States, MSLanguageId.English_Australia,  MSLanguageId.English_United_Kingdom,  MSLanguageId.English_Canada, or MSLanguageId.English_New_Zealand. If there are no strings with the relevant language identifier, the method returns the first string of the list. 
    - [*GetAllStrings()*](https://reference.aspose.com/font/net/aspose.font/multilanguagestring/getallstrings/) - returns all the strings of all languages which the object includes.
	
<p></p>
   
- The simplest to use method of class *TtfNameTable* is [*GetNameById()*](https://reference.aspose.com/font/net/aspose.font.ttftables/ttfnametable/getnamebyid/), which was designed for cases when you need only to get the value for the set category in English. This method looks for a record, which is corresponding to 2 criteria:

1. This record is written in English, so it has the value MSLanguageId.English_United_States or MSLanguageId.English_United_Kingdom for the languageID parameter.
2. This record has platformID with the value equal to [*FontEnvironment.Current.CurrentPlatformId*](https://reference.aspose.com/font/net/aspose.font.ttftables/ttfnametable.platformid/) (3 in current implementation, which declares Microsoft platform).

## How to add/update records in the 'name' table?
								
Class *TtfNameTable* provides a method [*AddName*](https://reference.aspose.com/font/net/aspose.font.ttftables/ttfnametable/addname/) to add or update records in the 'name' table. 
This method creates the structure of the type [*NameRecord*](https://docs.microsoft.com/ru-ru/typography/opentype/spec/name#name-records) and inserts it into the 'name' table. If the record coincides with the added one by parameters `platformID`, `platformSpecificID`, `languageID`, and `nameID` already exists, the method doesn't add a new record, but updates string data in the existing record using the value, defined by parameter `name`. 
	
Parameter `nameId` defines the logical string category for a record. Parameters `platformId`, `platformSpecificId`, and `languageId` are used to set the language of the string. And the last parameter `name` is used to set string data for a record.

## Examples of using functions of the *TtfNameTable* object.
	
Include using for following namespaces:

{{< highlight csharp >}}
using System;
using System.Text;
using System.Collections.Generic;
using Aspose.Font.Ttf;
using Aspose.Font.TtfTables;
{{< /highlight >}}

### Declaring and initializing a font variable.

{{< highlight csharp >}}
TtfFont font;
{{< /highlight >}}

Next 2 snippets print value for category *Full font name* and produce same result for font Lora-Regular

{{< highlight csharp >}}
    //1
    string fullFontName = font.TtfTables.NameTable.GetNameById(TtfNameTable.NameId.FullName);
    Console.WriteLine(String.Format("Full font name: {0}", fullFontName ));
    //2
    string fullFontName = font.TtfTables.NameTable.GetMultiLanguageNameById(TtfNameTable.NameId.FullName).GetEnglishString();
    Console.WriteLine(String.Format("Full font name: {0}", fullFontName));
{{< /highlight >}}

### Printing the whole content of the 'name' table.

The snippet below shows how to fulfill this operation.

{{< highlight csharp >}}
    TtfNameTable.NameId[] ids = Enum.GetValues<TtfNameTable.NameId>();

    foreach (TtfNameTable.NameId nameId in ids)
    {
        MultiLanguageString mlString = font.TtfTables.NameTable.GetMultiLanguageNameById(nameId);
            if (mlString == null)
                continue;
            Console.WriteLine(string.Format("{0}: {1}", nameId, GetMultiLanguageStringValue(mlString)));
    }
    //Using of this method has no sense when strings from 'name' table have only single language, but it can be useful when font
    //'name' table include multilingual strings
    string GetMultiLanguageStringValue(MultiLanguageString mlString)
    {
        int[] languages = mlString.GetAllLanguageIds();
        if(languages.Length == 1)
            return mlString.GetEnglishString();

        StringBuilder sb = new StringBuilder();

        for(int i = 0; i < languages.Length; i++) 
        {
            int langId = languages[i];
            sb.Append(String.Format("{0}: {1}", Enum.GetName<TtfNameTable.MSLanguageId>(
                (TtfNameTable.MSLanguageId)langId), mlString.GetStringForLanguageId(langId)));
            if (i != (languages.Length - 1))
                sb.Append(", ");
        }

        return sb.ToString();
    }		
{{< /highlight >}}

### Updating values for categories "Font Subfamily name" and "Description"

To add or refresh the entry in the table 'name' correctly, we need to pass the values of the platformID, platformSpecificID and languageID parameters that coincide with those that are already present in the 'name' table. For this, before refreshing the data we will read the existing records of the NameRecord type relevant to the refreshing logic category, defined by name identifier.

{{< highlight csharp >}}
    //Struct for update operations
    struct UpdateData
    {
        private TtfNameTable.NameId _nameId;
        private string _data;

        public UpdateData(TtfNameTable.NameId nameId, string data)
        {
            this._nameId = nameId;
            this._data = data;
        }

        public TtfNameTable.NameId NameId => this._nameId;
        public string StringData => this._data;
    }
		
	UpdateData[] recordsToUpdate = new UpdateData[]
	{
		new UpdateData(TtfNameTable.NameId.FontSubfamily, "Italic"),
		new UpdateData(TtfNameTable.NameId.Description, "New description")
	};

	TtfNameTable.NameRecord firstRecord = null;

	foreach (UpdateData updateData in recordsToUpdate)
	{
		TtfNameTable.NameRecord[] records = font.TtfTables.NameTable.GetNameRecordsByNameId(updateData.NameId);

		//Declare variable for NameRecord structure to use for update operations
		TtfNameTable.NameRecord record = null;

		//In this example we will use only info from the first NameRecord structure returned to update font metadata.
		//Many actual fonts require serious analyze of all NameRecords returned to update metadata correctly

		//Initialize just created variables
		if (records.Length == 0)
		{
			//If no any record was found for current name identifer,
			//we will use first found record for any name identifier
			if (firstRecord == null)
			{
				firstRecord = GetFirstExistingRecord(font.TtfTables.NameTable);
			}
			record = firstRecord;
		}
		else
		{
			record = records[0];
		}

		//Add or update record in 'name' table
		font.TtfTables.NameTable.AddName(updateData.NameId, (TtfNameTable.PlatformId)record PlatformId, 
                        record.PlatformSpecificId, record.LanguageId, updateData.StringData);
	}		

		
    TtfNameTable.NameRecord GetFirstExistingRecord(TtfNameTable table)
    {
        TtfNameTable.NameRecord[] records = null;
        foreach (TtfNameTable.NameId nameId in Enum.GetValues<TtfNameTable.NameId>())
        {
            records = table.GetNameRecordsByNameId(nameId);
            if (records.Length != 0)
                return records[0];
        }

            return table.GetAllNameRecords()[0];
    } 	

{{< /highlight >}}

Other examples for refreshing the  'name' table you can find in the test [*solution MetadataExamples.cs*](https://github.com/aspose-font/Aspose.Font-Documentation/blob/master/net-examples/Aspose.Font.Examples/Metadata/MetadataExamples.cs).






