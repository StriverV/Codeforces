
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

    int n,h;
    cin >> n >> h;

    vector<int>height(n);
    for(int i = 0; i < n; i++)
        cin >> height[i];

    int width = 0, cnt = 0;

    for(int i = 0; i < n; i++)
    {
        if(height[i] > h)
        {
            cnt++;
            width += 2;
            // cout << width << nl;
        }   
        else
        {
            width += 1;
            // cout << width << nl;
        }
    }  

    cout << width << nl;
    return 0;
}
