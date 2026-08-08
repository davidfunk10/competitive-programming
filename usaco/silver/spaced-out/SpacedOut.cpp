#include <bits/stdc++.h>
using namespace std;

int main() {
    
	int n; cin >> n; 
    int block[n][n];

    for(int r = 0; r<n; r++)
    {
        for(int c = 0; c<n; c++)
        {
            cin >> block[r][c];
        }
    }

    int rowt = 0;
    int colt = 0;

    //find rowt

    for(int r = 0; r<n; r++)
    {
        int evens = 0;
        for(int c = 0; c<n; c+=2)
        {
            evens+= block[r][c];
        }
        int odds = 0;
        for(int c = 1; c<n; c+=2){
            odds+= block[r][c];
        }
        rowt += max(evens, odds);
    }

    //find colt

    for(int c = 0; c<n; c++)
    {
        int evens = 0;
        for(int r = 0; r<n; r+=2)
        {
            evens+= block[r][c];
        }
        int odds = 0;
        for(int r = 1; r<n; r+=2){
            odds+= block[r][c];
        }
        colt += max(evens, odds);
    }

    cout << max(colt, rowt);


}
