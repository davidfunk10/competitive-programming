#include <bits/stdc++.h>
using namespace std;

int main() {
	double h, m, s, t1, t2; cin >> h >> m >> s >> t1 >> t2;

    if(h == 12) h = 0;
    if(t1 == 12) t1 = 0;
    if(t2 == 12) t2 = 0;

    h += m/60; h+= s/3600;
    m = m/5 + s/300; s/=5;

    

    double ray[5] = {h,m,s,t1,t2};

    sort(ray, ray+5);

    int t1ind = -1; 
    int t2ind = -1;

    for (int i = 0; i<5; i++)
    {
        if(ray[i]==t1)
            t1ind = i;
        else if (ray[i]==t2)
            t2ind = i;
    }
    

    if (((ray[0]==t1 || ray[0] ==t2) && (ray[4] == t1 || ray[4] == t2)) || abs(t1ind-t2ind) == 1 ) {cout << "YES";}
    else {cout << "NO";}



}
