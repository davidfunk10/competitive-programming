// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {

    string pass; cin >> pass;

    int n; cin >> n;

    bool c1 = false; bool c2 = false;


    for (int i = 0; i<n; i++)
    {
        string str; cin >> str;
        if (str.at(str.length()-1) == pass.at(0))
            c1 = true;
        if (str.at(0) == pass.at(1))
            c2 = true;
        
        if(str == pass ) {c1 = true; c2 = true;}
        
    }

    if(c1&&c2)
        cout << "YES";
    else
        cout << "NO";





	
}
