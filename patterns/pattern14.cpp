#include <iostream>
using namespace std;

void print(int n)
{
    int num=1;
    for (int i = 0; i < n; i++)
    {
     for(char ch='A'; ch<='A' + i;ch++){
         cout<< ch << " ";
      
     }
     cout << endl;
    }
    
}

int main()
{
    int n;
    cin >> n;
    print(n);
}