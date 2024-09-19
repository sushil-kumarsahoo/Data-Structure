#include<bits/stdc++.h>
using namespace std;
void f(int i, int sum){
    if(i<1){
        cout << sum ;
        return;
    }
     f(i-1, sum+i);
}
int main(){
  int i,n,sum;
  cin >>  n ;
  f(n,0);
  return 0;  
}