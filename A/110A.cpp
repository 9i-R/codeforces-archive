#include <bits/stdc++.h>
using namespace std;
 
string s;
int cnt, i;
 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin>>s;
	cnt=0;
	for (i=0; i<s.length(); i++) {
		if (s[i] == '4' || s[i] == '7') cnt++;
	}
	if (cnt==7||cnt==4) cout<<"YES";
	else cout<<"NO";
	
	return 0;
}
