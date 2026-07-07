#include <algorithm>
#include <bits/stdc++.h>
#include <numeric>
using namespace std;


bool ok[8][8];
int main() {
	
    for(int i = 0; i<8; i++)
    {
        string s; cin >> s;
        for(int j = 0; j<8; j++)
        {
            ok[i][j] = (s[j] == '.');
        }

    }

    vector<int> perm(8);

    for(int i = 0; i<8; i++)
    {
        perm[i] = i;
    }


    iota(perm.begin(), perm.end(), 0);
    int ans = 0;

    do 
    {
        bool works = true;

        for(int q = 0; q<8; q++)
        {
            if(!ok[q][perm[q]])
            {
                works = false;
            }
        } // checks if the queens in the perm are all on good squares


        //check if any queens are on same diagnol



        for(int q1 = 0; q1< 7; q1++)
        {
            for(int q2 = q1 +1; q2 < 8; q2++)
            {
                
                if(q1+perm[q1] == q2 + perm[q2]|| q1-perm[q1] == q2 - perm[q2])
                {
                    works = false;
                }


            }
        }

        ans += works;




    }

    while(next_permutation(perm.begin(), perm.end()));



    cout << ans;



}
