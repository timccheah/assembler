#include <iostream>
#include "Circuit.h"

using namespace std;

//int square(int x);

int main()
{
    Circuit myCircuit;
    double Voltage;

    cin >> "Would you like to calculate voltage, amperage, or resistance?";

    cout << "Please enter voltage" << endl;
    cin >> Voltage;
    myCircuit.SetVoltage(Voltage);

    cout << myCircuit.GetVoltage() << endl;


    // int x = 2;
    //cout << square(x) << endl;

}

