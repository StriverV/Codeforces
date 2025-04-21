
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
    int TestCase;
    cin >> TestCase;

    while(TestCase--)
    {
        int n;
        cin >> n;
        vector<int>a(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];
        
        set<int>s(a.begin(), a.end());

        cout << s.size() << nl;
    }

    return 0;
}