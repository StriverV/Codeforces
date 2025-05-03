#include<bits/stdc++.h>
#define Naba ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long 
#define bl bool 
#define nl '\n'
using namespace std;

int main()
{
    Naba;

    int n;
    cin >> n;

    bl ok = 0;

    int p; cin>>p;
   
    set<int>s;
    for(int i = 0 ; i < p; i++)
    {
        int x; cin >> x;
        s.insert(x);
    }
       
    int q; cin >> q;
    
   
    for(int i = 0 ; i < q; i++)
    {
        int x; cin >> x;
        s.insert(x);
    }
        
    s.size() == n ? cout << "I become the guy." << nl : cout << "Oh, my keyboard!" << nl;

    return 0;
}
