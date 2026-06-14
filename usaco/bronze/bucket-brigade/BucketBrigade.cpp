#include <bits/stdc++.h>
using namespace std;

int main() {
	int bi, bj, ri, rj, li, lj;
    for(int i = 0; i<10; i++)
    {
        string row;
        cin >> row;
        for(int j= 0; j<10; j++)
        {
            if(row[j] == 'B')
                {bi = i; bj = j;}
            if(row[j] == 'L')
                {li = i; lj = j;}
            if(row[j] == 'R')
                {ri = i; rj = j;}
        }
    }

    int cows = (abs(bj-lj) + abs(bi-li) -1);
    
    if((bi==li && ri == bi && rj < max(bj, lj) && rj > min(bj, lj)) || (bj==lj && rj == bj && ri < max(bi, li) && rj > min(bi, li)))
    {
        cows+=2;
    }
	cout << cows;
}
