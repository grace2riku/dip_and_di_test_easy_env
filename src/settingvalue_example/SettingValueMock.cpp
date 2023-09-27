#include "SettingValueMock.h"

#include <iostream>
using namespace std;

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
    return 100;
}
