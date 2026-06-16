#include <bits/stdc++.h>
using namespace std;

int main() {

    freopen("cbarn.in", "r", stdin);
    freopen("cbarn.out","w",stdout);
	int n; cin >> n;
    vector<int> cows(n);

    for(int i =0; i<n; i++)
    {
        int c; cin>>c;
        cows[i] = c;
    }

    int mindis = 1e9;

    for(int sr = 0; sr<n; sr++)
    {

        int curdis = 0;

        for(int i = 0; i<n; i++)
        {

            curdis+= (sr+i)%(n) * cows[i];

        }

        mindis = min(curdis, mindis);

    }
	cout << mindis;
}
