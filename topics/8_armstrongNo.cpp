#include<iostream>
using namespace std;

bool isArmstrongno(int n){
    int cpy =n;
    int sumOfCubes =0;

    while( n != 0){
        int dig = n%10;

        sumOfCubes += (dig * dig * dig);

        n = n/10;
    }
    if(sumOfCubes == cpy)
        return true;
    else
        return false;
}

int main(){
    int n =153;
    if(isArmstrongno(n)){
        cout<<"It is an Armstrong no";
    }else{
        cout<<"It is not an Armstrong no";
    }
    return 0;
}