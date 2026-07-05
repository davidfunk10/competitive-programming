#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<tuple<ll, ll, int>> east; //y, x
vector<tuple<ll, ll, int>> north; // x, y
vector<ll> ans;
vector<bool> stopped;
int main() {
	int N;
    cin >> N;
    char dir;
    ll x,y;
    ans.assign(N, 1e15);
    stopped.assign(N, false);
    for (int i = 0; i < N; i++) {
        cin >> dir >> x >> y;
        if (dir == 'E') {
            east.push_back({y, x, i});
        }
        if (dir == 'N') {
            north.push_back({x, y, i});
        }

    }

    sort(east.begin(), east.end());
    sort(north.begin(), north.end());


    for(auto &[y, x, eid]: east)
    {
        int mintime = 1e15;
        for(auto &[a, b, nid]: north)
        {

            if(stopped[eid] || stopped[nid]) continue;

            if((y>b) && (a>x))
            {


                if(y+x > a+b) //east cow cuts off north cow
                {
                    stopped[nid] = 1;
                    ans[nid] = y-b; // how many steps that north cow took before getting cut off by east cow

                }
                else if(a+b  > y+x) // north cow cuts off east cow
                {
                    stopped[eid] = 1;
                    ans[eid] = a-x;
                }


            }

        }

    }

    for(int i = 0; i< N; i++)
    {
        if(ans[i]!=1e15)
        {
            cout << ans[i] << "\n";
        }
        else{
            cout << "Infinity\n" ;
        }
    }
}