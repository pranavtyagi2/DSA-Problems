#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string>m;
    m[1] = "Tyagi";
    m[13] = "Pranav";
    m[3] = "Kumar";
    m.insert({5,"bheem"});
    cout << "before erase->"<<endl;
    for(auto i:m){
        cout << i.first<<" "<<i.second << endl;
    }
    cout << "finding 13->"<<m.count(13)<<endl;
    m.erase(13);
    cout << "after erase"<<endl;
    for(auto i:m){
        cout << i.first<<" "<<i.second << endl;
    }
}