#include <bits/stdc++.h>
using namespace std;
 
int i, k, n, w, temp, price=0;
 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin>>k>>n>>w;
	for (i=1;i<=w;i++) {
		temp=i*k;
		price+=temp;
	}
	if (n<price) {
		cout<<price-n;
	} else {
		cout<<0;
	}
	
	return 0;
}
