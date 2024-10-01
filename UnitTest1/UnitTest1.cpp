#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_5.1/Lab_5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int test;
			test = h(10, 10);

			Assert::AreEqual(test, 0);
		}
	};
}
