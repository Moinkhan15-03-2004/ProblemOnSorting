// Given an array with N distict elemetns,convert the given array to a from 0 to n-1 the order of element in the same i.e 0 is placed in the place of the smallest element 1 is placed for the second smallest element n-1 is placed for the largest element
#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int main(){
    int arr[] = {19,12,23,8,16};
    int n = 5;
    vector<int>v(n,0);
    int x = 0;
    for(int i=0;i<n;i++){
        int min = INT_MAX;
        int mindx = -1;
        for(int j=0;j<n;j++){
            if(v[j]==1) continue;
            else{
                if(min>arr[j]){
                    min = arr[j];
                    mindx = j;
                }
            }
        }
        arr[mindx] = x;
        x++;
    }
}