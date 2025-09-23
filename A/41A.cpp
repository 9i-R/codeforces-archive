#include <bits/stdc++.h>
using namespace std;
 
string s, s1;
 
int main() {
  
  ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
  
	cin>>s;
  reverse(s.begin(), s.end());
  
	cin>>s1;
	if (s==s1) cout<<"YES";
	else cout<<"NO";
  return 0;
}
