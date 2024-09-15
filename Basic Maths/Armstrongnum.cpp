#include<iostream>
using namespace std;

int armstnum(int N){
    int dup = N;
    int sum = 0;
    while(N > 0){
         int ld = N % 10;
        sum = sum + (ld*ld*ld);
        N = N/ 10;
    }
    if( sum == dup) cout << "true";
    else cout << "false";
}
int main(){
    int N;
    cin >> N;
    armstnum(N);
}