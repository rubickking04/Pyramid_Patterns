#include <iostream>
using namespace std;

int main()
{
    int n = 11;
    string a, b, c, d;
    int x = n / 2 + 1, z = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n / 2 + 1; j++)
        {
            a = (j == x || j == n / 2 + 1) ? "*" : " ";
            cout << a;
        }
        b = (i <= n / 2) ? x-- : x++;
        cout << b;
        for (int k = n; k <= n; k++)
        {
            cout << "* ";
        }
        for (int j = 1; j <= z; j++)
        {
            c = (j == 1 || j == z) ? "*" : " ";
            cout << c;
        }
        d = (i <= n / 2) ? z++ : z--;
        cout << d;
        cout << endl;
    }
    return 0;
}