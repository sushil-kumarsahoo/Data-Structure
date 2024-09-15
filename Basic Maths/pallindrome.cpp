#include<iostream>
using namespace std;

int revnum(int N){
    int revN=0;
    int dup = N;
    while(N>0){
       int ld = N % 10;
       revN =(revN * 10) + ld;
       N = N / 10;
    }
   if(dup == revN) cout << "True";
   else cout << "false";
}
    

int main(){
    int N;
    cin >> N;
   revnum(N);
}