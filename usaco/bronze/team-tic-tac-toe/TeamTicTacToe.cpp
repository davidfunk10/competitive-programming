#include <bits/stdc++.h>
using namespace std;

int main() {

    freopen("tttt.in", "r", stdin);
    freopen("tttt.out","w",stdout);

	char board[3][3];

    set<int> indwinners;
    set<set<int>> teamwinners;

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j<3; j++)
        {
            char x; cin >> x;
            board[i][j] = x;
        }
    }

    set<int> row;

    row.insert(board[0][0]);
    row.insert(board[0][1]);
    row.insert(board[0][2]);

    if(row.size() == 1)
    {
        indwinners.insert(*row.begin());
    }
    else if(row.size()==2)
    {
        teamwinners.insert(row);
    }

    row.clear();

    row.insert(board[1][0]);
    row.insert(board[1][1]);
    row.insert(board[1][2]);

    if(row.size() == 1)
    {
        indwinners.insert(*row.begin());
    }
    else if(row.size()==2)
    {
        teamwinners.insert(row);
    }


    row.clear();

    row.insert(board[2][0]);
    row.insert(board[2][1]);
    row.insert(board[2][2]);

    if(row.size() == 1)
    {
        indwinners.insert(*row.begin());
    }
    else if(row.size()==2)
    {
        teamwinners.insert(row);
    }

    row.clear();

    row.insert(board[0][0]);
    row.insert(board[1][0]);
    row.insert(board[2][0]);

    if(row.size() == 1)
    {
        indwinners.insert(*row.begin());
    }
    else if(row.size()==2)
    {
        teamwinners.insert(row);
    }
    

    row.clear();

    row.insert(board[0][1]);
    row.insert(board[1][1]);
    row.insert(board[2][1]);

    if(row.size() == 1)
    {
        indwinners.insert(*row.begin());
    }
    else if(row.size()==2)
    {
        teamwinners.insert(row);
    }

    row.clear();

    row.insert(board[0][2]);
    row.insert(board[1][2]);
    row.insert(board[2][2]);

    if(row.size() == 1)
    {
        indwinners.insert(*row.begin());
    }
    else if(row.size()==2)
    {
        teamwinners.insert(row);
    }

    row.clear();

    row.insert(board[0][0]);
    row.insert(board[1][1]);
    row.insert(board[2][2]);

    if(row.size() == 1)
    {
        indwinners.insert(*row.begin());
    }
    else if(row.size()==2)
    {
        teamwinners.insert(row);
    }

    row.clear();

    row.insert(board[2][0]);
    row.insert(board[1][1]);
    row.insert(board[0][2]);

    if(row.size() == 1)
    {
        indwinners.insert(*row.begin());
    }
    else if(row.size()==2)
    {
        teamwinners.insert(row);
    }


    cout << indwinners.size() << "\n" << teamwinners.size();
}
