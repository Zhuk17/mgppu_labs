#include "Battery.h"
#include "Accumulator.h"
#include "PowerItemList.h"

int main() {
    PowerItemList<Battery> batteries {
        {Battery::AA, 2000, "Energizer", 3000},
        {Battery::AAA, 1200, "Duracell", 2000},
        {Battery::AA, 1500, "Ansmann", 2500},
        {Battery::AAA, 1800, "Camelion", 2800},
        {Battery::AA, 2100, "Kodak", 3100}, 
    };

    batteries.calculateDischargeTime(100);
    
    return 0;
}