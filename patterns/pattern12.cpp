#include <iostream>
using namespace std;

void print(int n)
{
    int space = 2 * (n - 1);
    for (int i = 1; i <= n; i++)
    {
        // numbrs
        for (int j = 1; j <= i; j++)
        {
            cout << j ;
        }
        // space
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        // numbers
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
        space -= 2;
    }
}

int main()
{
    int n;
    cin >> n;
    print(n);
}