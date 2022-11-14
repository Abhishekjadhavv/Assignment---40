
#include <iostream>
#include <deque>
#include <iterator>
using namespace std;

int main()
{
    deque<int> dq = {12, 34, 5, 67};
    cout << "The deque in reverse order: ";

    // prints the elements in reverse order
    for (auto it = dq.rbegin(); it != dq.rend(); ++it)
        cout << *it << " ";
    return 0;
}