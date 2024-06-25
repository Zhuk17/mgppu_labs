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

// Класс для гелиевой ручки
class GelPen : public WritingInstrument {
private:
    double gelMass;

public:
    GelPen(double p, const  string& m, const  string& l, double gm)
        : WritingInstrument(p, m, l), gelMass(gm) {}
    void display() const override {
         cout << "Гелиевая ручка: Цена = " << price << ", Производитель = " << manufacturer
                  << ", Цвет линии = " << lineColor << ", Масса геля = " << gelMass <<  endl;
    }
};

// Класс для шариковой ручки
class BallpointPen : public WritingInstrument {
private:
    bool refillable;

public:
    BallpointPen(double p, const  string& m, const  string& l, bool r)
        : WritingInstrument(p, m, l), refillable(r) {}
    void display() const override {
         cout << "Шариковая ручка: Цена = " << price << ", Производитель = " << manufacturer
                  << ", Цвет линии = " << lineColor << ", Сменные стержни = " << (refillable ? "да" : "нет") <<  endl;
    }
};

// Класс для простого карандаша
class Pencil : public WritingInstrument {
private:
    std::string hardness;
    double length;

public:
    Pencil(double p, const string& m, const string l, const string& h, double len)
        : WritingInstrument(p, m, l), hardness(h), length(len) {}
    
    void display() const override {
       cout << "Простой карандаш: Цена = " << price << ", Производитель = " << manufacturer
                  << ", Твердость = " << hardness << ", Длина = " << length << endl;
    }
};

// Класс для маркера
class Marker : public WritingInstrument {
private:
    double lineWidth;

public:
    Marker(double p, const string& m, const string& l, double lw)
        : WritingInstrument(p, m, l), lineWidth(lw) {}
    
    void display() const override {
        cout << "Маркер: Цена = " << price << ", Производитель = " << manufacturer
                  << ", Ширина линии = " << lineWidth << endl;
    }
};

// Абстрактный класс для канцелярских товаров не предназначенных для письма
class Stationery : public WritingInstrument {
public:
    Stationery(double p, const string& m)
        : WritingInstrument(p, m, "") {}

    virtual ~Stationery() {}
};

// Класс для тетради
class Notebook : public Stationery {
private:
    string ruling;
    int pageCount;

public:
    Notebook(double p, const string& m, const string& r, int pc)
        : Stationery(p, m), ruling(r), pageCount(pc) {}

    void display() const override {
        cout << "Тетрадь: Цена = " << price << ", Производитель = " << manufacturer
                  << ", Линовка = " << ruling << ", Количество страниц = " << pageCount << endl;
    }
};
// Функция для подсчета общей стоимости всех письменных принадлежностей
double calculateTotalPrice(const  vector<WritingInstrument*>& instruments) {
    double total = 0.0;
    for (const auto& instrument : instruments) {
        total += instrument->getPrice();
    }
    return total;
}

int main() {
    // Вектор для хранения всех письменных принадлежностей
     vector<WritingInstrument*> inventory;

    // Добавление в инвентарь различных письменных принадлежностей
    inventory.push_back(new GelPen(50, "Pilot", "синий", 10));
    inventory.push_back(new BallpointPen(30, "BIC", "черный", true));
    // ...

    // Подсчет и вывод общей стоимости
    double totalPrice = calculateTotalPrice(inventory);
     cout << "Общая цена всех письменных принадлежностей: " << totalPrice <<  endl;

    // Освобождение памяти
    for (auto& item : inventory) {
        delete item;
    }
    inventory.clear();

    return 0;
}