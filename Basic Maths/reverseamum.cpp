#include<iostream>
using namespace std;

int revnum(int N){
    int revN=0;
    while(N>0){
       int ld = N % 10;
       revN =(revN * 10) + ld;
       N = N / 10;
    }
    cout << revN;
}
    

int main(){
    int N;
    cin >> N;
   revnum(N);
}