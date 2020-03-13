#include <stdio.h>
#include <stdlib.h>

int main()
{

int n=0;

int arr1[n];
int arr2[n];
int arr3[n];
int vSize;


    printf("How large should the vector be? \n");
    scanf(" %d", &vSize);

    for (int n=0; n<vSize; ++n){
        int v1Num;
        printf("What is the number in the first vector? \n");
        scanf(" %d",  &v1Num);
        arr1[n] = v1Num;
    }

    for (int n=0; n<vSize; ++n){
        int v2Num;
        printf("What is the number in the second vector? \n");
        scanf(" %d",  &v2Num);
        arr2[n] = v2Num;
    }

    void calculateHadamard() {
        for (int n=0; n<vSize; ++n) {
        int a = arr1[n];
        int b = arr2[n];
        int c = (int)a * (int)b;
        arr3[n] = c;

        }

    printf(" The Hadamard Product is ");
   for(int a = 0; a < vSize; a++)
      printf(" %d", arr3[a]);
   return 0;
    }

    calculateHadamard();
    return 0;
}
