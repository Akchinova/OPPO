#include "pch.h"
#include "CppUnitTest.h"
#include "../PR3/date.h"
#include "../PR3/product.h"
#include "../PR3/product.cpp"
#include "../PR3/date.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace PR3TEST
{
	TEST_CLASS(PR3TEST)
	{
	public:

		TEST_METHOD(productReadCorrect)
		{
			product jaja;
			jaja.name = "jaja";
			jaja.amount = 12;
			jaja.data.day = 1;
			jaja.data.month = 2;
			jaja.data.year = 1900;
			std::string str = "1.2.1900 jaja 12\n";
			std::stringstream sout;
			jaja.write(sout);
			Assert::AreEqual(str, sout.str());
		}
		TEST_METHOD(productReadInCorrect)
		{
			product jaja;
			jaja.name = "ja ja";
			jaja.amount = 12;
			jaja.data.day = 1;
			jaja.data.month = 2;
			jaja.data.year = 1900;
			std::string str = "1.2.1900 jaja 12\n";
			std::stringstream sout;
			jaja.write(sout);
			Assert::AreNotEqual(str, sout.str());
		}
		TEST_METHOD(productWriteCorrect)
		{
			product kiki;
			kiki.name = "kiki";
			kiki.amount = 12;
			kiki.data.day = 1;
			kiki.data.month = 2;
			kiki.data.year = 1900;
			std::string str = "1.2.1900 kiki 12\n";
			std::stringstream sout;
			kiki.write(sout);
			Assert::AreEqual(str, sout.str());
		}
		TEST_METHOD(productWriteInCorrect)
		{
			product kiki;
			kiki.name = "ki ki";
			kiki.amount = 12;
			kiki.data.day = 1;
			kiki.data.month = 2;
			kiki.data.year = 1900;
			std::string str = "1.2.1900 kiki 12\n";
			std::stringstream sout;
			kiki.write(sout);
			Assert::AreNotEqual(str, sout.str());
		}
		TEST_METHOD(DataPrintTest)
		{
			Date data;
			data.day = 1;
			data.month = 12;
			data.year = 1900;
			std::string str = "1.12.1900";
			std::stringstream sout;
			data.write(sout);
			Assert::AreEqual(sout.str(), str);
		}
		TEST_METHOD(DataCorrectTest)
		{
			Date data;
			data.day = 1;
			data.month = 12;
			data.year = 1900;
			Assert::IsTrue((data.day > 0) && (data.day <= 31) && (data.month <= 12) && (data.month > 0) && (data.year > 0));
		}
		TEST_METHOD(DataInCorrectTest)
		{
			Date data;
			data.day = -1;
			data.month = -12;
			data.year = -1900;
			Assert::IsTrue(!((data.day > 0) && (data.day <= 31) && (data.month <= 12) && (data.month > 0) && (data.year > 0)));
		}
	};
}
