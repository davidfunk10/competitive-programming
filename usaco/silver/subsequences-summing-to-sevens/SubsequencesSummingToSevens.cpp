#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("div7.in", "r", stdin);
    freopen("div7.out", "w", stdout);
    
	int n; cin >> n;
    vector<int> firstseen(7, -2);
    vector<int> lastseen(7, -2);
    int ans = 0;
    int count = 0;

    for(int i = 0; i<n; i++)
    {
        int cur; cin >> cur;
        cur = cur %7;
        count = (count + cur) % 7; 
        if(firstseen[count] == -2)
        {
            firstseen[count] = i;
        }
        else {
        
            lastseen[count] = i;
            ans = max((lastseen[count]-firstseen[count]), ans);
        }
    }
    cout << ans;

}
