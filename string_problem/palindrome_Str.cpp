#include<iostream>
#include<string>
#include<bits/stdc++.h>

using namespace std;

bool isPalindrome(string str){
    string rev = str;
    reverse(str.begin(),str.end());
    return (str == rev);
}

int main()
{
    string str="madam";
    if(isPalindrome(str)){
        cout<<"The word is palindrome";
    }else{
        cout<<"not a palindrome";
    }
    return 0;
}