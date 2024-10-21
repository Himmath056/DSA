#include<iostream>
#include<vector>
using namespace std;

bool isPossible(vector<int> &arr, int n, int m , int maxAT) //O(n)
{
    int painter =1, time=0;

    for(int i=0; i<n; i++)
    {
        if((time+arr[i] <= maxAT))
        {
            time +=arr[i];
        }else{
            painter++;
            time =arr[i];
        }
    }

    return painter <= n;
}

int minTimeToPaint(vector<int>& arr,int n, int m){  //O(log(sum) * n)
    int sum=0,maxval = INT32_MIN;

    for(int i=0;i<n;i++) //O(n)
    {
        sum += arr[i];
        maxval= max(maxval,arr[i]);

    }

    int st = maxval, end =sum, ans =-1;

    while(st <= end) //log(n)
    {
        int mid = st+(end-st)/2;

        if(isPossible(arr, n, m, mid))
        {//left
            ans =mid;
            end=mid-1;
        }else{//right
            st =mid+1;
        }
    }
}

int main(){
    vector<int> arr={40, 30 , 10, 20};
    int n=4, m=2;

    cout<<minTimeToPaint(arr,n,m)<<endl;
    return 0;
}