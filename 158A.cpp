#include <bits/stdc++.h>
using namespace std;
 
int n, k, i, x, counter=0;
int arr[101];
 
int main() {
  ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
  
	cin>>n>>k;
	for (i=0; i<n; i++) {
		cin>>arr[i];
	}
  
	x=sizeof(arr)/sizeof(arr[0]);
	sort(arr, arr+n, greater<int>());
  
	for(i=0; i<n; i++) {
		if (arr[i] >= arr[k-1] && arr[i] > 0) {
			counter++;
		}
	}
	cout<<counter<<endl;

  return 0;
}
