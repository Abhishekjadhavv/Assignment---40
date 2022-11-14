// Return a first element and last element of the deque container.
#include<iostream>
#include<deque>

using namespace std;

int main(){
    deque<int> dq1;
    dq1.push_front(34);
    dq1.push_back(83);
    dq1.push_back(90);
    dq1.insert(dq1.begin(),74);

    for(int &a: dq1){
      cout<<a<<" ";
    }
    cout<<endl;

    cout<<"First element is : "<< dq1.front()<<endl;
    cout<<"Last element is : "<< dq1.back()<<endl;
    return 0;
}