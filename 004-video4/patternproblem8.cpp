#include<iostream>
using namespace std;
int main(){
    // int n;
    // cout<<"enter the number "<<endl;
    // cin>>n;
    // int i=1;
    // while(i<=n)
    // {
    //     int j=1;
    //     while(j<=i)
    //     {
    //         cout<<i;
    //         j++;

    //     }
    //     cout<<endl;
    //     i++;

    //pattren problem 2
    int n;
    cout<<"enter the number "<<endl;
    cin>>n;
    int i=1;
    int count=1;

    while(i<=n)
    {
        int j=1;
        while (j<=i)
        {
            cout<<count;
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }

    
    return 0;
}