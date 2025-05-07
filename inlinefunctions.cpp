#include<iostream>
using namespace std;

inline int getMaximum(int& a, int& b){
    return (a>b) ? a : b;
}

int main(){
    int a=1, b=2;
    int ans = 0;

    ans = getMaximum(a,b);
    cout << ans << endl;

    a = a + 3;
    b = b + 1;

    ans = getMaximum(a,b);



    return 0;   
}