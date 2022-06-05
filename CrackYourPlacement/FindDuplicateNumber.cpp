#include<iostream>
using namespace std;

int main(){
    int a[5] = {1,3,4,2,2};
    int slow = a[0];
    int fast = a[0];

    do{
        slow = a[slow];
        fast = a[a[fast]];
    }while(slow!=fast);

    fast = a[0];
    while(slow!=fast){
        slow = a[slow];
        fast = a[fast];
    }

    cout<<slow;
    return 0;
}