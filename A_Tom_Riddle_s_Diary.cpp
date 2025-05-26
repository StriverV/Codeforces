
#include<bits/stdc++.h>
#define Naba ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ll long long 
#define bl bool 
#define nl '\n'
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
using namespace std;

int main()
{
    Naba;

    int TestCase;
    cin >> TestCase;

    map<string, int>names ;  

    while(TestCase--)
    {
    
        string x;
        cin >> x;

        if(!names .count(x))
        {
            no;
            names [x]++;
        }
        

        else 
        {
            yes;
            names [x]++;
        }
    
    }

    return 0;
}