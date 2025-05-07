#include<iostream>
#include<vector>
using namespace std;
int binarySearch(int arr[],int size,int key){
    int start = 0;
    int end = size-1;
    int mid = start+(end-start)/2;

    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        //go to right wala part
        if(key >= arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid-1;
        }
        mid = start+(end-start)/2;
    }
    return -1;
}
int main(){
    int even[6]= {2,4,6,8,12,18};
    int odd[5]= {1,3,5,7,9};
    int index(binarySearch(odd,5,6));

    cout << "index of 12 is" << index << endl;
}