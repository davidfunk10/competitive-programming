#include <bits/stdc++.h>
using namespace std;

int main() {
	int s, v1, v2, t1, t2;

    cin >> s >> v1 >> v2 >> t1 >> t2;

    int boy1 = 2*t1 + s * v1;
    int boy2 = 2*t2 + s * v2;

    if(boy1<boy2)
    {
        cout << "First";
    }
    else if (boy1>boy2)
    {
        cout  << "Second";
    }
    else{
        cout << "Friendship";
    }


}
