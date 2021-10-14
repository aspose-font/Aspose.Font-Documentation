package com.aspose.font.examples.convertfont;

import java.io.FileOutputStream;
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Paths;

import com.aspose.font.ByteContentStreamSource;
import com.aspose.font.FileSystemStreamSource;
import com.aspose.font.Font;
import com.aspose.font.FontDefinition;
import com.aspose.font.FontFileDefinition;
import com.aspose.font.FontSavingFormats;
import com.aspose.font.FontType;
import com.aspose.font.TtfFont;
import com.aspose.font.examples.BaseExamples;

public class ConvertWoffToTtf extends BaseExamples {

	public ConvertWoffToTtf(String folderName) {
		super(folderName);
	}

	@Override
	public /*override*/ void run() throws IOException
	{
		System.out.println("Run Convert WOFF to TTF examples");

		woffToTtfExample1();
		woffToTtfExample2();
		woffToTtfExample3();
	}

	private void woffToTtfExample1() throws IOException
	{
		System.out.println("WOFF to TTF ex: 1");

		//ExampleStart: 1
		// Open woff font
		String fontPath = Paths.get(getDataDir(), "Montserrat-Regular.woff").toString();
		FontDefinition fontDefinition = new FontDefinition(FontType.TTF, new FontFileDefinition("woff", new FileSystemStreamSource(fontPath)));
		Font font = Font.open(fontDefinition);

		// Ttf output settings
		String outPath = Paths.get(getOutputDir(), "WoffToTtf_out1.ttf").toString();
		FileOutputStream outStream = new FileOutputStream(outPath);

		// Convert woff to ttf
		font.saveToFormat(outStream, FontSavingFormats.TTF);
		//ExampleEnd: 1
	}

	private void woffToTtfExample2() throws IOException
	{
		System.out.println("WOFF to TTF ex: 2");

		//ExampleStart: 2
		// Open woff font
		byte[] fontMemoryData = Files.readAllBytes(Paths.get(getDataDir(), "Montserrat-Bold.woff"));
		FontDefinition fontDefinition = new FontDefinition(FontType.TTF, new FontFileDefinition("woff", new ByteContentStreamSource(fontMemoryData)));
		TtfFont ttfFont = (TtfFont)Font.open(fontDefinition);

		// Ttf output settings
		String outPath = Paths.get(getOutputDir(), "WoffToTtf_out2.ttf").toString();
		FileOutputStream outStream = new FileOutputStream(outPath);

		// Convert woff to ttf
		ttfFont.saveToFormat(outStream, FontSavingFormats.TTF);
		//ExampleEnd: 2
	}

	private void woffToTtfExample3()
	{
		System.out.println("WOFF to TTF ex: 3");

		//ExampleStart: 3
		// Open woff font
		String fontPath = Paths.get(getDataDir(),"Montserrat-Regular.woff").toString();
		FontDefinition fontDefinition = new FontDefinition(FontType.TTF, new FontFileDefinition("woff", new FileSystemStreamSource(fontPath)));
		Font font = Font.open(fontDefinition);

		// Convert woff to ttf
		font.convert(FontType.TTF);
		font.save(Paths.get(getOutputDir(), "WoffToTtf_out3.ttf").toString());
		//ExampleEnd: 3
	}
}
