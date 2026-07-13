#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("balancing.in", "r", stdin);
    freopen("balancing.out", "w", stdout);
    int N,x,y;
    cin >> N;
    vector<pair<int, int>> cows;
    vector<int> eastwests;
    eastwests.push_back(0);
    for (int i = 0; i < N; i++) {
        cin >> x >> y;
        cows.push_back(make_pair(x,y));
        eastwests.push_back(y+1);
    }
    
    sort(cows.begin(), cows.end());

    int M = N;
    // we don't have to look at the million possible east-west lines
    // just 0 and y+1 for all ys.
    for (int i = 0; i < eastwests.size(); i++) {
        y = eastwests[i];
        vector<pair<int, int>> abovebelow;
        int cur_above = 0;
        int cur_below = 0;
        int topleft = 0;
        int topright = 0;
        int bottomleft = 0;
        int bottomright = 0;
        int cur_x = -1;
        for (int j = 0; j < cows.size(); j++) {
            if (cows[j].second > y) {
                topright++;
            } else {
                bottomright++;
            }
            if (cows[j].first != cur_x) { // moving to a different x value
                if (cur_above + cur_below > 0){
                    abovebelow.push_back(make_pair(cur_above, cur_below));
                }
                cur_x = cows[j].first;
                if (cows[j].second > y) {
                    cur_above = 1;
                    cur_below = 0;
                } else {
                    cur_above = 0;
                    cur_below = 1;
                }
            } else { // same x value as before.
                if (cows[j].second > y) {
                    cur_above++;
                } else {
                    cur_below++;
                }
            }
        }


        for (int j = 0; j < abovebelow.size(); j++) {
            int above = abovebelow[j].first;
            int below = abovebelow[j].second;
            topleft += above;
            bottomleft += below;
            topright -= above;
            bottomright -= below;
            
            M = min(M, max(max(topleft, topright), max(bottomleft, bottomright)));
        }

    }
    cout << M << endl;
}
