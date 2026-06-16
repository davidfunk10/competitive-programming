#include <bits/stdc++.h>
#include <utility>
using namespace std;


int main() {

    freopen("shell.in", "r", stdin);
    freopen("shell.out","w",stdout);
	int n; cin >> n;

    vector<pair<int, int>> swaps(n);

    vector<int> guesses(n);

    for(int i = 0; i<n; i++)
    {
        int a, b, g; cin >> a >> b >> g;

        swaps[i] = make_pair(a, b);
        guesses[i] = g;

    }

    int maxPoints = 0;
    
    for(int startpos = 1; startpos <= 3; startpos ++)

    {
        vector<bool> haspebble(4, false);
        haspebble[startpos] = true;
        int points = 0;
        for(int i = 0; i<n; i++)
            {
                int a = swaps[i].first;
                int b = swaps[i].second;
                int guess = guesses[i];
                swap(haspebble[a],haspebble[b]);

                if (haspebble[guess])
                    points ++;
            }
        
        maxPoints = max(points, maxPoints);


    }
  


	cout << maxPoints;
}
