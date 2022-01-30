#include<iostream>
using namespace std;

int main(){
    int arr[3][3];
    cout<<"Enter the number :"<<endl;
    for(int row =0; row<3;row++){
        for(int col = 0;col<3;col++){
            cin>>arr[row][col];
        }
    }    
    for(int row =0; row<3;row++){
        int sum=0;
        for(int col = 0;col<3;col++){
            sum+=arr[row][col];
        }
        cout<<sum<< " "<<endl;;
    }    

    //output
    
    for(int row =0; row<3;row++){
        for(int col = 0;col<3;col++){
            cout<<arr[row][col]<< " ";
        }
        cout<<endl;
    }

    return 0;
}