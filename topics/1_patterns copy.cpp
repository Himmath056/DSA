//    1
//   121
//  12321
// 1234321

// #include <iostream>
// using namespace std;

// int main(){
//     int n;

//     cout << "Enter the number of rows :";
//     cin >> n;
//     for(int i=0; i  < n ;i++){
//         //  space
//         for( int j =0; j< n-i-1; j++)
//         {
//             cout << " ";
//         }
//         // num1
//         for(int j=1; j<=i+1;j++ ){
//             cout<< j;
//         }

//         //num2
//         for(int j=i; j>=1; j--){
//             cout<< j;
//         }
//         cout <<endl;
//     }
//     return 0;
// }


//    *
//   * *
//  *   *
// *     *
//  *   *
//   * *
//    *

// #include <iostream>
// using namespace std;

// int main(){
//     int n;

//     cout << "Enter the number of rows :";
//     cin >> n;
// //    top
//     for( int i=0 ; i<n ;i++){
        
//         for(int j=0; j<n-i-1; j++){
//             cout << " ";
//         }

//         cout << "*";

//         if(i != 0){ 
//            for(int j=0; j<2*i-1; j++){
//             cout << " ";
//             }
//             cout << "*";
//         }
//         cout<<endl;
//     }
//     //bottom 
//     for( int i=0; i<n-1 ;i++)
//     {
//         for(int j=0 ; j<i+1; j++){
//             cout<<" ";
//         }
//         cout<<"*";
//         if(i != n-2){
//             for(int j=0 ; j<2*(n-i)-5 ;j++){
//                 cout<<" ";
//         }
//         cout<<"*";
//     }
//     cout<<endl;
//     }
  
//     return 0;
// }





// *      *
// **    **
// ***  ***
// ********
// ********
// ***  ***
// **    **
// *      *

#include <iostream>
using namespace std;

int main(){
    int n;

    cout << "Enter the number of rows :";
    cin >> n;
    // top
    for (int i=0; i<n ;i++){
        // left no.
        for(int j=0 ;j<i+1 ;j++){
            cout<<"*";
        }
        // spaces
        for(int j=0;j<(n-i-1)*2;j++){
            cout<<" ";
        }
        // right no.
        for(int j=0 ;j<i+1 ;j++){
            cout<<"*";
        }
        cout <<endl;
    }
    // bottom
     for (int i=0; i<n ;i++){
        // left no.
        for(int j=0 ;j<n-i ;j++){
            cout<<"*";
        }
        // spaces
        for(int j=0;j<i*2;j++){
            cout<<" ";
        }
        // right no.
        for(int j=0 ;j<n-i ;j++){
            cout<<"*";
        }
        cout <<endl;
    }
  
    return 0;
}