#include<iostream>
#include<climits>
using namespace std;

int largestSum(int arr[][3],int row,int col){
    int maxi = INT_MIN;
    int rowIndex = -1;
    for(int row=0;row<3;row++){
        int sum=0;
        for(int col=0;col<3;col++){
            sum+=arr[row][col];
        }
        if(sum>maxi){
        maxi=sum;
        rowIndex=row;
    }
    }
    cout << "The maximum sum is:" << maxi << endl;
    return rowIndex;

}

/*bool isPresent(int arr[][3],int target,int row, int col){
    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            if(arr[row][col]==target){
                return true;
            }
        }
    }
    return false;

}*/
/*
void PrintCalSum(int arr[][3],int row, int col){
    cout << "Printing Sum->" << endl;
    int sum=0;
    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            sum+=arr[row][col];
        }
        cout << sum  << " ";
    }
    cout << endl;
}*/

int main(){
    int arr[3][3];
    //create a 2D array
    // int arr[3][3] = {{1,11,111},{2,22,222},{3,33,333}};;
    cout << "Enter the 2D array:" << endl;
    /*//input the 2D array -> taking input row wise
    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            cin >> arr[row][col];
        }
    }
    */


 //input the 2D array -> taking column row wise
    for(int col=0;col<4;col++){
        for(int row=0;row<3;row++){
            cin >> arr[col][row];
        }
    }
    //print the 2D array
    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
    /*cout << "Enter the element to be searched:" << endl;
    int target;
    cin >> target;*/

    //search the element in the 2D array
    /*if(isPresent(arr,target,3,3)){
        cout << "Element found" << endl;
    }
    else{
        cout << "Not Found" << endl;
    }*/
    //PrintCalSum(arr,3,3);
    int ansIndex = largestSum(arr,3,3);
    cout << "Max row is at index:" << ansIndex << endl; 

    return 0;
}