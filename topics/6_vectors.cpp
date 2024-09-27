// vectors are array like
// they rae dynamic in nature means dont have fix size
// stl containers - vectors ,

// #include<iostream>
// #include<vector>
// using namespace std;

// int main()
// {
//     // vector<int> vec;
//     // vector<int> vec ={1,2,3};
//     // vector<int> vec(3,0) ;
//     // cout<<vec[0]<<endl;
//     // cout<<vec[1];
//     vector<char> vec={'a','b','c'};

//     for(char val: vec){
//         cout<< val << endl;
//     }
//     return 0;
// }


// vector functions -> size, push_back, pop_back ,front , back , at

// #include<iostream>
// #include<vector>
// using namespace std;

// int main()
// {
   
//     vector<char> vec={'a','b','c'};
//     vec.push_back('d');
//     vec.push_back('e');
//     vec.pop_back();
    
//     cout<< vec.size()<<endl;
//     cout<< vec.front()<<endl;
//     cout<< vec.back()<<endl;
//     cout<< vec.at(2)<<endl;
    
//     return 0;
// }




// Static and dynamic allocation
// static -> compile time , created in stack memory
// dynamic -> run time , allocated in heap memory
// in vector the initial capacity will be 2 then when become full it get double

// #include<iostream>
// #include<vector>
// using namespace std;

// int main()
// {
   
//     vector<char> vec;
//     vec.push_back('d');
//     vec.push_back('e');
//     vec.push_back('f');
//     vec.push_back('g');
//     vec.push_back('g');
    
    
//     cout<<vec.size()<<endl;
//     cout<<vec.capacity()<<endl;
    
//     return 0;
// }



//1. Single Number

// #include<iostream>
// #include<vector>
// using namespace std;

// int main()
// {
//     vector<int> nums={4,2,1,2,1};
//     int ans=0;
//     for(int val: nums){
//         ans ^=val;
//     }
//     cout<<"The Unique single number is :"<<ans;

//     return 0;
// }


// Linear search on vector

#include<iostream>
#include<vector>
using namespace std;
void linearSearch(vector<int> nums, int target){
    for(int val : nums){
        if(val == target){
             cout<<"The taget element is present in array "<<endl;
            return;
        }
    }
    cout<<"The target is not present in array"<<endl;
    
}

void reverseVector(vector<int> & nums){
    int start=0, end=nums.size()-1;
    while(start<end){
        swap(nums[start],nums[end]);
        start++;
        end--;
    }
}

int main()
{
    vector<int> nums={4,85,34,23,12};
    int target =12;
    linearSearch(nums,target);
    reverseVector(nums);
    for(int val: nums){
        cout<<val<<" ";
    }
    return 0;
}