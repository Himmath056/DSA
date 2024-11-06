#include<iostream>
#include<math.h>
using namespace std;

string isprime(int  n){
    for(int i=2; i*i<=n ;i++){
        if(n%i == 0){
            return "Not a Prime";
        }
    }
    return " Is a prime";
}


void printDigit(int n){
    int count =0;
    while(n != 0){
        int digit = n%10;
        count++;
        
        n= n/10;
    }
    cout<<count;
}

int main(){
    int num =47;
    cout<<isprime(num)<<endl;
    // printDigit(num);

    cout<< (int)(log10(num)+1); // to find no of didgit
    return 0;
}