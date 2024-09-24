// print all subarrays

// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     int n=7;
//     int arr[7] ={3,-4,5,4,-1,7,-8};
//     int maxsum =INT32_MIN;

//     for(int start=0; start<n ; start++){
//         int curSum=0;
//         for(int end=start; end<n; end++){
//             curSum +=arr[end];        
//             maxsum = max(curSum,maxsum);
//         }
//     }
//     cout<<"The maximum sum of sub array is :"<<maxsum;
//     return 0;
// }


// Kadanes algorithm
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n=7;
    int arr[7] ={3,-4,5,4,-1,7,-8};
    int maxsum =INT32_MIN;
    int curSum=0;

    for(int start=0; start<n ; start++){
        curSum += arr[start];
        maxsum=max(curSum,maxsum);
        if(curSum<0)
            curSum=0;
    }
    cout<<"The maximum sum of sub array is :"<<maxsum;
    return 0;
}

