#include "pch.h"
#include "CppUnitTest.h"
#include "../laba6.3(2)/laba6.3(2).cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;
namespace UnitTest3
{
	TEST_CLASS(UnitTest3)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int a[] = { 23, 21, 6, 12, -3 };

			int res = Min(a, 5, 0, 0);
			Assert::AreEqual(res, -3);
		}
	};
}

+