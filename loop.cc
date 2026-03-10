#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of times you want to print 'I Love you' :";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<i+1<<".I Love you."<<endl;
    }
    return 0;
}