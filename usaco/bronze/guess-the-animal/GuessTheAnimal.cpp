#include <bits/stdc++.h>
using namespace std;

int main() {

    freopen("guess.in", "r", stdin);
    freopen("guess.out", "w", stdout);
    
	int n; cin>>n;
    vector<vector<string>> animals(n);

    for(int i=0; i<n; i++)
    {
        string name; cin>>name;
        int k; cin>>k;
        for(int j= 0; j<k; j++)
        {
            string qual; cin >> qual;
            animals[i].push_back(qual);
        }
        
    }

    int ans = -1;

    for(int a1=0; a1<n-1; a1++)
    {
        
        for(int a2 = a1+1; a2<n; a2++)
        {
            int cur = 0;
            for(int q1 = 0; q1<animals[a1].size(); q1++)
            {
                for(int q2 =0; q2<animals[a2].size(); q2++)
                {
                    if(animals[a1][q1] == animals[a2][q2])
                    {
                        cur++;
                        break;
                    }
                }
            }
            ans = max(ans, cur);
        }
        
        

    }

	cout << ans+1;
}
