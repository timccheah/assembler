#include <iostream>

using namespace std;

// Formula: Xn = X(n-1) + X(n-2)
// for n>1

int number(int x) {
   if((x==1)||(x==0)) {
      return(x);
   }else {
      return(number(x-1)+number(x-2));
   }
}

int main() {
   int x , i=0;
   cout << "How large(in numbers) would you like your sequence to be? ";
   cin >> x;
   cout << "The sequence : ";
   while(i < x) {
      cout << " " << number(i);
      i++;
   }
   return 0;
}


