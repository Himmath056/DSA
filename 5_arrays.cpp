// Arrays
// - same type elements , contiguous in memory and linear


// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[5]={1,2,3,4,5};
//     cout << arr[0] <<endl;
//     cout << arr[4] <<endl;

//     for(int i=0; i< 5 ; i++){
//             cin>>arr[i];
//     }

//     for(int i=0; i< sizeof(arr)/sizeof(int) ; i++){
//             cout<<" array value at index "<<i<<" is "<<arr[i]<<endl;
//     }
//     return 0;
// }


// 1.find smallest / largest in array
//  min, max are built in function
// #include<iostream>
// using namespace std;
// int main()
// {
//     int num[5] ={34 , 43, 54, 12, 28};
//     int smallest =INT32_MAX, largest=INT32_MIN ,minIndex , maxIndex;

//     for(int i=0; i< sizeof(num)/sizeof(int) ; i++){
//             // smallest = min(num[i], smallest);
//             if(smallest>num[i]){
//                 smallest =num[i];
//                 minIndex=i;
//             }

//             // largest = max(num[i],largest);
//             if(largest<num[i]){
//                 largest =num[i];
//                 maxIndex =i;
//             }
//     }

//     cout<<"Smallest no. is "<<smallest <<" prsent at index "<<minIndex<<endl;
//     cout<<"Largest no. is "<<largest<<" prsent at index "<<maxIndex;
//     return 0;
// }



// pass by reference for array

// #include<iostream>
// using namespace std;

// void fun(int arr[],int size){
//     for(int i=0; i<size; i++)
//     {
//         arr[i] +=2;
//     }
// }
// int main()
// {
//     int num[5] ={34 , 43, 54, 12, 28};
//     fun(num, 5);

//     for(int i=0; i<5; i++)
//     {
//         cout<< num[i] <<endl;
//     }
//     return 0;
// }


// Linear Search
// #include<iostream>
// using namespace std;
// int linearSearch(int arr[],int sz, int target){
//     for(int i=0;i<sz ; i++){
//         if(target == arr[i])
//         {
//             return i;
//         }
//     }
//     return -1;
// }
// int main()
// {
//     int arr[] ={4,5,2,3,7,8,6};
//     int sz=6 , target=7;
//     cout<< linearSearch(arr , sz , target) <<endl;
//     return 0;
// }



// Reverse an array   - using 2 pointer
#include<iostream>
using namespace std;

int reverseArr(int arr[],int sz){
   int start =0, end= sz-1;
   while(start<end){
        swap(arr[start], arr[end]);
        start++;
        end--;
   }
}
int main()
{
    int arr[] ={4,5,2,3,7,8,6};
    int sz=7 ;
    reverseArr(arr,sz);
    for(int i=0; i<sz ;i++){
        cout<<"at index "<<i<<"is "<<arr[i] <<endl;

    }
    return 0;
}