// Remove elements from a container from the specified position or range in deque.
#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

int main()
{
    deque<int> dq;
    dq.assign({12, 34, 5, 6, 7, 8});
    for (int &a : dq)
    {
        cout << a << " ";
    }
    cout << endl;
    cout<<"Remove elements from a container from the specified position."<<endl;
    dq.erase(dq.begin() + 1);
    for (int &a : dq)
    {
        cout << a << " ";
    }
    cout << endl;

    cout<<"Remove elements from a container from the specified Range."<<endl;
    dq.erase(dq.begin() + 1,dq.begin()+4);
    for (int &a : dq)
    {
        cout << a << " ";
    }
    cout << endl;
    return 0;
}