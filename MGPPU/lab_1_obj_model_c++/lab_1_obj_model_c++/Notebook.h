#ifndef NOTEBOOK_H
#define NOTEBOOK_H

#include "CommonView.h"
#include <iostream>
#include <string>
#include <vector>
#include <numeric>


class Notebook : public CommonView {
private:
    string Linovka;
    int NumberOfPages;

public:
    Notebook(float price, string producer, string linovka, int numberOfPages);
};

#endif // NOTEBOOK_H

