// moores algorithm for majority element in an n array

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> nums={1,1,1,2,2};
    int n= nums.size();
    int freq=0, ans=0;

    for(int i=0; i<n; i++){
        if(freq == 0)
            ans = nums[i];
        
        if(ans == nums[i]){
            freq++;
        }else{
            freq--;
        }
    }

    cout<<ans;
    return 0;
}