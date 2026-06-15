#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("word.in", "r", stdin);
    freopen("word.out", "w", stdout);
	int n, k; cin >> n >> k;
    int ll = 0;
    for(int i = 0; i< n; i++)
    {
        
        string S; cin >> S;
        if(ll + S.length() <=k)
        {
            if(ll != 0)
                cout << " " << S;
            else
                cout << S;
            
            ll += S.length();
        }
        else if(ll + S.length() > k)
        {
            cout << "\n" << S;
            ll = S.length();
        }
    }
	
}
