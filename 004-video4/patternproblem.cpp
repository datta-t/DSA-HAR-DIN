#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"enter the number"<<endl;

    cin>>n;
    int s;
    s=((2*n) - 1);
    int i=1;
    while(i<=s){
        int j=1;
        while(j<=i)
        {
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}