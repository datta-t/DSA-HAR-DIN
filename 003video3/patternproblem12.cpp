#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            char val ='A'+i-1;
            cout<<val;
            
            
            
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}