// Given a string S containing letters and ‘#‘. The ‘#” represents a backspace. The task
// is to print the new string without ‘#‘.

#include <iostream>
#include <deque>

using namespace std;

int main()
{
    deque<char> dq;
    string s = "abc#de#f#ghi#jklmn#op#";

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != '#')
        {
            dq.push_back(s[i]);
        }
    }

    string ans = "";

    while (!dq.empty())
    {
        ans += dq.front();
        dq.pop_front();
    }

    cout << "New string is " << ans << endl;
    return 0;
}