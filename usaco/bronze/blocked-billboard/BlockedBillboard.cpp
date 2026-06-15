#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("billboard.in", "r", stdin);
    freopen("billboard.out", "w", stdout);
    bool ray[2000][2000] {};

    for(int i = 0; i<3; i++)
    {
        int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
        x1 += 1000;
        y1 += 1000;
        x2 += 1000;
        y2 += 1000;

        for(int x = x1; x<x2; x++)
        {
            for(int y = y1; y<y2; y++)
            {
                ray[x][y] = i < 2;
            }
        }
    }

    int result = 0;

    for(int i = 0; i<2000; i++)
    {
        for(int j = 0; j<2000; j++)
        {
            result += ray[i][j];
        }
    }
	
	cout << result;
}
