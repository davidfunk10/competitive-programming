#include <bits/stdc++.h>
#include <utility>
using namespace std;

vector<pair<int, int>> holes;
vector<int> nextonright;
int n;
int tup;
vector<int> partner;

bool checkcycle()
{

    for(int start = 0; start<n; start++) //simulate bessies movement starting at each wormhole
    {

        int cur = start;

        for(int step = 0; step<n; step++)
        {
            cur = nextonright[partner[cur]];
            if(cur==-1) {break;}
            
        }


        if(cur!=-1) return true;


    }

    return false;

}
void genpairs()
{
    int i = -1;

    for(int h= 0; h<n; h++)
    {
        if(partner[h] == -1)
        {
            i = h;
            break;
        }
    }

    if(i==-1)
    {
        tup += checkcycle();
        return;
    }

    for(int j = i+1; j<n; j++)
    {
        if(partner[j]==-1)
        {
            partner[i] = j;
            partner[j] = i;

            genpairs();

            //cleanup before moving to next option
            partner[i] = -1;
            partner[j] = -1;
        }


    }




}
int main() {
    freopen("wormhole.in", "r", stdin);
    freopen("wormhole.out", "w", stdout);
	cin >> n;
    for(int i = 0; i<n; i++)
    {
        int x, y; cin >> x >> y;
        holes.push_back(make_pair(y, x));

    }
    sort(holes.begin(), holes.end());

    nextonright.resize(n, -1);

    for(int f = 0; f<n-1; f++)
    {
        for(int s = f+1; s<n; s++)
        {
            if(holes[f].first == holes[s].first && holes[s].second > holes[f].second)
            {
                nextonright[f] = s;
                break;
            }

        }
    }

    partner.resize(n, -1);

    genpairs();

    cout << tup;

}
