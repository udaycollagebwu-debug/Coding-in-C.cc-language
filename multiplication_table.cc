#include<iostream>
using namespace std;
int main(){
int num,i,ans;
cout<<"Enter the number you want the multiplication table :";
cin>>num;
for(i=1;i<=10;i++){
    ans=0;
    ans=num*i;
    cout<<num<<"*"<<i<<"="<<ans<<endl;
}

    return 0;
}