#include<bits/stdc++.h>
using namespace std;
//print integers in reversly by backtracking
void f(int i,int n){
    if(i>n) return;
    f(i+1,n);
    cout << i << endl;
}
        

int main(){
   int n;
   cin >> n;
   f(1,n);
    return 0;
}