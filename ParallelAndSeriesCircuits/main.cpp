#include <iostream>
#include "ParallelAndSeriesCircuit.h"

using namespace std;

int main()
{
    ParallelAndSeriesCircuit myParallelAndSeriesCircuit;
        double ParallelResistance;
        double TotalResistance;
        double SeriesResistance;
        char userChoice;

    cout << "Is this circuit type a (1) Parallel or (2) Series?" << endl;
    cin >> userChoice;
    myParallelAndSeriesCircuit.SetuserChoice(userChoice);

    cout << "Please enter the resistance or each resistors, type '0' when finished." << endl;

    int i=0;
    double resistance=0;
    do {
    cout << "      What is the resistance of resistor number " << (i+1) << endl;
        i++;
    cin >> resistance;
        if (resistance !=0) {
            myParallelAndSeriesCircuit.addResistance(resistance);
        }
    } while (resistance != 0);
    cout << myParallelAndSeriesCircuit.GetuserChoice() << endl;
    cout << "The resistance of the circuit is " << myParallelAndSeriesCircuit.GetTotalResistance() << " Ohms" <<endl;
}
