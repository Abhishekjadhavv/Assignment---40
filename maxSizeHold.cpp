//Returns the maximum number of elements that a deque container can hold.
#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> dq = {23,4,5,6,7};
    cout<<"size of deque is : "<<dq.size()<<endl;
    cout<<"deque container can hold : "<<dq.max_size()<<" number of elements"<<endl;
       
    return 0;
}