#include <iostream>
#include <vector>
#include <string>

using namespace std;


// Базовый абстрактный класс для всех письменных принадлежностей
class WritingInstrument {
protected:
    double price;
     string manufacturer;
     string lineColor;

public:
    WritingInstrument(double p, const  string& m, const  string& l)
        : price(p), manufacturer(m), lineColor(l) {}

    virtual ~WritingInstrument() {}

    // Виртуальная функция для вывода данных о товаре
    virtual void display() const = 0;

    // Общий интерфейс для получения цены
    double getPrice() const {
        return price;
    }
};