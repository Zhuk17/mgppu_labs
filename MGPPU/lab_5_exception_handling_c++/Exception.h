#include <stdexcept>
#include <string>
using namespace std;

class PastDateException : public exception {
private:
    string message_;

public:
    PastDateException(const string& msg) : message_(msg) {}
    virtual const char* what() const throw() {
        return message_.c_str();
    }
};
