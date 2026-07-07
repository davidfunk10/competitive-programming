#include <bits/stdc++.h>
using namespace std;

vector<int> bucketshere;
vector<int> bucketsthere;
set<int> possible;

void solve(int trips, vector<int> bucketshere, vector<int> bucketsthere, int tankhere, int tankthere)

{

    if(trips == 0)
    {
        possible.insert(tankhere);
        return;

    }
    

    for(int b = 0; b<bucketshere.size(); b++)
    {

        vector<int> bucketssrc;
        
        for(int i = 0; i<bucketshere.size(); i++)
        {
            if(i!=b)
            {
                bucketssrc.push_back(bucketshere[i]);
            }

        }

        vector<int> bucketsdest(bucketsthere);
        bucketsdest.push_back(bucketshere[b]);

        int tankdest = tankthere + bucketshere[b];
        int tanksrc = tankhere - bucketshere[b];

        solve(trips-1, bucketsdest, bucketssrc, tankdest, tanksrc);



    }



}

int main() {

    freopen("backforth.in", "r", stdin);
    freopen("backforth.out", "w", stdout);
    

	for(int i = 0; i<10; i++)
    {
        int b; cin >> b; 
        bucketshere.push_back(b);
    }
    for(int i = 0; i<10; i++)
    {
        int b; cin >> b; 
        bucketsthere.push_back(b);
    }

    solve(4, bucketshere, bucketsthere, 1000, 1000);


    cout << possible.size();
    
}



