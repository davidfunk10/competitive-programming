#include <bits/stdc++.h>
using namespace std;


int main() {
	int n; cin >> n;
    string sequence; cin >> sequence;
	int x = 0; int y= 0; 
    int result = 0;

    for(int i=0; i<sequence.length()-1; i++)
    {
        if(sequence[i]=='R')
        {
            x++;
        }
        else 
            y++;

        if(x==y)
        {
            if(sequence[i]==sequence[i+1])
            {
                result++;
            }
        }
    }

    cout << result;
}
