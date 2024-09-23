#include<bits/stdc++.h>
using namespace std;

int main()
{
    //creation
    unordered_map<string, int> m;

    //insertion 
    //1
    pair<string,int> p = make_pair("sushil", 3);
    m.insert(p);

    //2
    pair<string, int> pair2("kumar", 2);
    m.insert(pair2);

    //3
    m["sahoo"] = 1;

    m["sahoo"] = 2;

    cout << m["sushil"] << endl;
    cout<<m.at("sahoo") << endl;

    //cout<<m.at("susil") << endl; //throw error
    cout<<m["susil"] << endl; // it creates an entry bcoz there is no such element so gives zero
    cout<<m.at("susil")<< endl; //it gives zero bcoz after the entry of element it assigns a index
    cout <<m.size() << endl;

    // to check preseence
    cout << m. count("bro") << endl; //it gives 0 bcpoz there is no such element
    
    m.erase("kumar");
    cout << m.size() << endl;

//access all the values one ny one 
for(auto i:m){
    cout << i.first << " " << i.second << " " << endl;
}

//iterator
unordered_map<string, int> :: iterator it = m.begin();

while(it != m.end()) {
    cout << it->first << " " << it->second << endl;
    it++;
}
    return 0;
}