#pragma once
#include<string>
#include<fstream>
#include <direct.h>  // 用于 _getcwd
bool areFilesIdentical(const std::string& filePath1, const std::string& filePath2) {
	std::ifstream file1(filePath1, std::ifstream::binary);
	std::ifstream file2(filePath2, std::ifstream::binary);

	// 检查文件是否成功打开
	if (!file1.is_open() || !file2.is_open()) {
		//std::cerr << "Cannot open one or both files!" << std::endl;
		return false;
	}

	char ch1, ch2;
	while (file1.get(ch1) && file2.get(ch2)) {
		if (ch1 != ch2) {
			return false; // 发现不同字符，返回 false
		}
	}

	return true; // 所有字符相同且文件长度一致
}

void printCurrentDirectory() {
	char buffer[256];
	if (_getcwd(buffer, sizeof(buffer)) != NULL) {
		//std::cout << "Current working directory: " << buffer << std::endl;
	}
	else {
		//std::cerr << "Failed to get current working directory" << std::endl;
	}
}
double calculate(double num1, char op, double num2);

bool processLine(const std::string& line, double& result);

void calculateResults(const std::string& inputFile, const std::string& outputFile);
