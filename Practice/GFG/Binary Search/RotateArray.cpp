#include <iostream>
using namespace std;
//1 2 3 4 5 - i/p
// 3 4 5 1 2 -o/p


int main() {
	int t;
	cin>>t;
	while(t--){
	int n,k;

	cin>>n>>k;
		int a[n];
    for(int i=n-k;i<n;i++){
	    cin>>a[i];
	}
	for(int i=0;i<n-k;i++){
	    cin>>a[i];
	}
	for(int i=0;i<n;i++){
	    cout<<a[i]<<" ";
	}
	cout<<endl;
	}
	
	return 0;
}