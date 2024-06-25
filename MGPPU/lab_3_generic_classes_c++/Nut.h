#ifndef NUT_H
#define NUT_H

class Nut {
private:
    int number; // Номер гайки

public:
    Nut(int num) : number(num < 0 ? 0 : num) {}
    int getNumber() const { return number; }
};

#endif