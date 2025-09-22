#include <bits/stdc++.h>
using namespace std;
 
int i;
string sum, new_sum;
 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
  
  cin>>sum;
	for(i=0; i<sum.length(); i++) {
		if(sum[i]!='+') {
			new_sum.push_back(sum[i]);
		}
	}
	sort(new_sum.begin(), new_sum.end());
	for (i=0; i<new_sum.length(); i++) {
		cout<<new_sum[i];
		if (i+1<new_sum.length()) {
			cout<<"+";
		}
	}
	cout<<endl;

  return 0;
}
