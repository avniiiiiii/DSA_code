// print square cross on both  the diagonals

#include <iostream>4
using namespace std;

int main()
{
    int m;
    cout << "enter m:";
    cin >> m;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (i == j || i == m - j + 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}
//In a square grid, the main diagonal consists of positions where the row index (i) is equal to the column index (j).
//So, the condition if (i == j) checks whether the current position is on the main diagonal.
//The secondary diagonal consists of positions where the row index (i) is equal to the difference between the size of the square (m) 
//and the column index (j) plus one (i == m - j + 1).
//So, the condition if (i == m- j + 1) checks whether the current position is on the secondary diagonal.
//Here's how it works:

//If either of these conditions is true, it means the current position is on either the main diagonal or the secondary diagonal,
// and the program prints an asterisk (*) at that position.
//If neither condition is true, it means the current position is not on either diagonal, and the program prints a space.
//In this way, the program iterates through each position in the square and prints an asterisk on the diagonals, forming an X shape.






