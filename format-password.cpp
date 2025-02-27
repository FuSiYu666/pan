#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("password", "w", stdout);
    cout << "{";
    int T; cin >> T;
    while(T--)
    {
        string s;
        cin >> s;
        if(T!=0)
            cout << "\"" << s << "\", ";
        else
            cout << "\"" << s << "\"";
    }
    cout << "}";
    return 0;
}