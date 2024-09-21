#include<bits/stdc++.h>
using namespace std;
// occurance of an char
int main() {
string s;
cin >> s;

int hash[26] = {0}; //if we take all letter or nums then took 256
for(int i =0; i < s.size();i++){
    hash[s[i]-'a']++; //here chanhes to hash[s[i]]
}
int q;
cin >> q;
while(q--){
    char c;
    cin >> c;
    cout << hash[c-'a'] << endl; //also here
}
    return 0;
} 