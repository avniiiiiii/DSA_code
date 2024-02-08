// print all the ascii values and their equivalent characters of 26 alphabets using a while loop
#include <iostream>
using namespace std;

int main()
{
    // Start with the ASCII value of 'A'
    int ascii = static_cast<int>('A');
    // This program uses a while loop to iterate through the ASCII values of the uppercase letters from 'A' to 'Z'.
    // It prints each ASCII value along with its equivalent character. The loop continues until it reaches the ASCII value of 'Z'.

    while (ascii <= static_cast<int>('Z'))
    {
        // Print the ASCII value and its equivalent character
        cout << "ASCII Value: " << ascii << "   Equivalent Character: " << static_cast<char>(ascii) << endl;

        // Move to the next ASCII value
        ascii++;
    }
}
// the line int ascii = static_cast<int>('A');
//  is initializing the variable asciiValue with the ASCII value of the character 'A'.
// Here's a breakdown:
//'A': Represents the character 'A'.
// static_cast<int>: Performs a static cast to the type int.
//('A'): The character 'A' is explicitly cast to an integer.
