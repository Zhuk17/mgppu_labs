#ifndef BOLT_H
#define BOLT_H

class Bolt {
private:
    int number; // Номер болта

public:
    Bolt(int num) : number(num < 0 ? 0 : num) {}
    int getNumber() const { return number; }
};

#endif