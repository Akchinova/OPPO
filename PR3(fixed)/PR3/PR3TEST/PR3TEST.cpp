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

		TEST_METHOD(correctNameTest)
		{
			product val;
			val.setN("lol");
			val.check_n();
		}
		TEST_METHOD(correctAmountTest)
		{
			product val;
			val.setA(6);
			val.check_a();
		}
		TEST_METHOD(incorrectDateDayTest)
		{
			Date data(-4, 1, 2022);
			data.Check(-4,1,2022);
		}
		TEST_METHOD(incorrectDateMonthTest)
		{
			Date data(20, 14, 2022);
			data.Check(20, 14, 2022);
		}
		TEST_METHOD(incorrectDateYearTest)
		{
			Date data(20, 14, -30);
			data.Check(20, 14, -30);
		}
		TEST_METHOD(correctDateDayTest)
		{
			Date data(12, 1, 2022);
			data.Check(12, 1, 2022);
		}
		TEST_METHOD(correctDateMonthTest)
		{
			Date data(20, 10, 2022);
			data.Check(20, 10, 2022);
		}
		TEST_METHOD(correctDateYearTest)
		{
			Date data(20, 1, 2005);
			data.Check(20, 1, 2005);
		}
		TEST_METHOD(correctPressurePrintTest) {
			Date date(12,10,2001);
			product pr(date, "pororo", 6);
			string d = "12.10.2001 pororo 6\n";
			stringstream x;
			pr.write(x);
			Assert::AreEqual(x.str(), d);
		}
		TEST_METHOD(incorrectPressurePrintTest) {
			Date date(12, 10, 2001);
			product pr(date, "pororo", 6);
			string d = "6 pororo 12.10.2001\n";
			stringstream x;
			pr.write(x);
			Assert::AreEqual(x.str(), d);
		}
	};
}
