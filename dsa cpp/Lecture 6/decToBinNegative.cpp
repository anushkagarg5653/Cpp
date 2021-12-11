#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    n = abs(n);
    int bits = 1 + (int)(log2(n));
    for(int i=0; i<32-bits; ++i){
        cout<<1;
    }

    n = ~n+1;
    cout<< " ";

    // display
    for(int i=bits-1; i>=0; --i){
        int x = pow(2,i);
        cout<<(n&x)/x;
    }
    
    return 0;
}
