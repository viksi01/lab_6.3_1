#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_6.3_1/lab_6.3_1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest631
{
	TEST_CLASS(UnitTest631)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[5] = { 92,71,14,-85,13 };
			int t = Number(a, 5);
			Assert::AreEqual(t, 4);

		}
	};
}
