#include <bits/stdc++.h>
using namespace std;

int main() {
	
	string s;
	cin >> s;
	
	int f = s[0] - '0';
	f%2? cout << "ODD" << endl:cout << "EVEN" << endl;

    return 0;
}
