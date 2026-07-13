#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("sleepy.in", "r", stdin);
    freopen("sleepy.out", "w", stdout);
    
	int n; cin >> n;
    int ray[n]; 

    for(int i = 0; i<n; i++)
    {
        cin >> ray[i];
    }

    int x = 1;

    for(int i = n-2; i>-1 && ray[i] < ray[i+1]; i--)
    {
        x++;
    }

    cout << n-x;


}
