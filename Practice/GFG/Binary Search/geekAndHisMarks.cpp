#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	 int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }            
        
        // Sort all the marks in increasing order
        sort(arr, arr+n);

        int q;
        cin >> q;
        while(q--)
        {
            int x;
            cin >> x;

            // Get the first position which has is greater than X
            int pos = upper_bound(arr, arr+n, x) - arr;

            // Print the count of such students
            cout << n - pos << "\n";
        }

    }

    return 0;

}