#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int statements;
    cin >> statements;
   
    int final_x = 0;
    while(statements --)
    {
        string s;
        cin >> s;
        s == "++X" || s == "X++" ? final_x++ : final_x--;
    
    }
       
    cout << final_x << endl;

    return 0;
}