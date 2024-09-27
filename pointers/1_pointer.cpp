
// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     int a=10;
//     int *p= &a;
//     int** cp =&p;
//     // reference pointer
//     cout<<&a<<endl;
//     cout<<&p<<endl;
//     cout<<cp<<endl;
//     // ḍereference
//     cout<<*(&a)<<endl;
//     cout<<*(p)<<endl;
//     cout<<*(*(cp))<<endl;

//     // null pointer
//     int** ptr=NULL ;
//     cout<<ptr<<endl;
//     return 0;
// }




// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     int a=10;
//     int *p= &a;
//     int** cp =&p;
    
//     cout<<p<<endl;
//     cout<<*cp<<endl;
//     cout<<&a<<endl;

//     return 0;
// }



// Pass by Reference

// #include<iostream>
// #include<vector>
// using namespace std;

// void changeA(int &ptr){  // pass by reference by alias
//     // *ptr = 20;
//     ptr =20;
// }
// int main()
// {
//     int a=10;
//     changeA(a);

//     cout<<a<<endl;

//     return 0;
// }





// Array Pointers

#include<iostream>
#include<vector>
using namespace std;


int main()
{
    int arr[] ={1,2,3,4,5};  //constant pointer

    // int *p= &arr[0];
    // p++;
    // p = p+2;
    // cout<<*p<<endl;
    // p--;
    // p=p-1; // 1 means 1byte int =>4bits are added
    // cout<<*p<<endl;
    // cout<<arr<<endl;

    int* ptr1 = arr;
    int* ptr2 = ptr1+2;

    cout<<ptr2-ptr1<<endl;

    return 0;
}