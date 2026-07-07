#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
    set<int> result;
    for(int i = 0; i<n; i++)
    {
        int a; cin>>a;
        result.insert(a);

    }
    cout << result.size();
}
