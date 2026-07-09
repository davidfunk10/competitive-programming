#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("cowqueue.in", "r", stdin);
    freopen("cowqueue.out", "w", stdout);
	int n; cin >> n;
    vector<pair<int, int>> cows(n);

    for(int i = 0; i < n; i++)
    {
        cin >> cows[i].first >> cows[i].second;
    }

    sort(cows.begin(), cows.end());

    int curtime = 0;

    for(int c = 0; c < n; c++)
    {
        curtime = max(cows[c].first, curtime);
        curtime += cows[c].second;

    }

    cout << curtime;


}
