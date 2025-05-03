#include<bits/stdc++.h>
#define Naba ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long 
#define bl bool 
#define s string 
#define c char 
#define nl '\n'
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define MOD 1000000007
using namespace std;

int main()
{
    Naba;

    int n;
    cin >> n;
    string s; 
    cin >> s;

    int ant = 0, dan = 0;
    for(auto i : s)
    {
        if(i == 'A')    ant++;
        else if(i == 'D')    dan++;
    }

    if(ant > dan)   cout << "Anton" << nl;
    else if(ant < dan)   cout << "Danik" << nl;
    else    cout << "Friendship" << nl;
    
     

    return 0;
}
