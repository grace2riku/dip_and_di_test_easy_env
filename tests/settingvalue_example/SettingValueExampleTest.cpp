
extern "C"
{
}

#include "CppUTest/TestHarness.h"
#include <iostream>
using namespace std;
#include "Boot.h"
#include "Factories.h"

TEST_GROUP(SettingValueExampleTest)
{
    Boot* boot;
    void setup()
    {
      boot = new Boot(Factories::CreateSettingValue());
    }

    void teardown()
    {
      delete boot;
    }
};

TEST(SettingValueExampleTest, FirstStep)
{
//  FAIL("Start here!!!");
    LONGS_EQUAL(123, boot->readSettingValue());
}
