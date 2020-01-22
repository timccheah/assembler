#include <iostream>

using namespace std;

int main()
{
    string x = "hello";
    int UserChoice;
    double Voltage;
    double Resistance;
    double Amperage;

    cout << "Would you like to calculate 1)Amperage, 2)Voltage, or 3)Resistance?" << endl;
    cin >> UserChoice;

    if (UserChoice == 1) {
    cout << "Please enter the voltage" << endl;
    cin >> Voltage;

    cout << "Please enter the resistance" << endl;
    cin >> Resistance;

    double Amperage = Voltage / Resistance;

    cout << "The amperage is " << Amperage << endl;


    } else if(UserChoice == 2) {
    cout << "Please enter the amperage" << endl;
    cin >> Amperage;

    cout << "Please enter the resistance" << endl;
    cin >> Resistance;

    double Voltage = Amperage * Resistance;
    cout << "The voltage is " << Voltage << endl;


    } else if(UserChoice == 3) {
    cout << "Please enter the amperage" << endl;
    cin >> Amperage;

    cout << "Please enter the voltage" << endl;
    cin >> Voltage;

    double Resistance = Amperage / Voltage;
    cout << "The resistance is " << Resistance << endl;
    return 0;
    }


}
