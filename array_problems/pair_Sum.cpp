// return pair in sorted array with target sum

#include<iostream>
#include<vector>
using namespace std;

vector<int> pairSum(vector<int> nums ,int target){
    vector<int> ans;
    int n =nums.size();
    // for(int i=0; i<n ; i++){

    //     for(int j=i; j<n; j++){

    //         if(nums[i]+nums[j] == target){
    //             ans.push_back(i);
    //             ans.push_back(j);
    //             return ans;
    //         }
    //     }
    // }
    int i=0,j=nums.size();
    while(i<j){
        int sum =nums[i]+nums[j];
        if(sum == target){
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }else if(sum>target){
                  j--;
        }else
            i++;
          
    }
    return ans;
}

int main()
{
    vector<int> arr ={2,7, 11, 15};
    int target=9;
    
    vector<int> ans =pairSum(arr,target);
    cout<<ans[0]<<" "<<ans[1];
    
    return 0;
}