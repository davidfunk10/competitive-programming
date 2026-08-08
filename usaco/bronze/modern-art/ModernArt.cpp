#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("art.in", "r", stdin);
    freopen("art.out", "w", stdout);

	int n; cin >> n;
    int painting[n][n];
    set<int> ans;
    for(int r = 0; r<n; r++)
    {
        for(int c = 0; c<n; c++)
        {
            char s;
            cin >> s;
            int num = (s - '0');
            painting[r][c] = num;
            ans.insert(painting[r][c]);
        }
    }

    ans.erase(0);
    set<int> blacklist;
    for(int num : ans)
    {
        int minr = n, maxr = -1, minc = n, maxc = -1;
    
        for(int r = 0; r<n; r++)
        {
            for(int c =0; c<n; c++)
            {
                if(painting[r][c] == num && r < minr) minr = r;
                if(painting[r][c] == num && r > maxr) maxr = r;
                if(painting[r][c] == num && c < minc) minc = c;
                if(painting[r][c] == num && c > maxc) maxc = c;

            }
        }

        for(int r = minr; r<=maxr; r++)
        {
            for(int c = minc; c<=maxc; c++)
            {
                if (painting[r][c] != num && painting[r][c] != 0)
                {
                    blacklist.insert(painting[r][c]);
                }
            }
        }
    }

    for(int x: blacklist)
    {
        ans.erase(x);
    }

    cout << ans.size();


}
