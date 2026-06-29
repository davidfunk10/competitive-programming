#include <bits/stdc++.h>
using namespace std;

int n, m, d, s;

int persondm[1001];
int milk[1001];
int drinkt[1001];

int persongs[51];
int sickt[51];


bool drankbefore(int p, int mi, int time)

{
    for(int i = 1; i<=d; i++)
    {
        if(persondm[i] == p && milk[i] == mi && drinkt[i] < time) return 1;
    }
    return 0;

}
bool milkbad(int mi)
{

    for(int i = 1; i<=s; i++)
    {
        if(!drankbefore(persongs[i], mi, sickt[i])) return 0;

    }

    return 1;
}


int countdrank(int mi)
{
    int count = 0; 
    int ppl[51] = {0};

    for(int i = 1; i<=d; i++)
    {
        if(milk[i] == mi) ppl[persondm[i]] = 1;
    }

    for(int i = 1; i<=50; i++)
    {
        if(ppl[i] == 1) count++; 
    }
    return count;

}
int main() {

    freopen("badmilk.in", "r", stdin);
    freopen("badmilk.out", "w", stdout);

	cin >> n >> m >> d >> s;

	for(int i = 1; i<= d; i++)
    {
        cin >> persondm[i] >> milk[i] >> drinkt[i];
    }

    for(int i = 1; i<=s ; i++)
    {
        cin >> persongs[i] >> sickt[i];
    }



    int ans = 0;
    for(int i = 1; i<=m; i++)
    {
        int cur = 0;
        if(milkbad(i)) cur = countdrank(i);

        ans = max(ans, cur);
    }


    cout << ans;




}
