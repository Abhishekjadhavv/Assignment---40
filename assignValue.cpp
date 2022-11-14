// Assign values to the same or different deque container.

#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> dq1;

    dq1.assign({2, 3, 4, 5, 6});

    deque<int> dq2(dq1.begin(), dq1.end());

    for (int &a : dq2)
    {
        cout << a << " ";
    }

    return 0;
}