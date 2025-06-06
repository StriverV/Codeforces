#include<bits/stdc++.h>
#define Naba ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define nl '\n'
using namespace std;

int main()
{
    Naba;

    int testcase;
    cin >> testcase;
    
    while(testcase--)
    {
        string s;
        cin >> s;
        
        map<char,int>mp;
        
        for(auto i : s)
        {
            mp[i]++;
        }
        
        if(mp['A'] > mp['B'] )
            cout << "A" << nl;
        else
            cout << "B" << nl;
        
        
    }
    
    return 0;
}