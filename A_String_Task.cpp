
#include<bits/stdc++.h>
#define Naba ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long 
#define bl bool 
#define nl '\n'
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
using namespace std;

int main()
{
    Naba;

    string s;
    cin >> s;
    for (auto &i : s) i = tolower(i);

    vector<char>c;

    for (auto i : s) 
        if (i != 'a' && i != 'o' && i != 'y' && i != 'e' && i != 'u' && i != 'i')
            cout << '.' << i;


    for (auto i : c)    cout << i;
   
    return 0;
}