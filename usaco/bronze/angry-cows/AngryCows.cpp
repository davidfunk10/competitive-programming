#include <bits/stdc++.h>
using namespace std;

int n; 
vector<int> bales;

int countexp(int start, int dir)
{
    int prev = start;
    int r = 1;
    
    while(true)
    {
        int next = prev;

        while(next + dir >= 0 && next + dir < n && abs(bales[next+dir] - bales[prev]) <= r)
        {
            next += dir;
        }

        

        if(next == prev)
        {
            return(abs(prev-start));
            break;
        }

        prev = next;
        r+=1;
        

        



    }
}
int main() {

    freopen("angry.in", "r", stdin);
    freopen("angry.out","w",stdout);
    cin >> n;
    bales.resize(n);
	
    for(int i = 0; i < n; i++)
    {
        cin >> bales[i];
    }

    

    sort(bales.begin(),bales.end());

    int a = 0;

    for(int i = 0; i<n; i++)
    {
        a = max(a, countexp(i, -1) + countexp(i, 1) + 1);
    }

    cout << a;

}
