#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_08_2/Lab_08_2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab082
{
	TEST_CLASS(UnitTestLab082)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const char* spc = " ";
			char str[101] = "This is a test";
			char* dest = FindA(str, spc);
			Assert::AreEqual(strcmp("a", dest), 0);
		}
	};
}
