#include<iostream>
using namespace std;

// 101 ->  5
int bTONumber(int binary)
{
    int rem, sum=0 ,power=1;

    while(binary>0){
        rem =binary%10;
        sum +=power*rem;
        binary=binary/10;
        power = power*2;
    }

    return sum;
}

// 5 -> 101
int NumTObinary(int num){
    int rem ,binary=0,power=1;

    while(num>0){
        rem =num%2;
        binary +=rem*power;
        power *= 10;
        num /= 2;
    }

    return  binary;

}

int main()
{
    int binary;
    cout<<"Enter a binary Number :";
    cin>>binary;
    int num = bTONumber(binary);
    cout<<"The number is :"<<num<<endl;
    cout<<"The Binary of the num is :"<<NumTObinary(num);

    return 0;
}