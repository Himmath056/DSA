// #include<iostream>
// #include<string>
// #include<bits/stdc++.h>

// using namespace std;

// int main()
// {
    // char str[] ={'a','b','c','\0'};
    // char str1[] ="hello";
    // char str2[12];
    // cout<<"Enter a string";
    // cin>>str2;
    // cout<<"Enter a string";
    // cin.getline(str2, 12, '$'); 

    // for(char ch : str2){
    //     cout<< ch<<" ";
    // }

    // cout<<strlen(str) <<endl;
    // cout<<str2;

//     char str[] ="Himmath Kumar";
//     int len = 0;
//     for(int i=0 ; i< str[i]!= '\0' ; i++){
//         len++;
//         cout<<str[i];
//     }
//     cout<<len;
//     return 0;
// }


#include<iostream>
#include<string>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    // string str ="Himmath kumar";

    // cout<<str;
    // str ="hello";
    // cout<<endl<<str;

    // char cArr[] ="Himmath";
    // cArr="hello"; //cannot be done

    // string str1="Himmath";
    // string str2="Kumar";
    // string str3 =str1+str2;

    // cout<<str3<<endl;
    // cout<<(str1 == str2)<<endl;
    // cout<<(str1 < str2)<<endl;
    // cout<<str1.length()<<endl;

    string str;
    // cin>>str;
    getline(cin,str);
    reverse(str.begin(),str.end());
    
    cout<<"String is :"<<str<<endl;
    for(char ch : str){
        cout<<ch<<" ";
    }

    return 0;
}