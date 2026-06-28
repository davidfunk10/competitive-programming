#include <bits/stdc++.h>
using namespace std;

int n, m; 
string spotty[100], plain[100];

bool testpos(int j)
{
    
    bool letters[2][4] = {0};

    for(int i=0; i<n; i++)
    {
        if(spotty[i][j] == 'A') {letters[0][0] = true;}
        if(plain[i][j] == 'A') {letters[1][0] = true;}

        if(spotty[i][j] == 'C') {letters[0][1] = true;}
        if(plain[i][j] == 'C') {letters[1][1] = true;}
        
        if(spotty[i][j] == 'G') {letters[0][2] = true;}
        if(plain[i][j] == 'G') {letters[1][2] = true;}

        if(spotty[i][j] == 'T') {letters[0][3] = true;}
        if(plain[i][j] == 'T') {letters[1][3] = true;}

    }


    for(int i =0; i<4; i++)
    {
        if(letters[0][i] && letters[1][i])
            return false;

    }

    return true;



}
int main() {

    freopen("cownomics.in","r",stdin);
    freopen("cownomics.out","w",stdout);
	
    cin >> n >> m;

    for(int i =0;i<n; i++)
    {
        string line; cin >> line;
        spotty[i] = line;
    }

    for(int i =0;i<n; i++)
    {
        string line; cin >> line;
        plain[i] = line;
    }

    int ans = 0;
    for(int j = 0; j<m; j++)
    {
        if(testpos(j))
            ans++;

    }

	cout << ans;
}
