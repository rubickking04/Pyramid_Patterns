#include <iostream>
using namespace std;

// Compiler version g++ 6.3.0

int main()
{
    int n;
    string a;
    cout << "Enter number of rows: ";
    cin >> n;
    for (int i = n; i >= 1; i--)
    {
        for (int k = i; k < n; k++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            a = (i == n || j == 1 || j == 2 * i - 1) ? "*" : "*";
            cout << a;
        }
        cout << endl;
    }
    return 0;
}