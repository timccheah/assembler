#include <stdio.h>
#include <stdlib.h>

    double ParallelResistance;
    double SeriesResistance;
    double TotalResistance;




void getSeriesResistance() {

}

void getTotalResistance() {
    printf(" HELLO ");
}

void addResistance(double pResistors) {

}

int main()
{
    int userchoice;
    int resistance = 0;
    int i=0;
    int array[i];


    void getParallelResistance() {
        double pResistance = 0;

        size_t len = sizeof(array) / sizeof(array[0]);
        printf(len);
        for (int i=0; i < len; i++ ) {
            pResistance = 1/array[i] + pResistance;
        }
        ParallelResistance = 1/pResistance;
    }

    void getSeriesResistance() {

    }

    void getTotalResistance() {
        if (userchoice == 1){
            getParallelResistance();
            TotalResistance = ParallelResistance;
        } else if (userchoice == 2){
            getSeriesResistance();
            TotalResistance = SeriesResistance;
        }
    }


    printf("Is this circuit type a (1) Parallel or (2) Series?\n");
    scanf(" %d", &userchoice);

    printf("Please enter the resistance of each resistors, type '0' when finished. \n\n");


    do {
        printf("  What is the resistance of resistor number %d", (i+1));
        printf(" \n");
        i++;
        scanf(" %d", &resistance);
        if(resistance !=0) {

        }


    } while (resistance != 0);

    printf("The resistance of the circuit is ");
    getTotalResistance();
    return 0;
}
