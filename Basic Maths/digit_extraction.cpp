#include<iostream>
using namespace std;

int count(int n){
    int cnt=0;
    while(n > 0){
        int lastDigit = n % 10;
        cnt = cnt + 1;
        n = n/10;
       // return cnt;
    }
    
    cout << cnt;
}

int main(){
    int n;
    cin >> n;
    count(n);
}