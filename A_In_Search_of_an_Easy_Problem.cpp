
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

    int n;
    cin >> n;
    vector<int>people(n);
    for(int i = 0; i < n; i++)
        cin >> people[i];

    bool easy  = true;
    for(auto ith_people : people)
    {
        if(ith_people == 1)
        {
            easy = false;
            break;
        }
    }

    easy ? cout << "EASY" << nl : cout << "HARD" << nl ;

    return 0;
}