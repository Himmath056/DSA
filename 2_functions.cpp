// #include<iostream>
// // #include<cstdio>

// using namespace std;

// int  sum(int a, int b){  //parameter
//     return (a+b);
// }
// // min of two no.
// int minNumber(int a, int b){
//     if(a<b)
//         return a;
//     else 
//         return b;
// }

// int main(){

//     // cout<<sum(2,3);
//     cout<<"min :" <<minNumber(4,5);  //arguements
//     return 0;
// }



// 1.calculate sum of no. from 1 to N
// 2.factorial

// #include<iostream>
// using namespace std;

// int sumOfNumbers(int n){
//     int sum=0;
//     for(int i=1; i<=n; i++)
//         sum+=i;
//     return sum;
// }

// int factorial(int n){
//     if(n==0)
//         return 1;
//     int fact=1;
//     for(int i=1;i<=n;i++){
//         fact *=i;
//     }
//     return fact;
// }

// int main(){
//     int n;

//     cout<<" Enter the number to caluclate sum :";
//     cin >>n;
//     cout<<"Sum :"<<sumOfNumbers(n)<<endl;

//     cout<<"Factorial :" << factorial(n);

//     return 0;
// }



// 3. Sum of digits of a number

// #include<iostream>
// using namespace std;

// void sumOfDigit(int n){
//     int sum =0, rem;
//     while(n!=0){
//         rem =n%10;
//         sum +=rem;
//         n =n/10;
//     }

//     cout<<"The sum of digit is :"<<sum;
// }

// int main(){
//     int n;
//     cout<<"Enter the digit :";
//     cin>>n;

//     sumOfDigit(n);

//     return 0;
// }


// 4.calculate nCr binomial coefficient for n&r
// #include <iostream>
// using namespace std;

// int fact(int n){
//     if(n==0)
//         return 1;

//     int fact=1;
//     for(int i=1;i<=n;i++){
//         fact *=i;
//     }
//     return fact;
// }

// int binomialCoeff(int n ,int r){
//     int bcoeff = fact(n)/(fact(n-r) * fact(r));

//     return bcoeff;
// }
// int main(){
//     int n,r ;
//     cout<<"Enter the value of n and r for nCr :";
//     cin >>n>>r;

//     cout<<"Binomial Coefficient is :"<<binomialCoeff(n,r);
//     return 0;   
// }


// 5.WAF to check if a number is prime or not 
// #include<iostream>
// using namespace std;
// int isPrime(int n){
//     bool isPrime =true;
//     for(int i=2; i<n; i++){
//         if(n%i == 0){
//             isPrime =false;
//             break;
//         }
//     }
//     return isPrime;
// }

// void prime1toN(int n){

//     if(n>=2)
//         cout<< 2 ;
    
//     for(int i=3; i<=n; i++){
//         bool isPrime =true;

//         for(int j=2 ;j<i ; j++){
//             if(i%j == 0){
//                 isPrime=false;
//                 break;
//             }
//         }
//         if(isPrime){
//             cout<<" " <<i;
//         }
//     }
// }

// int main(){
//     int n;
//     cout<< "Enter a no. to find is it prime 2 to N :";
//     cin>>n;
//     // if(isPrime(n))
//     // {
//     //     cout<<"The Number "<<n<<" is Prime";
//     // }else{
//     //     cout<<"The Number "<<n<<" is Not Prime";
//     // }

//     prime1toN(n);
//     return 0;
// }



// 6. WAF to priny nth fibonacci
#include<iostream>
using namespace std; 

int nthFibbonacci(int n){
    if(n == 0 ) return 0 ;
    if(n == 1 ) return 1 ;
    
    int a=0, b=1, fib=0;

    for(int i=2 ;i<=n ;i++){
        fib =a+b;
        a=b;
        b=fib;
    }
    return fib;
}

int main(){
    int n;
    cout<<"Enter a no. to print nth fibbonacci :";
    cin>>n;

    cout<<"Nth fibonacci is :"<<nthFibbonacci(n);

    return 0;
}