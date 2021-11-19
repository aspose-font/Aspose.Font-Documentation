package com.aspose.font.examples.loadfont;

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

public class LoadTtf extends LoadFontBase {

	public LoadTtf()
	{
		super();
	}

	@Override
	public /*override*/ void run() throws IOException
	{
		System.out.println("\nRun load TrueType fonts examples");

		loadExample1();
		loadExample2();
		loadExample3();
		loadExample4();
	}

	private void loadExample1()
	{
		printExampleTitle("Loading from file Montserrat-Regular.ttf using FileSystemStreamSource object", 1);

		//ExampleStart: 1
		String fontPath = Paths.get(getDataDir(), "Montserrat-Regular.ttf").toString();
		String fontSource = "file Montserrat-Regular.ttf";

		// Initialize FontDefinition object passing TTF as FontType value and using FontFileDefinition
		// based on FileSystemStreamSource object, set fileExtension to "ttf"
		FontFileDefinition fileDef = new FontFileDefinition("ttf", new FileSystemStreamSource(fontPath));
		FontDefinition fontDef = new FontDefinition(FontType.TTF, fileDef);

		// Load font and print results
		Font font = Font.open(fontDef);
		printSimpleFontInfo(font, fontSource);
		//ExampleEnd: 1
	}

	private void loadExample2()
	{
		printExampleTitle("Loading from file Montserrat-Regular.ttf using File object", 2);

		//ExampleStart: 2
		String fontPath = Paths.get("D:\\Work\\Aspose\\Hugo\\doc\\Aspose.Font-Documentation\\java-examples\\Data\\", "Montserrat-Regular.ttf").toString();
		String fontSource = "file Montserrat-Regular.ttf";

		// Initialize FontDefinition object passing TTF as FontType value and using FontFileDefinition
		// based on FileInfo object, fileExtension value is calculated automatically from FileInfo fields.
		FontFileDefinition fileDef = new FontFileDefinition(new File(fontPath));
		FontDefinition fontDef = new FontDefinition(FontType.TTF, fileDef);

		// Load font and print results
		Font font = Font.open(fontDef);
		printSimpleFontInfo(font, fontSource);
		//ExampleEnd: 2
	}

	private void loadExample3()
	{
		printExampleTitle("Loading from file Montserrat-Regular.ttf excluding FontFileDefinition object from initialization chain", 3);

		//ExampleStart: 3
		String fontPath = Paths.get(getDataDir(), "Montserrat-Regular.ttf").toString();
		String fontSource = "file Montserrat-Regular.ttf";

		// Initialize FontDefinition object passing TTF as FontType value, "ttf" as fileExtension value, 
		// and FileSystemStreamSource object. Parameter 'fileExtension' here is not duplicate value 
		// for parameter 'FontType' and it's needed for correct font format detection
		FontDefinition fontDef = new FontDefinition(FontType.TTF, "ttf", new FileSystemStreamSource(fontPath));

		// Load font and print results
		Font font = Font.open(fontDef);
		printSimpleFontInfo(font, fontSource);
		//ExampleEnd: 3
	}

	private void loadExample4() throws IOException
	{
		printExampleTitle("Loading from byte array", 4);

		//ExampleStart: 4
		String fontPath = Paths.get(getDataDir(), "Montserrat-Regular.ttf").toString();
		String fontSource = "memory byte array based on file Montserrat-Regular.ttf";

		// Load font binary data into byte array
		byte[] fontBytes = Files.readAllBytes(Paths.get(fontPath));

		// Initialize FontDefinition object  passing TTF as FontType value, "ttf" as fileExtension value, 
		// and ByteContentStreamSource object based on fontBytes array
		FontDefinition fontDef = new FontDefinition(FontType.TTF, "ttf", new ByteContentStreamSource(fontBytes));

		// Load font and print results
		Font font = Font.open(fontDef);
		printSimpleFontInfo(font, fontSource);
		//ExampleEnd: 4
	}
}
