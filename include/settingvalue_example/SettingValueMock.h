#ifndef _H_SETTINGVALUEMOCK_
#define _H_SETTINGVALUEMOCK_

#include "ISettingValue.h"

class SettingValueMock : public ISettingValue {
    private:

    public:
        SettingValueMock();
        ~SettingValueMock();
        void write();
        int read();
};

#endif	// _H_SETTINGVALUEMOCK_