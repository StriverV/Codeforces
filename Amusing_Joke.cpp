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

    string guest_name, residence_host, letters;

    cin >> guest_name;
    cin >> residence_host;
    cin >> letters;


    string t = guest_name + residence_host;
    sort(t.begin(), t.end());
    sort(letters.begin(), letters.end());


    t == letters? yes : no;

    return 0;
}
