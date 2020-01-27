#include "Circuit.h"

Circuit::Circuit()
{
    //ctor
}

Circuit::~Circuit()
{
    //dtor
}


double Circuit::calculateVoltage() {
    Voltage = Amperage * Resistance;
    return Voltage;
}
double Circuit::calculateAmperage() {
    Amperage = Voltage * Resistance;
    return Amperage;
}
double Circuit::calculateResistance() {
    Resistance = Voltage / Amperage;
    return Resistance;
}
