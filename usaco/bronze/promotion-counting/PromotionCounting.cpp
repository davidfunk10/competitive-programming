#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("promote.in", "r", stdin);
    freopen("promote.out", "w", stdout);
    
    
	int sb, eb, ss, es, sg, eg, sp, ep; cin >> sb >> eb >> ss >> es >> sg >> eg >> sp >> ep;
    int b, s, g = 0;

    int gp, stg, bs;



    gp = ep - sp;
    stg = eg - sg + (ep - sp);
    bs = es - ss + stg;


	cout << bs << "\n" << stg << "\n" << gp;
}
