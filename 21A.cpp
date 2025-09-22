#include <bits/stdc++.h>
using namespace std;
 
int n, i, size;
string str;
 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin>>n;
	for (i=0; i<n; i++) {
		cin>>str;
		size = str.size();
		if (size > 10) {
			cout<<str[0]<<size-2<<str[size-1]<<endl;
		} else cout<<str<<endl;
	}
	
	return 0;
}
