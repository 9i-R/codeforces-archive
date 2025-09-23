#include <bits/stdc++.h>
using namespace std;
 
int n, i, lth;
string str;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin>>n;
	for (i=0; i<n; i++) {
		cin>>str;
		lth = str.size();
		if (lth > 10) {
			cout<<str[0]<<lth-2<<str[lth-1]<<endl;
		} else cout<<str<<endl;
	}
	
	return 0;
}
