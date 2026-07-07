#include <bits/stdc++.h>
using namespace std;

int main() {

    freopen("lineup.in","r",stdin);
    freopen("lineup.out","w",stdout);
    
	int n; cin >>n; 
    vector<pair<string, string>> restrictions;

    for(int r= 0; r<n; r++)
    {
        string a, t, b;
        cin >> a >> t >> t >> t >> t >> b;
        restrictions.push_back(make_pair(a,b));

    }

    vector<string> cows = {"Beatrice" ,"Sue","Belinda","Bessie","Betsy","Blue","Bella","Buttercup"};
    sort(cows.begin(), cows.end());

    do
    {
        bool should_exit = 1;

        for(int r = 0; r<n; r++)
        {
            string c1 = restrictions[r].first;
            auto a = find(cows.begin(),cows.end(),c1);

            string c2 = restrictions[r].second;
            auto b = find(cows.begin(),cows.end(),c2);

            if(abs(a-b)!=1)
            {
                should_exit = 0;
                break;

            }

        }

        if(should_exit)
        {
            break;
        }

    }

    while(next_permutation(cows.begin(), cows.end()));

    for(string &c: cows)
    {
        cout << c << "\n";
    }
}
