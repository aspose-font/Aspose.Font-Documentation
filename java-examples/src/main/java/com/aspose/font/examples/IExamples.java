package com.aspose.font.examples;

public interface IExamples {
	
	String getDataDir();
	String getOutputDir();

	String getLicenseDir();

	String setDataPath(String path);
	String setDataPath(String ... path);	
	String setOutputPath(String path);

	void run() throws Exception;
}