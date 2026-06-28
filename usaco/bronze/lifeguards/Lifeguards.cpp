#include <bits/stdc++.h>
using namespace std;

int main() {

    freopen("lifeguards.in", "r", stdin);
    freopen("lifeguards.out", "w", stdout);
	int n; cin>>n;

    int times[1000] = {0};
    int startT[n];
    int endT[n];
    int ans = -1;

    for(int i = 0; i<n; i++)
    {
        cin >> startT[i];
        cin >> endT[i];

        for(int j = startT[i]; j< endT[i]; j++)
        {
            times[j]++;
        }
        
    }

    
    for(int c = 0; c<n; c++)
    {
        int cur = 0;
        for(int t = startT[c]; t<endT[c]; t++)
        {
            times[t]--;
        }

        for(int t = 0; t<1000; t++)
        {
            if(times[t]!=0)
            {
                cur++;
            }
        }
        
        ans = max(ans, cur);

        for(int t = startT[c]; t<endT[c]; t++)
        {
            times[t]++;
        }
    }
	cout << ans;
}
