#include<bits/stdc++.h>
using namespace std;

int f(int i,int n){
       if(n == 1) return i;
      return i*f(i,n-1);
}
int main(){
    int n;
    int i;
    cin >> i ;
    cin >> n;
     cout << f(i,n);
    return 0;
}