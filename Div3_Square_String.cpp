#include<bits/stdc++.h>
#define Binary_Blossoms ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define nl '\n'
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
using namespace std;

int main()
{
    Binary_Blossoms;

    int TestCase;
    cin >> TestCase;

    while(TestCase--)
    {
        string s;
        cin >> s;
        
        if(s.size()%2)
        {
            no;
            continue;
        }

        int ss = s.size()/2;
    
        s.substr(0, ss)  == s.substr(ss) ? yes : no;
        
 
    }

    return 0;
}
