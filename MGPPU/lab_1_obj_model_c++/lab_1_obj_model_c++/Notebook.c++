#include "Notebook.h"

class Notebook : public CommonView {
    string Linovka;
    int NumberOfPages;

public:
    Notebook(float price, string producer, string linovka, int numberOfPages)
        : CommonView(price, producer), Linovka(linovka), NumberOfPages(numberOfPages) {}
};
