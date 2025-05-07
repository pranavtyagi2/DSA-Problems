#include<iostream>
using namespace std;        

int main(){
    // pointer to int is created and pointing to some garbage value;
    int num = 5;
    int a = num;
    a++;

    cout << num << endl;
    int *p = &num;
    cout << "before" << num << endl;
    (*p)++;
    cout << "after" << num << endl; 

    //pointer arithmetic
    int i=3;
    int *t = &i;
    //cout << *t++ << endl;
    *t = *t +1;
    cout << *t << endl;
    cout << "Before t" << t << endl;
    t = t + 1;
    cout << "After t" << t << endl;
    return 0;
}