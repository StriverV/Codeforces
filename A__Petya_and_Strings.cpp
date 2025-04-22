
#include<bits/stdc++.h>
#define Naba ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long 
#define nl '\n'
#define yes cout << "YES" << nl;
#define no cout << "NO" << nl;
using namespace std;

int main()
{
    Naba;

    string presents1, presents2;
    cin >> presents1;
    cin >> presents2;
    
    transform(presents1.begin(), presents1.end(),presents1.begin(), :: tolower);
    transform(presents2.begin(), presents2.end(),presents2.begin(), :: tolower);

    if(presents1 == presents2)
       cout << "0" << nl;
    
    else if(presents1 < presents2)
        cout << "-1" << nl;

    else if(presents1 > presents2) 
         cout << "1" << nl;
    return 0;
}