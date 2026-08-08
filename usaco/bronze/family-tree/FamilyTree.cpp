#include <bits/stdc++.h>
using namespace std;

vector<string> m; 
vector<string> d;

int main() {
    freopen("family.in", "r", stdin);
    freopen("family.out", "w", stdout);
	int n;
    string cowx, cowy;
    cin >> n >> cowx >> cowy;
    string out;

    for(int i = 0; i<n; i++)
    {
        string s1, s2;
        cin >> s1 >> s2;
        m.push_back(s1);
        d.push_back(s2);
    }

    vector<string> xAnc, yAnc;
    string cx = cowx, cy = cowy;

    while(find(d.begin(), d.end(), cx) != d.end()) // while cx has a mother
    {
        xAnc.push_back(cx);
        int tempX = distance(d.begin(), find(d.begin(), d.end(), cx));
        cx = m[tempX];
    } 

    xAnc.push_back(cx);

    while(find(d.begin(), d.end(), cy) != d.end())
    {
        yAnc.push_back(cy);
        int tempY = distance(d.begin(), find(d.begin(), d.end(), cy));
        cy = m[tempY];
    }
    
    yAnc.push_back(cy);

    string common;

    bool found = false;

    for(string x: xAnc)
    {
        if(found == true)
        {
            break;
        }
        else{
            for(string y: yAnc)
            {
                if(y==x)
                { 
                    common = x;
                    found = 1;
                    break;
                }
                
            }
        }
    }

    if(common == "")
    {
        cout << "NOT RELATED";
    }
    else {
        int xLvl = distance(xAnc.begin(), find(xAnc.begin(), xAnc.end(), common));
        int yLvl = distance(yAnc.begin(), find(yAnc.begin(), yAnc.end(), common));
  
        if(xLvl == yLvl && yLvl == 1){
            cout << "SIBLINGS";
        }
        else if(xLvl == yLvl || (xLvl > 1 && yLvl > 1)) {
            cout << "COUSINS";
        }
        else if(xLvl > yLvl)
        {
            int diff = xLvl - yLvl;
            if(cowy == common) {
                if (diff ==1) {
                    out = "mother";
                }
                else {
                    for(int j = 0; j<diff-2; j++)
                    {
                        out += "great-";
                    }
                    out += "grand-mother";
                }

                cout << (cowy + " is the " + out + " of " + cowx);

            } else{
                if(diff ==1)
                {
                    out = "aunt";
                }
                else{
                    for (int k = 0; k<diff-1; k++)
                    {
                        out += "great-";
                    }
                    out += "aunt";
                }

                cout << (cowy + " is the " + out + " of " + cowx);

            }
            

        } else{

            int diff = yLvl - xLvl;

            if(cowx == common)
            {
                if (diff ==1) {
                    out = "mother";
                }
                else {
                    for(int j = 0; j<diff-2; j++)
                    {
                        out += "great-";
                    }
                    out += "grand-mother";
                }

                cout << (cowx + " is the " + out + " of " + cowy);

            } else{
                if(diff ==1)
                {
                    out = "aunt";
                }
                else{
                    for (int k = 0; k<diff-1; k++)
                    {
                        out += "great-";
                    }
                    out += "aunt";
                }

                cout << (cowx + " is the " + out + " of " + cowy);

            }
            
            }
        }
  
  
    }

