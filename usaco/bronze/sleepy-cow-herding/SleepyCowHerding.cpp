#include <bits/stdc++.h>
using namespace std;

int main() {

    freopen("herding.in", "r", stdin);
    freopen("herding.out", "w", stdout);

	int a, b, c; cin >> a >> b >> c;
    int mi, ma;
    vector<int> line;
    line.push_back(a);
    line.push_back(b);
    line.push_back(c);

    sort(line.begin(), line.end());
	
    //find min

    // zero case

    if(line[1]-line[0] == 1 && line[2] -line[1] == 1)
    {
        mi = 0;
    }

    // one case

    else if(line[1]-line[0] == 2 || line[2] -line[1] == 2)
    {
        mi = 1;
    }
    // two case
    else {
        
        mi = 2;

    }


    //find max

    ma = max(line[2] - line[1], line[1] - line[0]) - 1;

    cout << mi << "\n" << ma;



    
}
