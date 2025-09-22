#include <bits/stdc++.h>
using namespace std;

int N, i, cnt, mx, mn;

int main() {

  	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
  
	cin>>N;
	int arr[N];
	for (i=0; i<N; i++) {
		cin>>arr[i];
	}
	mx=arr[0];
	mn=arr[0];
	for (i=0; i<N; i++) {
		if (arr[i]>mx) {
			mx=arr[i];
			cnt++;
		}
		else if (arr[i]<mn) {
			mn=arr[i];
			cnt++;
		}
	}
	cout<<cnt;
}
