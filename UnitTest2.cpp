#include "pch.h"
#include "CppUnitTest.h"
#include"D:\jieduizuoye\SoftProject_4\test.h"
#include<string>
#include<fstream>


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		/*TEST_METHOD(TestMethod1)
		{
			double result1 = 5;
			Assert::AreEqual(result1, calculate(10, '/', 2));
		}*/
		TEST_METHOD(TestMethod1)
		{
			double result1 = 5;
			Assert::AreEqual(result1, calculate(2, '+', 3));
		}
		TEST_METHOD(TestMethod2)
		{
			double result1 = 7;
			Assert::AreEqual(result1, calculate(10, '-', 3));
		}
		TEST_METHOD(TestMethod3)
		{
			double result1 = 110;
			Assert::AreEqual(result1, calculate(55, '*', 2));
		}
		TEST_METHOD(TestMethod4)
		{
			double result1 = 49.5;
			Assert::AreEqual(result1, calculate(99, '/', 2));
		}
		TEST_METHOD(TestMethod5)
		{
			double result2 = (double)NAN;
			// 检查 calculate(10, '/', 0) 是否返回 NAN
			Assert::IsTrue(std::isnan(result2));
			Assert::IsTrue(std::isnan(calculate(10, '/', 0)));
		}
		TEST_METHOD(TestMethod6)
		{
			double result_test;
			double result_real = 25;
			processLine("(2 + 3) * 5 = _____", result_test);
			Assert::AreEqual(result_test, result_real);
		}
		TEST_METHOD(TestMethod7)
		{
			double result_test;
			double result_real = 10;
			processLine("3 * 2 + 4 = _____", result_test);
			Assert::AreEqual(result_test, result_real);
		}
		TEST_METHOD(TestMethod8)
		{
			double result_test;
			double result_real = 8;
			processLine("2 + 3 * 2 = _____", result_test);
			Assert::AreEqual(result_test, result_real);
		}
		TEST_METHOD(TestMethod9)
		{
			double result_test;
			double result_real = 6;
			processLine("(8 / 2) + 2 = _____", result_test);
			Assert::AreEqual(result_test, result_real);
		}
		TEST_METHOD(TestMethod10)
		{
			double result_test;
			double result_real = 6.5;
			processLine("4 + 5 / 2 = _____", result_test);
			Assert::AreEqual(result_test, result_real);
		}
		TEST_METHOD(TestMethod11)
		{
			double result_test;
			double result_real = -1;
			processLine("5 - 3 * 2 = _____", result_test);
			Assert::AreEqual(result_test, result_real);
		}
		/*TEST_METHOD(TestMethod12)
		{
			double result_test;
			double result_real = 4;
			processLine("(5 – 3) * 2 = _____", result_test);
			Assert::AreEqual(result_test, result_real);
		}*/
		TEST_METHOD(TestMethod13)
		{
			double result_test;
			double result_real = 1.09412;
			processLine("(60 + 33) / 85 = _____", result_test);
			double epsilon = 0.00001;  // 设置一个小的容差值
			Assert::AreEqual(result_test, result_real, epsilon, L"Values are not equal within tolerance");
		}
		TEST_METHOD(TestMethod14)
		{
			std::string path= _getcwd(NULL, 0);
			std::ofstream outf;
			outf.open(path+"\\testnoans.txt");
			outf << "(2 + 3) * 2 = _____      \n";
			outf.close();
			std::string inputfile= path + "\\testnoans.txt", outputfile= path + "\\result.txt";
			outf.open(path + "\\testans.txt");
			outf << "(2 + 3) * 2 = _____       10\n";
			outf.close();
			calculateResults(inputfile, outputfile);
			/*testans.txt= result.txt*/
			Assert::AreEqual(true, areFilesIdentical(path + "\\testans.txt", outputfile));
		}
		TEST_METHOD(TestMethod15)
		{
			std::string path = _getcwd(NULL, 0);
			std::ofstream outf;
			outf.open(path + "\\testnoans.txt");
			outf.close();
			std::string inputfile = path + "\\testnoans.txt", outputfile = path + "\\result.txt";
			outf.open(path + "\\testans.txt");
			outf.close();
			calculateResults(inputfile, outputfile);
			/*testans.txt= result.txt*/
			Assert::AreEqual(true, areFilesIdentical(path + "\\testans.txt", outputfile));
		}
		TEST_METHOD(TestMethod16)
		{
			std::string path = _getcwd(NULL, 0);
			std::ofstream outf;
			outf.open(path + "\\testnoans.txt");
			outf << "(2 + 3) * 2 = _____      \n";
			outf.close();
			std::string inputfile = path + "\\testnoans.txt", outputfile = path + "\\result.txt";
			outf.open(path + "\\testans.txt");
			outf << "(2 + 3) * 2 = _____       10\n";
			outf.close();
			calculateResults(inputfile, outputfile);
			/*testans.txt= result.txt*/
			Assert::AreEqual(true, areFilesIdentical(path + "\\testans.txt", outputfile));
		}
		bool processLine(const std::string& line, double& result) {
			// 模拟处理失败的情况，总是返回 false
			return false;
		}
	};