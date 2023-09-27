#ifndef _H_SETTINGVALUEVALIDATION_
#define _H_SETTINGVALUEVALIDATION_

#include "ISettingValue.h"

class SettingValueValidation {
    private:
        ISettingValue* _settingValue;

    public:
        SettingValueValidation(ISettingValue* settingValue);
        ~SettingValueValidation();
        bool validate();
};

#endif	// _H_SETTINGVALUEVALIDATION_