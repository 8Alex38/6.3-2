#include "pch.h"
#include "CppUnitTest.h"
#include "../6.3-2/6.3-2.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestSumArrayRecursive)
        {
            int arr[] = { 1, 2, 3, 4, 5 };
            int expectedSum = 15;
            int actualSum = sumArrayRecursive(arr, 5);
            if (expectedSum != actualSum) {
                Assert::Fail(L"Sum (recursive) test failed.");
            }
        }

        TEST_METHOD(TestFindMaxRecursive)
        {
            int arr[] = { 1, 3, 5, 2, 4 };
            int expectedMax = 5;
            int actualMax = findMaxRecursive(arr, 5);
            if (expectedMax != actualMax) {
                Assert::Fail(L"Max (recursive) test failed.");
            }
        }

        TEST_METHOD(TestIncrementArrayElementsRecursive)
        {
            int arr[] = { 1, 2, 3 };
            int expectedArr[] = { 2, 3, 4 };
            incrementArrayElementsRecursive(arr, 3);
            for (int i = 0; i < 3; i++) {
                if (expectedArr[i] != arr[i]) {
                    Assert::Fail(L"Increment (recursive) test failed.");
                }
            }
        }
    };
}
