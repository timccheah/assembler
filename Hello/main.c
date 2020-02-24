#include <stdio.h>
#include <stdlib.h>

// * = value of
// & = memory of

double square (double* valueToSquare) {
*valueToSquare *= *valueToSquare;
return *valueToSquare;
}

int main() {
double value = 5;
square(&value);

printf("The value is %1f\n",value);

return 0;

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
