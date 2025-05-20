
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

    int n;
    cin >> n;
    vector<string>v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];

    int faces  = 0;

    for(auto i : v)
    {
        if(i == "Icosahedron" )   faces  += 20;
        else if(i == "Cube" )   faces  += 6;
        else if(i == "Tetrahedron" )   faces  += 4;
        else if(i == "Octahedron" )   faces  += 8;
        else    faces  += 12;
    }

    cout << faces << endl;
    return 0;
}
