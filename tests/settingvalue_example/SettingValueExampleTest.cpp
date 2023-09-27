extern "C"
{
}

#include "CppUTest/TestHarness.h"

#include <iostream>
using namespace std;
#include "SettingValueValidation.h"
#include "SettingValueMock.h"
#include "ISettingValue.h"

TEST_GROUP(SettingValueExampleTest)
{
    SettingValueValidation* settingValueValidation;

    void setup()
    {
      settingValueValidation = new SettingValueValidation(new SettingValueMock());
    }

    void teardown()
    {
      delete settingValueValidation;
    }
};

TEST(SettingValueExampleTest, SettingValueValid)
{
  CHECK(settingValueValidation->validate());
}

