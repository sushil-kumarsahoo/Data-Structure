#include<bits/stdc++.h>
using namespace std;

void divisors(int N){
    vector<int> ls;
    for(int i=1;i<=sqrt(N);i++){
        if(N%i==0){
           ls.push_back(i);
           if((N/i) != i){
            ls.push_back(N/i);
           }
        }
    }
    sort(ls.begin(), ls.end());
    for(auto it : ls) cout << it << " ";
}

int main(){
    int N;
    cin >> N;
   divisors(N);
}