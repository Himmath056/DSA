#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> vec1;
    // vector<int> vec ={1,2,3};
    // vector<int> vec(10,-1);
    // vector<int> vec2(vec1);

    vec1.push_back(2); 
    vec1.push_back(3); 
    vec1.push_back(4); 
    vec1.emplace_back(5);

    vec1.erase(vec1.begin()+1);

    vec1.pop_back();
    for(int val : vec1){
        cout << val << " ";
    }

    cout<<"val at index 2 is "<<vec1[2] << " or " <<vec1.at(2) <<endl;
    cout<<"Front"<<vec1.front() << endl;
    cout<<"End "<< vec1.back() << endl;



    return 0;
}