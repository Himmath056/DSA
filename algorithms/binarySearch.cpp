// Binary Search

#include<iostream>
#include<vector>
using namespace std;

int  binarySearch(vector<int> &arr, int tar){
    int st=0, end=arr.size();

    while(st <= end)
    {
        int mid =st +(end-st)/2;

        if(tar > arr[mid])
            st=mid+1;
        else if(tar < arr[mid])
            end = mid-1;
        else if(arr[mid] == tar)
            return mid;
    }

    return -1;
}

int  recursiveBS(vector<int> &arr, int tar, int st, int end){
   

    if(st <= end)
    {
        int mid =st +(end-st)/2;

        if(tar > arr[mid])
           recursiveBS(arr,tar,mid+1,end);
        else if(tar < arr[mid])
            recursiveBS(arr,tar,st,mid-1);
        else if(arr[mid] == tar)
            return mid;
    }

    return -1;
}

int main()
{
    vector<int> arr1 ={0,1,2,4,6,8,12}; //odd
    int target=15; 
    // cout<<"prsent at index :"<< binarySearch(arr1,target) <<endl;
    cout<<"prsent at index :"<< recursiveBS(arr1,target,0,arr1.size()-1) <<endl;

    vector<int> arr2 ={0,1,3,5,7,10}; //even
    target=5;
    // cout<<"prsent at index :"<<binarySearch(arr2,target)<<endl;
    cout<<"prsent at index :"<<recursiveBS(arr2,target,0,arr1.size()-1)<<endl;

    return 0;

}