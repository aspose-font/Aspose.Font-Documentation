#pragma once

#include <system/array.h>
#include <Aspose.Font.Cpp/src/TtfTables/TtfNameTable.h>

#include "BaseExamples.h"

namespace Aspose
{
namespace Font
{
namespace Examples
{
namespace Metadata
{
class MetadataExamples;
} // namespace Metadata
} // namespace Examples
class MultiLanguageString;
namespace Ttf
{
class TtfFont;
} // namespace Ttf
} // namespace Font
} // namespace Aspose

namespace Aspose {

namespace Font {

namespace Examples {

namespace Metadata {

class MetadataExamples : public Aspose::Font::Examples::BaseExamples
{
    typedef MetadataExamples ThisType;
    typedef Aspose::Font::Examples::BaseExamples BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
private:

    class NameRecordData : public System::Object, public System::Details::BoxableObjectBase
    {
        typedef NameRecordData ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
        Aspose::Font::TtfTables::TtfNameTable::PlatformId get_PlatformId() const;
        uint16_t get_PlatformSpecificId() const;
        uint16_t get_LangId() const;
        Aspose::Font::TtfTables::TtfNameTable::NameId get_NameId() const;
        System::String get_StringData() const;
        
        NameRecordData(Aspose::Font::TtfTables::TtfNameTable::PlatformId platformId, uint16_t platformSpecificId, uint16_t langId, Aspose::Font::TtfTables::TtfNameTable::NameId nameId, System::String stringData);
        NameRecordData();
        
    private:
    
        Aspose::Font::TtfTables::TtfNameTable::PlatformId _platformId;
        uint16_t _platformSpecificId;
        uint16_t _langId;
        Aspose::Font::TtfTables::TtfNameTable::NameId _nameId;
        System::String _stringData;
        
    };
    
    
public:

    void Run() override;
    
private:

    System::SharedPtr<Aspose::Font::Ttf::TtfFont> _font;
    
    void PrintNameTables();
    void UpdateMetadata();
    /// <summary>
    /// This method doesn't updates 'name' table directly, instead it prepares all the parameters, 
    /// required for update operation in structures with type NameRecordData and then passes
    /// all these structures into method UpdateNameTableInFont() where an update operation for
    /// every structure will be executed.
    /// </summary>
    /// <param name="font">Font to update 'name' table</param>
    /// <param name="updateIds">List of name identifiers to update</param>
    void UpdateMetadataInFont(System::SharedPtr<Aspose::Font::Ttf::TtfFont> font, System::ArrayPtr<Aspose::Font::TtfTables::TtfNameTable::NameId> updateIds);
    /// <summary>
    /// Iterates all passed NameRecordData structures and adds information
    /// from every NameRecordData structure into 'name' table of the font.
    /// If entry with same parameters set (PlatformID, PlatformSpecificId, LanguageId, NameId) already exists
    /// in the 'name' table, method <see cref="TtfNameTable::AddName()"></see> will 
    /// update existing record with new string data.
    /// </summary>
    /// <param name="font">Font to update 'name' table</param>
    /// <param name="updateData">Array of NameRecordData structures</param>
    void UpdateNameTableInFont(System::SharedPtr<Aspose::Font::Ttf::TtfFont> font, System::ArrayPtr<MetadataExamples::NameRecordData> updateData);
    void PrintNameIdsForFont(System::SharedPtr<Aspose::Font::Ttf::TtfFont> font, System::String title);
    /// <summary>
    /// This method designed for cases when entry for some name ideitifier includes 
    /// many strings of different languages. 
    /// Text returned will include pairs for all languages, where each pair is the name of the language 
    /// and correspondent content related to this language.
    /// Using of this method has no sense for current fonts used, but it can be useful for another fonts.
    /// </summary>
    /// <param name="mlString">MultiLanguageString object</param>
    /// <returns>Text which includes entries for all languages</returns>
    System::String GetMultiLanguageStringValue(System::SharedPtr<MultiLanguageString> mlString);
    System::SharedPtr<Aspose::Font::TtfTables::TtfNameTable::NameRecord> GetFirstExistingRecord(System::SharedPtr<Aspose::Font::TtfTables::TtfNameTable> table);
    void InitFont();
    
};

} // namespace Metadata
} // namespace Examples
} // namespace Font
} // namespace Aspose


