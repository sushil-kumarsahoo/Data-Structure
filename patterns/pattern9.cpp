#include <bits/stdc++.h>
using namespace std;
 void print1(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0;  j < n - i - 1;  j++)
        {
            cout << " ";
        }
        // stars

        for (int j = 0;  j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 0;  j < n - i - 1;  j++)
        {
            cout << " ";
        }
        cout << endl;
    } 
}
void print2(int n)
{
   
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0;  j < i;  j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 0;  j < 2*n-(2*i+1) ; j++)
        {
            cout << "*";
        }
        // space
       for (int j = 0;  j < i;  j++)
        {
            cout << " ";
        }
        cout << endl;
    }
    
}

int main()
{
    int n;
    cin >> n;
    print1(n);
    print2(n);
}