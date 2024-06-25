#include <iostream>
#include <string>

using namespace std;

class Metal {
protected:
    float percentageOfMetal; 
     string color; 
    double price; 

public:
    Metal(float percentage,  string clr, double prc)
        : percentageOfMetal(percentage), color(clr), price(prc) {}

    virtual ~Metal() {}

    
    virtual void display() const = 0;

   
    float getPercentageOfMetal() const {
        return percentageOfMetal;
    }

     string getColor() const {
        return color;
    }

    double getPrice() const {
        return price;
    }

    void setPercentageOfMetal(float percentage) {
        this->percentageOfMetal = percentage;
    }

    void setColor(const  string& clr) {
        color = clr;
    }

    void setPrice(double prc) {
        price = prc;
    }
};


class Gold : public Metal {
public:
    Gold(float percentage,  string color, double price)
        : Metal(percentage, color, price) {}

    void display() const override {
         cout << "Золото: " << percentageOfMetal << "% " << color << " цена: " << price <<  endl;
    }
};


class Silver : public Metal {
public:
    Silver(float percentage,  string color, double price)
        : Metal(percentage, color, price) {}

    void display() const override {
         cout << "Серебро: " << percentageOfMetal << "% " << color << " цена: " << price <<  endl;
    }
};


class Copper : public Metal {
public:
    Copper(float percentage,  string color, double price)
        : Metal(percentage, color, price) {}

    void display() const override {
         cout << "Медь: " << percentageOfMetal << "% " << color << " цена: " << price <<  endl;
    }
};

int main() {
    Gold gold(99.9, "Желтый", 1500.00);
    Silver silver(92.5, "Белый", 30.00);
    Copper copper(100.0, "Красный", 5.00);

    gold.display();
    silver.display();
    copper.display();

    return 0;
}