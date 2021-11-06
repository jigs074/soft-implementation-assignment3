#include "pch.h"
#include "CppUnitTest.h"
#define SIZE 10

extern "C" char rpsgame(char[], char[]);
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(sensitivity_test)
		{
			char person1[SIZE] = "rock";
			char person2[SIZE]= "paper";
			
			char outcome[SIZE] = "NULL";
			 outcome[SIZE] = (rpsgame(person1, person2));
			Assert::AreEqual("player2", outcome);
		}
	};
}
