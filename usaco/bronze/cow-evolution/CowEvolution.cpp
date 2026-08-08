#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("evolution.in", "r", stdin);
    freopen("evolution.out", "w", stdout);
	int n; cin>>n; 
    vector<vector<string>> pops(n);
    set<string> alltraits;

    for(int i = 0; i<n; i++)
    {
        int k; cin>> k;
        for(int t = 0; t<k; t++)
        {
            string trait;
            cin >> trait;
            pops[i].push_back(trait);
            alltraits.insert(trait);
        }
    }

    vector<string> features(alltraits.begin(), alltraits.end());

    for(int a = 0; a<features.size()-1; a++)
    {
        for(int b = a+1; b<features.size(); b++)
        {
            bool onlya = false; 
            bool onlyb = false;
            bool aandb = false;
            for(int p = 0; p<pops.size(); p++)
            {
                bool consa = false;
                bool consb = false;

                for(int i =0; i<pops[p].size(); i++)
                {
                    if(pops[p][i] == features[a])
                    {
                        consa = true;
                    }
                    if(pops[p][i] == features[b])
                    {
                        consb = true;
                    }
                }
                
                if(consa && consb)
                {
                    aandb = true;
                }
                else if(consa && !consb)
                {
                    onlya = true;
                }
                else if(!consa && consb)
                {
                    onlyb = true;
                }
            }
            if(onlya&&onlyb&&aandb)
            {
                cout << "no";
                return 0;
            }
           
        }
    }

    cout << "yes";
}
