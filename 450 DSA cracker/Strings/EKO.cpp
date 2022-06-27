
#include<iostream>
using namespace std;

int woodSuff(int h){
    long long wood = 0;
    for(int i=0; i<n; ++i){
        if(arr[i] >= h )
        {
            wood += (arr[i] - h);
        }
    }
    return wood >= m;
}

int main(){
    long long lb = 0;
    long long ub = 1e9;
    int mid = lb + (ub - lb)/2;
    while(lb<ub){
        if(woodSuff(mid)){
            lb = mid;
        }
        else{
            ub = mid - 1;

        }
    }
    if(woodSuff(ub))
        cout<<lb<<endl;
    else{
        cout<ub<<endl;
    }
    return 0;
}