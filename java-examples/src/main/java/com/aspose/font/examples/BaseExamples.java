package com.aspose.font.examples;

import java.io.File;
import java.nio.file.Paths;

public abstract class BaseExamples implements IExamples {

	private String dataDir;
	private String outputDir;
	private String licenseDir;

	public BaseExamples(String folderName)
	{
		String userDir = System.getProperty("user.dir");
		dataDir = Paths.get(userDir, "Data").toString();
		outputDir = Paths.get(userDir, "Out").toString();
		licenseDir = Paths.get(dataDir, "License").toString();

		File directory = new File(outputDir);

		if (!directory.exists())
			directory.mkdir();

//        System.out.println(MessageFormat.format("Data Dir: {0}", dataDir));
//        System.out.println(MessageFormat.format("Output Dir: {0}", outputDir));
//        System.out.println(MessageFormat.format("License Dir: {0}", licenseDir));
	}

	public BaseExamples() {
		this(".");
	}

	public String getDataDir() { return dataDir; }

	public String getOutputDir() { return outputDir; }

	public String getLicenseDir() { return licenseDir; }

	public String setDataPath(String fileName)
	{
		return Paths.get(getDataDir(), fileName).toString();
	}

	public String setDataPath(String ... paths)
	{
		return Paths.get(getDataDir(), paths).toString();
	}

	public String setOutputPath(String fileName)
	{
		return Paths.get(getOutputDir(), fileName).toString();
	}

	public abstract void run() throws Exception;
}
