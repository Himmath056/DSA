#include<iostream>
using namespace std;

void  insertionSort(int arr[], int n) //O(n^2)
{

    for(int i=1; i<n; i++)
    {
        int curr = arr[i], prev = i-1;
        
        while(prev >= 0 && arr[prev] < curr ){
            arr[prev+1] = arr[prev];
            prev--;
        }

        arr[prev+1] = curr; //placing current in correct position
    }
}

void prinArray(int arr[], int n){
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int n=5;
    int arr[] ={4,1,5,2,3};
    insertionSort(arr, n);
    prinArray(arr, n);
    

    return 0;
}