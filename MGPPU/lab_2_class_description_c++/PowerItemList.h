#ifndef POWERITEMLIST_H
#define POWERITEMLIST_H

#include <vector>
#include <iostream>

template <typename T>
class PowerItemList : public std::vector<T> {
public:
    PowerItemList(std::initializer_list<T> list) : std::vector<T>(list) {}

    void calculateDischargeTime(double devicePowerConsumption) {
        for (const T& item : *this) {
            double dischargeTime = item.getCapacity() / devicePowerConsumption;
            std::cout << "Время разрядки для " << item.getBrand() << ": " 
                      << dischargeTime << " часов" << std::endl;
        }
    }
};

#endif