package com.aspose.font.examples.loadfont;

import java.io.File;
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Paths;

import com.aspose.font.ByteContentStreamSource;
import com.aspose.font.Font;
import com.aspose.font.FontDefinition;
import com.aspose.font.FontFileDefinition;
import com.aspose.font.FontType;

public class LoadCff extends LoadFontBase {

	public LoadCff()
	{
		super();
	}

	@Override
	public /*override*/ void run() throws IOException
	{
		System.out.println("\nRun load fonts of compact font format examples");

		loadExample1();
		loadExample2();
	}

	private void loadExample1()
	{
		printExampleTitle("Loading from file CenturyGothic.cff using File object", 1);

		//ExampleStart: 1
		String fontPath = Paths.get(getDataDir(), "CenturyGothic.cff").toString();
		String fontSource = "file CenturyGothic.cff";

		// Initialize FontDefinition object passing CFF as FontType value and using FontFileDefinition
		// based on FileInfo object, fileExtension value is calculated automatically from FileInfo fields.
		FontFileDefinition fileDef = new FontFileDefinition(new File(fontPath));
		FontDefinition fontDef = new FontDefinition(FontType.CFF, fileDef);

		// Load font and print results
		Font font = Font.open(fontDef);
		printSimpleFontInfo(font, fontSource);
		//ExampleEnd: 1
	}

	private void loadExample2() throws IOException
	{
		printExampleTitle("Loading from byte array", 2);

		//ExampleStart: 2
		String fontPath = Paths.get(getDataDir(), "CenturyGothic.cff").toString();
		String fontSource = "memory byte array based on file CenturyGothic.cff";

		// Load font binary data into byte array
		byte[] fontBytes = Files.readAllBytes(Paths.get(fontPath));

		// Initialize FontDefinition object  passing CFF as FontType value, "cff" as fileExtension value, 
		// and ByteContentStreamSource object based on fontBytes array
		FontDefinition fontDef = new FontDefinition(FontType.CFF, "ttf", new ByteContentStreamSource(fontBytes));

		// Load font and print results
		Font font = Font.open(fontDef);
		printSimpleFontInfo(font, fontSource);
		//ExampleEnd: 2
	}
}
