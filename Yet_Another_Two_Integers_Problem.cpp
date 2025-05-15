
#include<bits/stdc++.h>
#define Naba ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long 
#define nl '\n'
using namespace std;

int main()
{
    Naba;

    int TestCase;
    cin >> TestCase;

    while(TestCase--)
    {

        ll a,b;
        cin >> a >> b;

        if(a == b)
        {
            cout<<"0"<<nl;
            continue;
        }

    
        int diff_ab = abs(a-b);
        int moves  = (diff_ab + 9)/10;
        cout << moves << nl;

        // The formula (diff_ab + 9) / 10 rounds up the number of moves when dividing by 10.
        // Adding 9 ensures that if the difference is not perfectly divisible by 10,
        // it rounds up to the next integer. This trick guarantees that you get one extra move when there's a remainder


    }

    return 0;
}
