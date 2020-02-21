#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 5;
    int b = 10;
    int c = 11;
    int x = &a;
    int y = &b;
    int z = &c;


    printf("x = 0x%x and y = 0x%x and z = 0x%x and a = %d and b = %d and c = %d\n\n" ,x,y,z,a,b,c);

    //scanf();
    return 0;
}
