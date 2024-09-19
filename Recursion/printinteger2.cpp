#include<bits/stdc++.h>
using namespace std;
//print integers in linearly by backtracking
void f(int i,int n){
    if(i<1) return;
    f(i-1,n);
    cout << i << endl;
}
        

int main(){
   int n;
   cin >> n;
   f(n,n);
    return 0;
}