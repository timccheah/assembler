#include <stdio.h>
#include <stdlib.h>
/*
void CalculateTotal(int x){
    if ((x==1)||(x==0)) {
        return(x);
    } else {
    return (number(&x - 1)+number(&x - 2));
    }

}

int main() {
    int x;
    int i = 0;

    printf("How large(in numbers) would you like your sequence to be?\n");
    scanf("%lf", &x);
    printf("The sequence :  ");
    while(i < x) {
        printf(number(i));
        i++;
    }
    return 0;
*/
//    int* myPointer = malloc(sizeof(int));
//    free(myPointer)

void CalculateTotal(double sequence, double* total){
    if((sequence==1)||(sequence==0)) {
      return(0);
   }else {
//    printf(CalculateTotal(sequence-1)+CalculateTotal(sequence-2));
//      *total = CalculateTotal(*sequence-1)+CalculateTotal(*sequence-2);
   }
}

int main(){
    double total;
    double sequence;
    double i = 0;
    printf("How large(in numbers) would you like your sequence to be?\n");
    scanf("%lf", &sequence);
    printf("%lf", sequence);
    while (i<sequence){
        CalculateTotal(sequence, &total);
    }

    printf("%lf", total);
}

