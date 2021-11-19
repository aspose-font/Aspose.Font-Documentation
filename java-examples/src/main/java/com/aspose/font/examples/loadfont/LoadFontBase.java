package com.aspose.font.examples.loadfont;

import java.text.MessageFormat;

import com.aspose.font.Font;
import com.aspose.font.examples.BaseExamples;

public abstract class LoadFontBase extends BaseExamples {

	protected void printExampleTitle(String title, int exNum)
	{
		System.out.println(MessageFormat.format("\n{0} ex: {1}", title, exNum));
	}

	protected void printSimpleFontInfo(Font font, String fontSource)
	{
		System.out.println(MessageFormat.format("\nFont loaded from {0}\n\t has name: \"{1}\",\n\t glyph count : {2}",
				fontSource, font.getFontName(), font.getNumGlyphs()));
	}
}
