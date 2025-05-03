
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

    string n1,n2;
    cin >> n1 >> n2;


    vector<char>v_res;
    for(int i = 0; i < n1.size(); i++)
    {
        if(n1[i] != n2[i])
        {
            v_res.push_back('1');
        }    
        else 
        {
            v_res.push_back('0');
        }    
    }

    for(auto i : v_res)    
        cout << i;
    cout << nl;

    return 0;
}
