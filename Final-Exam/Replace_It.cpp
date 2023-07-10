#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    int i = 0;
    while (i < t)
    {
        string s, x;
        cin >> s >> x;

        while (s.find(x) != -1)
        {
            s.replace(s.find(x), x.size(), "$");
        }

        cout << s << endl;
        i++;
    }
    return 0;
}
