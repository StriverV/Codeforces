#include<bits/stdc++.h>
#define Naba ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long 
#define bl bool 
#define nl '\n'
using namespace std;

int main()
{
    Naba

    int TestCase;
    cin >> TestCase;

    while(TestCase--)
    {
        string s;
        cin >> s;

        int l = s.size()-2;
        
        s.erase(l,2);
        s.push_back('i');
        
        cout << s << nl;

    }

    return 0;
}

