
extern "C"
{
}

#include "CppUTest/TestHarness.h"
#include <iostream>
using namespace std;
#include "Boot.h"
#include "Factories.h"
#include "SettingValueValidation.h"
#include "SettingValueMock.h"
#include "ISettingValue.h"

TEST_GROUP(SettingValueExampleTest)
{
    Boot* boot;
    SettingValueValidation* settingValueValidation;
    ISettingValue* settingValue;
    void setup()
    {
      boot = new Boot(Factories::CreateSettingValue());
      settingValueValidation = new SettingValueValidation(new SettingValueMock());
    }

    void teardown()
    {
      delete boot;
      delete settingValueValidation;
    }
};

TEST(SettingValueExampleTest, SettingValueValid)
{
//  FAIL("SettingValueValid fail!!!");
  CHECK(settingValueValidation->validate());
}

TEST(SettingValueExampleTest, FirstStep)
{
//  FAIL("Start here!!!");
    LONGS_EQUAL(123, boot->readSettingValue());
}

