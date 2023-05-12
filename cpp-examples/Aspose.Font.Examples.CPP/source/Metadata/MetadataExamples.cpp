#include "aspose_pch.h"
#include "MetadataExamples.h"

#include <system/text/string_builder.h>
#include <system/object_ext.h>
#include <system/enum.h>
#include <system/console.h>
#include <system/collections/list.h>
#include <Aspose.Font.Cpp/src/TtfTables/TtfTableRepository.h>
#include <Aspose.Font.Cpp/src/Ttf/TtfFont.h>
#include <Aspose.Font.Cpp/src/MultiLanguageString.h>
#include <Aspose.Font.Cpp/src/FontType.h>
#include <Aspose.Font.Cpp/src/Font.h>

using namespace Aspose::Font::Ttf;
using namespace Aspose::Font::TtfTables;
namespace Aspose {

namespace Font {

namespace Examples {

namespace Metadata {

RTTI_INFO_IMPL_HASH(2285746280u, ::Aspose::Font::Examples::Metadata::MetadataExamples::NameRecordData, ThisTypeBaseTypesInfo);

Aspose::Font::TtfTables::TtfNameTable::PlatformId MetadataExamples::NameRecordData::get_PlatformId() const
{
    return _platformId;
}

uint16_t MetadataExamples::NameRecordData::get_PlatformSpecificId() const
{
    return _platformSpecificId;
}

uint16_t MetadataExamples::NameRecordData::get_LangId() const
{
    return _langId;
}

Aspose::Font::TtfTables::TtfNameTable::NameId MetadataExamples::NameRecordData::get_NameId() const
{
    return _nameId;
}

System::String MetadataExamples::NameRecordData::get_StringData() const
{
    return _stringData;
}

MetadataExamples::NameRecordData::NameRecordData(Aspose::Font::TtfTables::TtfNameTable::PlatformId platformId, uint16_t platformSpecificId, uint16_t langId, Aspose::Font::TtfTables::TtfNameTable::NameId nameId, System::String stringData)
    : _platformId(((Aspose::Font::TtfTables::TtfNameTable::PlatformId)0)), _platformSpecificId(0), _langId(0)
    , _nameId(((Aspose::Font::TtfTables::TtfNameTable::NameId)0))
{
    (*this)._platformId = platformId;
    (*this)._platformSpecificId = platformSpecificId;
    (*this)._langId = langId;
    (*this)._nameId = nameId;
    (*this)._stringData = stringData;
}

MetadataExamples::NameRecordData::NameRecordData()
    : _platformId(((Aspose::Font::TtfTables::TtfNameTable::PlatformId)0)), _platformSpecificId(0), _langId(0)
    , _nameId(((Aspose::Font::TtfTables::TtfNameTable::NameId)0))
{
}


RTTI_INFO_IMPL_HASH(2322004162u, ::Aspose::Font::Examples::Metadata::MetadataExamples, ThisTypeBaseTypesInfo);

void MetadataExamples::Run()
{
    PrintAlignedTitle(u"TrueType metadata examples", true);
    InitFont();
    PrintNameTables();
    UpdateMetadata();
}

void MetadataExamples::PrintNameTables()
{
    PrintExampleTitle(u"Content of 'name' table", 1);
    System::Console::WriteLine();
    PrintNameIdsForFont(this->_font, System::String::Format(u"Content of 'name' table for font \"{0}\"", this->_font->get_FontName()));
    System::SharedPtr<TtfFont> secondFont = System::AsCast<Aspose::Font::Ttf::TtfFont>(LoadFont(u"Montserrat-Regular.ttf", Aspose::Font::FontType::TTF));
    PrintNameIdsForFont(secondFont, System::String::Format(u"Content of 'name' table for font \"{0}\"", secondFont->get_FontName()));
}

void MetadataExamples::UpdateMetadata()
{
    PrintExampleTitle(u"Update data in the 'name' table", 2);
    System::Console::Write(u"Name idenitifiers to update:");
    
    //Declare list of name identifiers which are planned to be updated
    System::ArrayPtr<TtfNameTable::NameId> nameIds = System::MakeArray<Aspose::Font::TtfTables::TtfNameTable::NameId>({Aspose::Font::TtfTables::TtfNameTable::NameId::FontFamily, Aspose::Font::TtfTables::TtfNameTable::NameId::Description, Aspose::Font::TtfTables::TtfNameTable::NameId::TrademarkNotice});
    
    //Print list of name identifiers
    for (int32_t i = 0; i < nameIds->get_Length(); i++)
    {
        System::Console::Write(System::String::Format(u"'{0}'", nameIds[i]));
        if (i != (nameIds->get_Length() - 1))
        {
            System::Console::Write(u", ");
        }
    }
    System::Console::WriteLine(u"\r\n");
    
    //Run update operation
    UpdateMetadataInFont(this->_font, nameIds);
    
    //Print results
    PrintNameIdsForFont(this->_font, System::String::Format(u"Content of 'name' table for font \"{0}\" after update", this->_font->get_FontName()));
}

void MetadataExamples::UpdateMetadataInFont(System::SharedPtr<Aspose::Font::Ttf::TtfFont> font, System::ArrayPtr<Aspose::Font::TtfTables::TtfNameTable::NameId> updateIds)
{
    System::SharedPtr<System::Collections::Generic::List<MetadataExamples::NameRecordData>> newRecords = System::MakeObject<System::Collections::Generic::List<MetadataExamples::NameRecordData>>();
    System::SharedPtr<TtfNameTable::NameRecord> firstRecord;
    
    //Iterate name identifiers
    for (TtfNameTable::NameId nameId : updateIds)
    {
        System::ArrayPtr<System::SharedPtr<TtfNameTable::NameRecord>> records = font->get_TtfTables()->get_NameTable()->GetNameRecordsByNameId(nameId);
        
        //In this example we will use only info from first NameRecord structure returned to update font metadata.
        //Many actual fonts require serious analyze of all NameRecords returned to update metadata correctly
        
        //Declare variables to use for creation NameRecordData structure 
        System::SharedPtr<TtfNameTable::NameRecord> record;
        System::String newStringData;
        
        //Initialize just created variables
        if (records->get_Length() == 0)
        {
            //If no any record was found for current name identifer,
            //we will use first found record for any name identifier
            if (firstRecord == nullptr)
            {
                firstRecord = GetFirstExistingRecord(font->get_TtfTables()->get_NameTable());
            }
            record = firstRecord;
            newStringData = System::String::Format(u"New value for '{0}' name identifier ", nameId);
        }
        else
        {
            record = records[0];
            newStringData = System::String::Format(u"Updated \"{0}\"", record->get_String());
        }
        
        //Initialize NameRecordData structure with calculated variables
        MetadataExamples::NameRecordData newRecord((TtfNameTable::PlatformId)record->get_PlatformId(), record->get_PlatformSpecificId(), record->get_LanguageId(), nameId, newStringData);
        
        //Add NameRecordData into list
        newRecords->Add(newRecord);
    }
    
    
    UpdateNameTableInFont(font, newRecords->ToArray());
}

void MetadataExamples::UpdateNameTableInFont(System::SharedPtr<Aspose::Font::Ttf::TtfFont> font, System::ArrayPtr<MetadataExamples::NameRecordData> updateData)
{
    for (MetadataExamples::NameRecordData nameRecord : updateData)
    {
        font->get_TtfTables()->get_NameTable()->AddName(nameRecord.get_NameId(), nameRecord.get_PlatformId(), nameRecord.get_PlatformSpecificId(), nameRecord.get_LangId(), nameRecord.get_StringData());
    }
    
}

void MetadataExamples::PrintNameIdsForFont(System::SharedPtr<Aspose::Font::Ttf::TtfFont> font, System::String title)
{
    PrintAlignedTitle(title);
    System::ArrayPtr<TtfNameTable::NameId> ids = System::Enum<TtfNameTable::NameId>::GetValues();
    
    for (TtfNameTable::NameId nameId : ids)
    {
        System::SharedPtr<MultiLanguageString> mlString = font->get_TtfTables()->get_NameTable()->GetMultiLanguageNameById(nameId);
        if (mlString == nullptr)
        {
            continue;
        }
        System::Console::WriteLine(System::String::Format(u"{0}: {1}", nameId, GetMultiLanguageStringValue(mlString)));
    }
    
}

System::String MetadataExamples::GetMultiLanguageStringValue(System::SharedPtr<MultiLanguageString> mlString)
{
    System::ArrayPtr<int32_t> languages = mlString->GetAllLanguageIds();
    if (languages->get_Length() == 1)
    {
        return mlString->GetEnglishString();
    }
    
    System::SharedPtr<System::Text::StringBuilder> sb = System::MakeObject<System::Text::StringBuilder>();
    
    for (int32_t i = 0; i < languages->get_Length(); i++)
    {
        int32_t langId = languages[i];
        sb->Append(System::String::Format(u"{0}: {1}", System::Enum<TtfNameTable::MSLanguageId>::GetName((TtfNameTable::MSLanguageId)langId), mlString->GetStringForLanguageId(langId)));
        if (i != (languages->get_Length() - 1))
        {
            sb->Append(u", ");
        }
    }
    
    return sb->ToString();
}

System::SharedPtr<Aspose::Font::TtfTables::TtfNameTable::NameRecord> MetadataExamples::GetFirstExistingRecord(System::SharedPtr<Aspose::Font::TtfTables::TtfNameTable> table)
{
    System::ArrayPtr<System::SharedPtr<TtfNameTable::NameRecord>> records;
    for (TtfNameTable::NameId nameId : System::Enum<TtfNameTable::NameId>::GetValues())
    {
        records = table->GetNameRecordsByNameId(nameId);
        if (records->get_Length() != 0)
        {
            return records[0];
        }
    }
    
    
    return table->GetAllNameRecords()->idx_get(0);
}

void MetadataExamples::InitFont()
{
    this->_font = System::AsCast<Aspose::Font::Ttf::TtfFont>(LoadFont(u"Lora-Regular.ttf", Aspose::Font::FontType::TTF));
}

} // namespace Metadata
} // namespace Examples
} // namespace Font
} // namespace Aspose
