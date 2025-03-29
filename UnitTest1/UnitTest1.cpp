#include "pch.h"
#include "CppUnitTest.h"
#include "../2.3A/BaseFuzzyNumber.h"
#include "../2.3A/BaseFuzzyNumber.cpp"
#include "../2.3A/FuzzyNumberPublic.h"
#include "../2.3A/FuzzyNumberPublic.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			FuzzyNumberPublic fuzzy1(5, 1, 2);

			++fuzzy1;

			Assert::AreEqual(fuzzy1.getX(), 6.0);
			Assert::AreEqual(fuzzy1.getL(), 1.0);
			Assert::AreEqual(fuzzy1.getR(), 2.0);
		}
	};
}