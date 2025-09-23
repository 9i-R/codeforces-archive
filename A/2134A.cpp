#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t; cin>>t;
	for (int i=0; i<t; i++) {
		int n, a, b; cin>>n>>a>>b;
		if (n%2==b%2) {
			if (n%2==a%2 || a<b) {
				cout<<"Yes"<<endl;
				continue;
			} else {
				cout<<"No"<<endl;
				continue;
			}
		} else {
			cout<<"No"<<endl;
			continue;
		}
	}	
}
