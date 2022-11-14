// Inserts an element.
#include <iostream>
#include <deque>

using namespace std;
int main()
{
    deque<int> dq;
    dq.push_back(12);
    dq.push_back(20);
    dq.push_back(56);
    dq.push_front(34);
    dq.push_front(36);
    for (int &a : dq)
    {
        cout << a << " ";
    }
    return 0;
}