#include "SettingValueMock.h"

#include <iostream>
using namespace std;

#include "CppUTest/TestHarness.h"
#include "CppUTestExt/MockSupport.h"

// コンストラクタの実装
SettingValueMock::SettingValueMock() {
    cout << "SettingValueMock constructor" << endl;
}

SettingValueMock::~SettingValueMock() {
    cout << "SettingValueMock decstructor" << endl;
}

void SettingValueMock::write() {
}

int SettingValueMock::read() {
    return mock().actualCall("read").returnIntValue();
//    return 100;
}
