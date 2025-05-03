
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

    int TestCase;
    cin >> TestCase;

    while(TestCase--)
    {
        int k;
        cin >> k;

        int cnt = 0,x;

        for(int i = 1; i<=10000; i++)
        {
            if(i % 3 != 0 &&   i % 10 != 3 )    cnt++;

            if(i % 3 != 0 &&   i % 10 != 3  && cnt == k)
            { 
                x = i;
            }
        }
    
        cout << x  << nl;
    }

    return 0;
}
