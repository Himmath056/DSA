#include<iostream>
using namespace std;

void  selectionSort(int arr[], int n) //O(n^2)
{

    for(int i=0; i<n; i++)
    {
        int smallIdx = i;
        for(int j=i+1 ; j <n; j++)
        {
            if(arr[j] > arr[smallIdx]){
                smallIdx = j;
            }
        } 
        swap(arr[i],arr[smallIdx]);
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
    selectionSort(arr, n);
    prinArray(arr, n);
    

    return 0;
}