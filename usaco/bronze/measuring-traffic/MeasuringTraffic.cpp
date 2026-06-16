#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
	int n; cin >> n;
    int A[n]; int B[n]; string T[n];

    for(int i =0; i<n; i++)
    {
        string t; int a, b; cin >> t >> a >> b;
        T[i] = t;
        A[i] = a;
        B[i] = b;
    }
    int a = -99999999; int b = 999999999;

    for(int i = n-1; i>=0; i--)
    {
        int ap = A[i];
        int bp = B[i];
        if(T[i] == "none") {a = max(ap, a); b = min(bp, b);}
        if(T[i] == "off") {a = a+ap; b = b+bp;}
        if(T[i] == "on") {a = a-bp; b = b-ap; a=max(0,a);}
    }

    cout << a << " " << b << "\n";

    a = -99999999; b = 999999999;

    for(int i = 0; i<n; i++)
    {
        int ap = A[i];
        int bp = B[i];
        if(T[i] == "none") {a = max(ap, a); b = min(bp, b);}
        if(T[i] == "on") {a = a+ap; b = b+bp;}
        if(T[i] == "off") {a = a-bp; b = b-ap; a=max(0,a);}
    }


	cout << a << " " << b;
}
