using System;
using System.Text;
using System.Collections.Generic;
using Aspose.Font;
using Aspose.Font.Ttf;
using Aspose.Font.TtfTables;

namespace Aspose.Font.Examples.Metadata
{
    class MetadataExamples : BaseExamples
    {
        private TtfFont _font;

        public override void Run()
        {
            PrintAlignedTitle("TrueType metadata examples", true);
            InitFont();
            PrintNameTables();
            UpdateMetadata();
        }

        private void PrintNameTables()
        {
            PrintExampleTitle("Content of 'name' table", 1);
            Console.WriteLine();
            PrintNameIdsForFont(this._font, string.Format("Content of 'name' table for font \"{0}\"", 
                this._font.FontName));
            TtfFont secondFont = LoadFont("Montserrat-Regular.ttf", FontType.TTF) as TtfFont;
            PrintNameIdsForFont(secondFont, string.Format("Content of 'name' table for font \"{0}\"",
                secondFont.FontName));
        }

        private void UpdateMetadata()
        {
            PrintExampleTitle("Update data in the 'name' table", 2);
            Console.Write("Name idenitifiers to update:");

            //Declare list of name identifiers which are planned to be updated
            TtfNameTable.NameId[] nameIds = new TtfNameTable.NameId[]
                {TtfNameTable.NameId.FontFamily, TtfNameTable.NameId.Description, TtfNameTable.NameId.TrademarkNotice};

            //Print list of name identifiers
            for (int i = 0; i < nameIds.Length; i++)
            {                
                Console.Write(String.Format("'{0}'", nameIds[i]));
                if (i != (nameIds.Length - 1))
                    Console.Write(", ");
            }
            Console.WriteLine("\r\n");

            //Run update operation
            UpdateMetadataInFont(this._font, nameIds);

            //Print results
            PrintNameIdsForFont(this._font, string.Format("Content of 'name' table for font \"{0}\" after update",
                            this._font.FontName));
        }

        /// <summary>
        /// This method doesn't updates 'name' table directly, instead it prepares all the parameters, 
        /// required for update operation in structures with type NameRecordData and then passes
        /// all these structures into method UpdateNameTableInFont() where an update operation for
        /// every structure will be executed.
        /// </summary>
        /// <param name="font">Font to update 'name' table</param>
        /// <param name="updateIds">List of name identifiers to update</param>
        private void UpdateMetadataInFont(TtfFont font, TtfNameTable.NameId[] updateIds)
        {
            List<NameRecordData> newRecords = new List<NameRecordData>();
            TtfNameTable.NameRecord firstRecord = null;

            //Iterate name identifiers
            foreach(TtfNameTable.NameId nameId in updateIds)
            {
                TtfNameTable.NameRecord[] records = font.TtfTables.NameTable.GetNameRecordsByNameId(nameId);
                
                //In this example we will use only info from first NameRecord structure returned to update font metadata.
                //Many actual fonts require serious analyze of all NameRecords returned to update metadata correctly

                //Declare variables to use for creation NameRecordData structure 
                TtfNameTable.NameRecord record = null;
                string newStringData = null;

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
                    newStringData = String.Format("New value for '{0}' name identifier ", nameId);
                }
                else
                {
                    record = records[0];
                    newStringData = string.Format("Updated \"{0}\"", record.String);
                }

                //Initialize NameRecordData structure with calculated variables
                NameRecordData newRecord = new NameRecordData((TtfNameTable.PlatformId)record.PlatformId, record.PlatformSpecificId,
                    record.LanguageId, nameId, newStringData);

                //Add NameRecordData into list
                newRecords.Add(newRecord);
            }

            UpdateNameTableInFont(font, newRecords.ToArray());
        }

        /// <summary>
        /// Iterates all passed NameRecordData structures and adds information
        /// from every NameRecordData structure into 'name' table of the font.
        /// If entry with same parameters set (PlatformID, PlatformSpecificId, LanguageId, NameId) already exists
        /// in the 'name' table, method <see cref="TtfNameTable.AddName()"/> will 
        /// update existing record with new string data.
        /// </summary>
        /// <param name="font">Font to update 'name' table</param>
        /// <param name="updateData">Array of NameRecordData structures</param>
        private void UpdateNameTableInFont(TtfFont font, NameRecordData[] updateData)
        {
            foreach(NameRecordData nameRecord in updateData)
            {
                font.TtfTables.NameTable.AddName(nameRecord.NameId, nameRecord.PlatformId,
                    nameRecord.PlatformSpecificId, nameRecord.LangId, nameRecord.StringData);
            }            
        }


        private void PrintNameIdsForFont(TtfFont font, string title)
        {
            PrintAlignedTitle(title);
            TtfNameTable.NameId[] ids = Enum.GetValues<TtfNameTable.NameId>();

            foreach (TtfNameTable.NameId nameId in ids)
            {
                MultiLanguageString mlString = font.TtfTables.NameTable.GetMultiLanguageNameById(nameId);
                if (mlString == null)
                    continue;
                Console.WriteLine(string.Format("{0}: {1}", nameId, GetMultiLanguageStringValue(mlString)));
            }
        }

        /// <summary>
        /// This method designed for cases when entry for some name ideitifier includes 
        /// many strings of different languages. 
        /// Text returned will include pairs for all languages, where each pair is the name of the language 
        /// and correspondent content related to this language.
        /// Using of this method has no sense for current fonts used, but it can be useful for another fonts.
        /// </summary>
        /// <param name="mlString">MultiLanguageString object</param>
        /// <returns>Text which includes entries for all languages</returns>
        private string GetMultiLanguageStringValue(MultiLanguageString mlString)
        {
            int[] languages = mlString.GetAllLanguageIds();
            if(languages.Length == 1)
                return mlString.GetEnglishString();

            StringBuilder sb = new StringBuilder();

            foreach(int langId in languages)
            {
                sb.Append(String.Format("{0}: {1}", Enum.GetName<TtfNameTable.MSLanguageId>(
                    (TtfNameTable.MSLanguageId)langId), mlString.GetStringForLanguageId(langId)));
            }

            return sb.ToString();
        }

        private TtfNameTable.NameRecord GetFirstExistingRecord(TtfNameTable table)
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

        private void InitFont()
        {
            this._font = LoadFont("Lora-Regular.ttf", FontType.TTF) as TtfFont;
        }

        struct NameRecordData
        {
            private TtfNameTable.PlatformId _platformId;
            private ushort _platformSpecificId;
            private ushort _langId;
            private TtfNameTable.NameId _nameId;
            private string _stringData;

            public NameRecordData(TtfNameTable.PlatformId platformId, ushort platformSpecificId, ushort langId, 
                TtfNameTable.NameId nameId, string stringData)
            {
                this._platformId = platformId;
                this._platformSpecificId = platformSpecificId;
                this._langId = langId;
                this._nameId = nameId;
                this._stringData = stringData;
            }

            public TtfNameTable.PlatformId PlatformId => _platformId;
            public ushort PlatformSpecificId => _platformSpecificId;
            public ushort LangId => _langId;
            public TtfNameTable.NameId NameId => _nameId;
            public string StringData => _stringData;
        }
    }
}
