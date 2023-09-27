#include "SettingValueValidation.h"
#include "ISettingValue.h"

#include <iostream>
using namespace std;

// コンストラクタの実装
SettingValueValidation::SettingValueValidation(ISettingValue* settingValue) {
    cout << "SettingValueValidation constructor" << endl;

    _settingValue = settingValue;
}

SettingValueValidation::~SettingValueValidation() {
    cout << "SettingValueValidation destructor" << endl;

    delete _settingValue;
}

bool SettingValueValidation::validate() {
    int value = _settingValue->read();
    if (value >= 100) return true;
    return false;
}