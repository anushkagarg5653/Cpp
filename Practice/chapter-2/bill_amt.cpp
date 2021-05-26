#include<iostream>
using namespace std;

int main(){
    float total_amt, amt, sub_total, discount_amt, tax_amt, qty, val, discount, tax;
    cout<<"\n Enter the quantity of item sold : ";
    cin>>qty;
    cout<<"\n Enter the value of item : ";
    cin>>val;
    cout<<"\n Enter the  discount percentage : ";
    cin>>discount;
    cout<<"\n Enter the tax : ";
    cin>>tax;

    amt  = qty * val;
    discount_amt = (amt * discount)/100.0;
    sub_total = amt - discount_amt;
    tax_amt = (sub_total * tax)/100.0;
    total_amt = sub_total + tax_amt;

    cout<<"\n\n\n *************BILL*************";
    cout<<"\n\n Quality sold : \t "<< qty;
    cout<<"\n\n Price per item : \t "<< val;
    cout<<"\n \t \t -------------";
    cout<<"\n Amount : \t\t"<<amt;
    cout<<"\n Discount : \t\t- "<< discount_amt;
    cout<<"\n \t\t -------------";
    cout<<"\n Discounted Total : \t "<<sub_total;
    cout<<"\n Tax : \t\t\t + "<< tax_amt;
    cout<<"\n Tax : \t\t -------------";
    cout<<"\n Total Amount to be paid "<< total_amt;
    return 0;
}