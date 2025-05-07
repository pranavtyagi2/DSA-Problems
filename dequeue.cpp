#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int>d;
    d.push_back(1);
    d.push_front(2);

   
    //d.pop_front();
    cout << endl;
    cout << "Print the element at first index->"<<d.at(1)<<endl;

    cout << "front"<<d.front()<<endl;
    cout << "back"<<d.back()<<endl;

    //to check empty or not
    cout << "Empty or not->"<<d.empty()<<endl;

    //to delete first element
    cout << "begin erase"<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout << "after erase"<<d.size()<<endl;
    for(int i:d){
        cout << i << " ";
    }


    return 0;
}