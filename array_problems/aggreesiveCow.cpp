#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool isPossible(vector<int> & arr, int n, int c, int minAD)  //O(n)
{
    int cows =1, lastStalPos = arr[0];

    for(int i=1; i<n ; i++)
    {
        if(arr[i]-lastStalPos >= minAD){
            cows++;
            lastStalPos = arr[i];
        }

        if(cows == c)
            return true;
    }
    return false;
}



int getDistance(vector<int> & arr, int n, int c){ 
    sort(arr.begin(),arr.end());  //nlogn

    int st=1, end = arr[n-1]-arr[0] , ans = -1;

    while(st <= end){ //O(log(range))

        int mid = st+(end-st)/2;

        if(isPossible(arr, n ,c , mid))
        {
            ans = mid;
            st = mid+1;
        }else{
            end = mid-1;
        }
    }

    return ans;
}


int main()
{
    vector<int> arr ={1,2,8,4,9};
    int n=5, c=3;

    cout<<getDistance(arr,n,c);

    return 0;
}