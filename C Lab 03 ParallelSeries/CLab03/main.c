#include <stdio.h>
#include <stdlib.h>


int main()
{
    double ParallelResistance;
    double SeriesResistance;
    double TotalResistance;
    int userchoice;
    int resistance = 0;
    int i=0;
    int array[i];


    void getParallelResistance() {
        double pResistance = 0;
        size_t len = sizeof(array) / sizeof(array[0]);
        int length = (i-1);
        for (int i=0; i < length; i++ ) {
            double a = array[i];
            double b = 1/(double)a;
            pResistance = pResistance + (double) b;
          //  double pResistance = (double)b + (double)pResistance;

        }
        ParallelResistance = 1/ pResistance;


        printf("The resistance of the parallel circuit is  %lf \n", ParallelResistance);
    }

    void getSeriesResistance() {
        double pResistance = 0;
        size_t len = sizeof(array) / sizeof(array[0]);
        int length = (i-1);
        for (int i=0; i < length; i++ ) {
            double a = array[i];
            double b = 1/(double)a;
            pResistance = pResistance + array[i];
        }
        SeriesResistance = pResistance;
        printf("The resistance of the serial circuit is  %lf \n", pResistance);


    }

    void getTotalResistance() {
        if (userchoice == 1){
            getParallelResistance();
            TotalResistance = ParallelResistance;
            printf("The result is %lf ohms", TotalResistance);
        } else if (userchoice == 2){
            getSeriesResistance();
            TotalResistance = SeriesResistance;
            printf("The result is %lf ohms", TotalResistance);
        }
    }

    void addResistance(double pResistors) {

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
            int a = (i-1);
            array[a] = resistance;

        }

    } while (resistance != 0);
    getTotalResistance();
    return 0;
}
