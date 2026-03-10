#include<iostream>
using namespace std;
int main(){
    int i,fact=1,num;
    cout<<"Enter the number you want to fond the factoryal :";
    cin>>num;
    for(i=1;i<=num;i++){
        fact=fact*i;
    }
    cout<<"The factoryal of "<<num<<" number is: "<<fact<<endl;
}