#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll result = 1e15;
ll total = 0; 
vector<ll> weights;
void completesearch(int i, int n, ll currentsum )
{
    if(i==n)
    {

        ll diff = abs((total-currentsum) - currentsum);
        result = min(diff, result);
        return;

    }
    else{

    //do not include current apple

    completesearch(i+1, n, currentsum);


    //include current apple

    currentsum += weights[i];
    completesearch(i+1, n,currentsum);




    //remove current apple

    currentsum -= weights[i];

    }
    

}


int main() {
	int n; cin >> n;
    for(int i = 0; i<n; i++)
    {
        ll p; cin >> p;
        weights.push_back(p);
        total += p;
    }

    completesearch(0, n, 0);

    cout << result;
}
