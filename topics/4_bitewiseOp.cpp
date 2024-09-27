// Bitwise  -> & , | , ^
// Bitwise -> << , >>

// #include<iostream>
// using namespace std;

// int main()
// {
    // int num = 10>>2;
    // cout << num;

//     cout << sizeof(  int );
    
//     return 0;
// }


// operator precedence
// scope
// data types modifiers



// 1. find if a number is a power of 2 without any loop
#include<iostream>
using namespace std;

int main()
{
    int num, temp ;
    cout<<"Enter a number :";
    cin>>num;
    temp=2;
    while(temp<=num)
    {
        if(num ==temp){
            cout<<"The Number is  a power of 2";
            exit(0);
        }
        temp =temp<<1;
    }
    cout<<"The number is not the power of 2";
    return 0;
} 
