#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("hoofball.in", "r", stdin);
    freopen("hoofball.out", "w", stdout);
	int n; cin>>n; 
    vector<int> locs(n);
    for(int i = 0; i<n; i++)
    {
        cin >> locs[i];
    }
    
    sort(locs.begin(), locs.end());

    vector<int> passto(n);

    for(int i = 0; i<n-2; i++)
    {
        if(abs(locs[i]-locs[i+1]) < abs(locs[i+1]-locs[i+2]))
        {
            passto[i+1] = i;
        }
        else if(abs(locs[i]-locs[i+1]) > abs(locs[i+1]-locs[i+2]))
        {
            passto[i+1] = i+2;
        }
        else
        {
            passto[i+1] = i;
        }
    }

    passto[0] = 1;
    passto[n-1] = n-2;

    vector<int> receives(n);

    for(int i = 0; i<n; i++)
    {
        receives[passto[i]]++;
    }

    int ans = 0;
    for(int i = 0; i<n; i++)
    {
        if(receives[i]==0)
        {
            ans++;
        }

    }

    for(int f = 0; f<n-1; f++)
    {
        for(int s = f+1; s<n; s++)
        {
            if((receives[f]==1 && receives[s]==1) && (passto[s] == f && passto[f] == s))
            {
                ans++;
            }

        }
    }



    cout << ans;


}
