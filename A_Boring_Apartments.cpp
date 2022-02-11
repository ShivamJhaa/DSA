#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);


int main(){
    fastio
    int t;
	cin >> t;
	while (t--) {
		string x;
		cin >> x;
		int dig = x[0] - '0' - 1;
		int len = x.size();
		cout << dig * 10 + len * (len + 1) / 2 << endl;
	}
	
	return 0;
}