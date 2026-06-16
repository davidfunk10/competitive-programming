#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("censor.in","r",stdin);
    freopen("censor.out","w",stdout);

	string s, t; cin >> s >>t;

    string ans = "";

    for(int i =0; i<s.length();i++)
    {
        ans+= s[i];
        if(ans.length()>=t.length() && ans.substr(ans.length()-t.length()) == t)
        {
            ans.resize(ans.length()-t.length());
        }
    }
	cout << ans;
}
