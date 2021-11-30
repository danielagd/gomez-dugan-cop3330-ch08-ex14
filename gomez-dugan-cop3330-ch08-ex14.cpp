#include "header.h"

void powerOf10(const int base, int exp) {
    int num = 1;
    for (int i = 0; i < exp; i++)
        num *= base;
    cout << "The final calculation of " << base << " to the power of " << exp << " is " << num << ".\n";
}
int main() {
    const int magicNumber = 10;
    int exp;

    cout << "\nHello! Welcome to the conversation of const in functions.\nUsing const as a variable parameter is useful when the variable is a magic number.\n";
    cout << "In this example, I am using 10 as my magic number, or const, and calculating its power to a given exponent.\n\n";
    cout << "Please enter your desired exponent for the example: ";

    cin >> exp;
    powerOf10(magicNumber, exp);

    cout << "\nAs shown above, 10 is used as the base for the exponential calculation of 10 to the power of " << exp << ", your inputted exponent.\n";
    cout << "This is used to ensure the base of the calculation does not change which can lead into potential errors.\nThe reason why this may not be commonly used it because most people may need to change their 'magic number' or alter it throughout the program.\n";
    
}