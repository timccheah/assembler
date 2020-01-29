#include <iostream>
#include "Circuit.h"

using namespace std;

//int square(int x);

int main()
{
    Circuit myCircuit;
    double Voltage;
    double Amperage;
    double Resistance;
    double userChoice;


    cout << "Would you like to calculate 1)Voltage, 2)Amperage, or 3)Resistance?" << endl;
    cin >> userChoice;

    // Calculate Voltage
    if (userChoice == 1) {
    cout << "Let's calculate the voltage!" << endl;
    cout << "What is the Amperage?" << endl;
    cin >> Amperage;
    myCircuit.SetAmperage(Amperage);
    cout << "What is the Resistance?" << endl;
    cin >> Resistance;
    myCircuit.SetResistance(Resistance);
    cout << myCircuit.calculateVoltage() << endl;

    // Calculate Amperage
    } else if (userChoice == 2) {
    cout << "Let's calculate the amperage!" << endl;
    cout << "What is the Voltage?" << endl;
    cin >> Voltage;
    myCircuit.SetVoltage(Voltage);
    cout << "What is the Resistance?" << endl;
    cin >> Resistance;
    myCircuit.SetResistance(Resistance);
    cout << myCircuit.calculateAmperage() << endl;

    // Calculate Resistance
    } else if (userChoice == 3) {
    cout << "Let's calculate the resistance!" << endl;
    cout << "What is the Voltage?" << endl;
    cin >> Voltage;
    myCircuit.SetVoltage(Voltage);
    cout << "What is the Amperage?" << endl;
    cin >> Amperage;
    myCircuit.SetAmperage(Amperage);
    cout << myCircuit.calculateResistance() << endl;
    }


}

