// given an array , arr[] containing 'n' integers, the task is to find an integer (say k) such that after replacing each every index of the array by|a-k|where(i belongs[1,n]), results in a sorted array.if no such integer exists that satisfies the above condition then return -1;
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[] = {5,3,10};
    int n = 3;
    for(int i=0;i<=n;i++){
        cout<<arr[i]<<" ";
    }

}