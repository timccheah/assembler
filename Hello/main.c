#include <stdio.h>
#include <stdlib.h>

// * = value of
// & = memory of

void getVoltage (double amperage, double resistance, double* voltage){
    *voltage = amperage * resistance;
}

void getAmperage (double* amperage, double resistance, double voltage) {
    *amperage = voltage / resistance;

}

void getResistance (double amperage, double* resistance, double voltage) {
    *resistance = voltage / amperage;
}

void getResult (double parameter, int* resultCode, double* value) {
// do omething complicated and return a code and message
// return an int and a string in Java

*resultCode = 777;
*value = 2.82;
}


double square (double* valueToSquare) {
*valueToSquare *= *valueToSquare;
return *valueToSquare;
}

int main() {
double userChoice;
double voltage;
double amperage;
double resistance;

printf("What would you like to calculate: 1)Voltage 2)Amperage 3)Resistance");
scanf("%lf", &userChoice);
// Voltage
if (userChoice == 1){
printf("We will calculate voltage\n");
printf("Please enter Amperage");
scanf("%lf", &amperage);
printf("Please enter Resistance");
scanf("%lf", &resistance);
getVoltage(amperage, resistance, &voltage);
printf("The voltage is  %lf", voltage);

} else if (userChoice == 2) {
printf("We will calculate amperage\n");
printf("Please enter voltage");
scanf("%lf", &voltage);
printf("Please enter resistance");
scanf("%lf", &resistance);
getAmperage(&amperage, resistance, voltage);
printf("The amperage is  %lf", amperage);


} else if (userChoice == 3) {
printf("We will calculate resistance\n");
printf("Please enter voltage");
scanf("%lf", &voltage);
printf("Please enter amperage");
scanf("%lf", &amperage);
getResistance(amperage, &resistance, voltage);
printf("The resistace is %lf", resistance);

}
/*
printf("Please enter the voltage");
scanf("%lf", &voltage);
printf("The voltage is %lf", voltage);


getVoltage(amperage, resistance, &voltage);
printf("The voltage is %lf", voltage);
printf("Resistance is %lf", resistance);



int result;
double value;
getResult(5,&result,&value);
printf("This code is %d and the answer is %lf\n",result,value);
return 0;
*/

/*
double value = 5;
square(&value);

printf("The value is %1f\n",value);

return 0;
*/
/*
    int phillip = 5; //0101
    int chad = 13;   //1101
    int a = 5;
    int b = 10;
    int c = 11;
    // int pointer
    int x = &a;
    int y = &b;
    int z = &c;


    printf("x = 0x%x and y = 0x%x and z = 0x%x and a = %d and b = %d and c = %d\n\n" ,x,y,z,a,b,c);

    //printf("the bitwise and is %d\n", phillip & chad);
    //scanf();
*/


}
