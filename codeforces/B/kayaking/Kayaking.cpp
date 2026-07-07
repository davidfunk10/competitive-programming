#include <bits/stdc++.h>
using namespace std;

int main() {
	
    int n; cin >> n;
    int w[100];
    for(int i = 0; i<2*n; i++)
    {
        int a; cin>>a;
        w[i] = a;
    }

    sort(w, w+2*n);

    int ans = 1000;

    for(int p1 = 0; p1 < 2*n -1; p1 ++)
    {
        for(int p2 = p1 +1; p2< 2*n; p2++) // two people getting their own kayaks
        {

            vector<int> temp;
            int cur = 0;
            for(int i = 0; i<2*n; i++)
            {
                if(i!=p1 && i!=p2)
                {
                    temp.push_back(w[i]);
                }
            }

            for(int i =0; i<2*n-3; i+=2) // getting seperate pairs that are close to each other in value
            {
                int dif = temp[i+1]-temp[i];
                cur+= dif;
            }

            ans = min(cur, ans);

        }
    }

    cout << ans;
}
