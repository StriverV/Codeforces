
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

   
    set<int> st;
    for (int i = 1;i <= n;i++) 
    {
            int x;
            cin >> x;
            st.insert(x);
    }

    if(n>=2 && st.size() > 1)
    {
        vector<int> v(st.begin(), st.end());
        cout << v[1] << nl;
    }
   
    else
        no;

    return 0;
}