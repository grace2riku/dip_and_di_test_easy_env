extern "C"
{
}

#include "CppUTest/TestHarness.h"
#include "CppUTestExt/MockSupport.h"

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
      mock().clear();
      delete settingValueValidation;
    }
};

TEST(SettingValueExampleTest, SettingValueinValid)
{
  mock().expectOneCall("read").andReturnValue(99);

  CHECK_FALSE(settingValueValidation->validate());
}

TEST(SettingValueExampleTest, SettingValueValid)
{
  mock().expectOneCall("read").andReturnValue(100);

  CHECK(settingValueValidation->validate());
}

