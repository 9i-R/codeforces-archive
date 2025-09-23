#include <bits/stdc++.h>
using namespace std;
 
int target, ans;
 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin>>target;
	ans=target/5;
	if (target%5!=0) {
		ans++;
	}
	cout<<ans;
	
	return 0;
}
