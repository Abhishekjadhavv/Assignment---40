//  String after processing backspace characters using deque
// Examples:
// Input : S = "abc#de#f#ghi#jklmn#op#"
// Output : abdghjklmo
// Input : S = "##MySirG##Education##hub#"
// Output : MysiEducatihu

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
        }else{
            dq.pop_back();
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