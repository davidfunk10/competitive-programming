#include <bits/stdc++.h>
using namespace std;

vector<string> perms;
string s;
int charsleft[26];

void search(string cur)
    {
        for(int i = 0; i< 26; i++)
        {
            if(cur.size()==s.size())
            {
                perms.push_back(cur);
                return;
            }
            if(charsleft[i] > 0)
            {
                charsleft[i]--;
        
                search(cur+char(i+'a'));

                charsleft[i]++;
            }
        }
    }


int main() {
	cin >> s;
    
   


    for(char &c: s)
    {
        charsleft[c-'a']++;
    }

    

    search("");

	cout << perms.size() << endl;
    for(string &s: perms)
    {
        cout << s << "\n";
    }
} 
