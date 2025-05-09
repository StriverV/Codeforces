#include<bits/stdc++.h>
#define Naba ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long 
#define nl '\n'

using namespace std;

int main()
{
    Naba;
    int n;
    cin >> n;

    string s;
    cin >> s;

    char c = s[0];
    int cnt = 0;

    for(int i = 1; i < n; i++)
    {
        if(c == s[i])   cnt++;
        c = s[i];
    }

    cout << cnt << nl;
 
    return 0;
}
