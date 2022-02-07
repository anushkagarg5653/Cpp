#include<iostream>
using namespace std;

void reachHome(int start, int destination){
    cout<<"Source "<<start<<" "<<"destiantion is "<<destination<<endl;

    //base case
    if(start == destination){
        cout<<"pahuch gya "<<endl;
        return;
    }

    //processing - ek step aage badhjao
    start++;

    //recursive call
    reachHome(start, destination);
}

int main(){
    int destination = 10;
    int start = 1;

    cout<<endl;

    reachHome(start,destination);
    return 0;
}