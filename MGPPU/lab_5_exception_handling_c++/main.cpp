#include "Account.h"
using namespace std;

int main() {
    try {
        Account accountValid("2024-12-25");
         cout << "Дата выставления счета: " << accountValid.GetInvoiceDate() <<  endl;
        Account accountPast("2010-01-01");
    } catch (PastDateException& e) {
         cout << e.what() <<  endl;
    } catch ( exception& e) {
         cout << e.what() <<  endl;
    }

    return 0;
}
