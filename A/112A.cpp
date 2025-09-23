#include <bits/stdc++.h>
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	char x[101], y[101];
	int temp;
	
	cin>>x>>y;
	
	temp=strcasecmp(x, y);
	if (temp==0) {
		cout<<0;
	} else if (temp>0) {
		cout<<"1";
	} else if (temp<0) {
		cout<<"-1";
	}
	
	return 0;
}
