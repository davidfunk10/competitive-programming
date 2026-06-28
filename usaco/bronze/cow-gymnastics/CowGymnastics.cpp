#include <bits/stdc++.h>
using namespace std;

int main() {

    freopen("gymnastics.in", "r", stdin);
    freopen("gymnastics.out", "w", stdout);
	int k, n; cin >> k >> n;

    int rankings[10][20] = {0};
    int abeatsb[20][20]={0};

    for(int i = 0; i<k; i++)
    {
        for(int c = 0; c<n; c++)
        {
            cin >> rankings[i][c];
            rankings[i][c]--;
        }
    }


    for(int t = 0; t<k; t++)
    {
        for(int a =0; a<n; a++)
        {
            for(int b =a+1; b<n; b++)
            {

                abeatsb[rankings[t][a]][rankings[t][b]] ++;


            }
        }
    }

    int ans = 0;

    for(int c1 = 0; c1<n; c1++)
    {
        for(int c2 = 0; c2< n; c2++)
        {
            if(abeatsb[c1][c2] == k)
            {
                ans++;
            }
        }
    }




	cout << ans;
}
