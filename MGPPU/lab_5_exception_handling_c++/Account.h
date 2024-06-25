#include <iostream>
#include <string>
#include <ctime>
#include "Exception.h"

using namespace std;

class Account {
private:
     string invoice_date;

public:
    Account(const  string& date) {
        time_t now = time(0);
        struct tm new_tm;
        if(strptime(date.c_str(), "%Y-%m-%d", &new_tm) != NULL) {
            time_t input_time = mktime(&new_tm);
            if(difftime(now, input_time) > 0) {
                throw PastDateException("Дата выставления счета уже прошла!");
            } else {
                invoice_date = date;
            }
        } else {
            throw  invalid_argument("Некорректный формат даты");
        }
    }

    const  string& GetInvoiceDate() const {
        return invoice_date;
    }
};
