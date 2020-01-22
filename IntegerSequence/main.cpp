#include <iostream>

using namespace std;

int main()
{


    int sequences;
    int number1 = 0;
    int number2;
    int total = 0;

		for (int n = 1; n <= sequences; ++n) {
			// save number1 to the input
			number1 = inputFile.nextInt();
			// save number2 to the input
			number2 = inputFile.nextInt();
			// loop number1 to number2
			for (int n1 = number1; n1 <= number2; n1++) {
				// OUTPUT
				// find the total of the loop
				total = n1 + total;
			}
			// display output
			outputFile.println(total);
			// reset total to "0"
			total = 0;
		}
    cout << "Hello world!" << endl;
    return 0;
}
