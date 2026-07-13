#include <bits/stdc++.h>
using namespace std;

int main() {

    freopen("taming.in", "r", stdin);
    freopen("taming.out", "w", stdout);
	int n; cin >> n;

    int mi = 0;  int ma = 0;
    int t = -1;

    int list[n];
    for(int i = 0; i<n; i++)
    {
        cin >> list[i];
    }

    if(list[0] != -1 && list[0] != 0)
    {
        cout << -1;
        return 0;
    }

    list[0] = 0;

    for(int i = n-1; i>-1; i--)
    {
        if(t==0)
        {
            mi++; ma++; t = -1;
            continue;
        }
        if(list[i] > 0)
        {

            if(t==-1)
            {
                t = list[i];
            }
            else if(t!=list[i])
            {
                cout << -1;
                return 0;
            }
            
        }

        else if(list[i] == -1)
        {
            if(t==-1)
            {
                ma++;
            }

        }

        else if(list[i]==0)
        {

            if(t==-1 || t==0)
            {
                mi ++; 
                ma ++;
                t = -1;
            }
            else if(t!=0)
            {
                cout << -1;
                return 0;
            }

        }

        if(t>0)
        {
            t--;
        }

        



    }

    if(t == 0) {
            mi++;
            ma++;
            t = -1; 
        }


    cout << mi << " " << ma;
	
}
