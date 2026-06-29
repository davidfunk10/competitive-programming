#include <bits/stdc++.h>
using namespace std;

int n, m; 
string sl[500], pl[500];
int sn[500][50], pn[500][50]; 

bool testpos(int p1, int p2, int p3)
{
    int a[64] = {0};
    for(int c = 0; c<n; c++)
    {
        a[sn[c][p1] * 16 + sn[c][p2] *4 + sn[c][p3]] = 1;
        
    }

    for(int c = 0; c<n; c++)
    {
        if(a[pn[c][p1] * 16 + pn[c][p2] *4 + pn[c][p3]] == 1) return false;
    }



    return true;


}
int main() {

    freopen("cownomics.in", "r", stdin);
    freopen("cownomics.out","w",stdout);
    
	cin >> n >> m;

    for(int c =0; c<n; c++)
    {
        cin >> sl[c];
    }
    for(int c =0; c<n; c++)
    {
        cin >> pl[c];
    }

    for(int c=0; c<n; c++)
    {
        for(int l = 0; l<m; l++)
        {
            if(sl[c][l] == 'A') sn[c][l] = 0;
            if(pl[c][l] == 'A') pn[c][l] = 0;

            if(sl[c][l] == 'C') sn[c][l] = 1;
            if(pl[c][l] == 'C') pn[c][l] = 1;

            if(sl[c][l] == 'G') sn[c][l] = 2;
            if(pl[c][l] == 'G') pn[c][l] = 2;

            if(sl[c][l] == 'T') sn[c][l] = 3;
            if(pl[c][l] == 'T') pn[c][l] = 3;
        }
    }

   


    int ans = 0;

    for(int p1 = 0; p1<m-2; p1++)
    {
        for(int p2 = p1+1; p2<m-1; p2++)
        {
            for(int p3 = p2+1; p3<m; p3++)
            {
                ans += testpos(p1, p2, p3);
            }
        }

    }



    cout << ans;



}

