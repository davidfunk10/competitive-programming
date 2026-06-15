#include <bits/stdc++.h>
using namespace std;

bool isinRec(int x, int y, int blx, int bly, int trx, int TRY)
{
    return(x>=blx && x<=trx && y>=bly && y<= TRY);
}
int main() {
    
    freopen("billboard.in", "r", stdin);
    freopen("billboard.out", "w", stdout);
	int bx1, by1, bx2, by2, fx1, fy1, fx2, fy2; cin >> bx1 >> by1 >> bx2 >> by2 >> fx1 >> fy1 >> fx2 >> fy2;

    int corners = 0;

    if(isinRec(bx1, by1, fx1, fy1, fx2, fy2)) {corners ++;}
    if(isinRec(bx1, by2, fx1, fy1, fx2, fy2)) {corners ++;}
    if(isinRec(bx2, by1, fx1, fy1, fx2, fy2)) {corners ++;}
    if(isinRec(bx2, by2, fx1, fy1, fx2, fy2)) {corners ++;}

    if(corners <=1)
    {
        int fullarea = (bx2-bx1) * (by2-by1);
        cout << fullarea;
    }
    else if(corners == 2)
    {
        int ix1 = max(fx1, bx1);
        int iy1 = max(fy1, by1);
        int ix2 = min(fx2, bx2);
        int iy2 = min(by2, fy2);

        int intersection = (ix2 - ix1) * (iy2-iy1);
        int fullarea = (bx2-bx1) * (by2-by1);
        cout << (fullarea - intersection);
    }
    else
    {
        cout << 0;
    }

}
