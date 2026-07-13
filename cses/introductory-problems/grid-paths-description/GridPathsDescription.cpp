#include <bits/stdc++.h>
using namespace std;


int dr[] = {-1, 0, 1, 0};
int dc[] = {0, 1, 0, -1};
int p[48];
bool onpath[9][9];


int trypath(int ci, int cr, int cc)
{
    //check for grid splits
    if(onpath[cr][cc+1]&&onpath[cr][cc-1] && !onpath[cr+1][cc] && !onpath[cr-1][cc]) return 0;
    if(onpath[cr+1][cc]&&onpath[cr-1][cc] && !onpath[cr][cc-1] && !onpath[cr][cc+1]) return 0;

    if(cr==7 && cc==1)
    {
        if(ci==48)
        {
            return 1;
        }
    }

    if(ci == 48)
    {
        return 0;
    }

    onpath[cr][cc] = true;
    int ret = 0;

    if(p[ci] < 4)
    {
        int nr = cr + dr[p[ci]];
        int nc = cc + dc[p[ci]];

        if(!onpath[nr][nc])
        {
            ret += trypath(ci+1, nr, nc);
        }
    }
    else if((cc>2) && onpath[cr][cc-2] && (onpath[cr-1][cc-1] || onpath[cr+1][cc-1]) && (!onpath[cr][cc-1]))
    {
        int nr = cr;
        int nc = cc -1;
        ret += trypath(ci+1, nr, nc);
    }
    else if((cc<6) && onpath[cr][cc+2] && (onpath[cr-1][cc+1] || onpath[cr+1][cc+1]) && (!onpath[cr][cc+1]))
    {
        int nr = cr;
        int nc = cc +1;
        ret += trypath(ci+1, nr, nc);
    }
    else if((cr>2) && onpath[cr-2][cc] && onpath[cr-1][cc-1] && (!onpath[cr-1][cc]))
    {
        int nr = cr-1;
        int nc = cc;
        ret += trypath(ci+1, nr, nc);
    }
    else{
        for(int i = 0; i<4; i++)
        {
            int nr = cr + dr[i];
            int nc = cc + dc[i];
            if(onpath[nr][nc])
            {
                continue;
            }
            else{
                ret+= trypath(ci+1, nr, nc);
            }
        }
    }

    //cleanup

    onpath[cr][cc] = false;
    return ret;

}
int main() {
    for(int i = 0; i<48; i++)
    {
        char l; cin >> l;
        if(l=='U') p[i] = 0;
        if(l=='R') p[i] = 1;
        if(l=='D') p[i] = 2;
        if(l=='L') p[i] = 3;
        if(l=='?') p[i] = 4;
    }

    for(int i = 0; i<9; i++)
    {
        onpath[0][i] = true;
        onpath[8][i] = true;
        onpath[i][8] = true;
        onpath[i][0] = true;
    }

    for(int r = 1; r<8; r++)
    {
        for(int c = 1; c<8; c++)
        {
            onpath[r][c] = false;
        }
    }

    int si = 0;
    int sr = 1; 
    int sc = 1;

    int ans = trypath(si, sr, sc);

    cout << ans << "\n"; 

}
