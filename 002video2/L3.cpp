#include<iostream>
using namespace std;
int main(){
    // int a, b;
    // cin>>a>>b ;
    // cout<<  "  value of a&b is "<<a<<" "<<b<<endl;

    // cin is not read space , tab ,enter
    //cin.get() is read
    // int a,b;
    
    // a=cin.get();
    // cout<<"value of a is: "<<a<<endl;


      // 1st homework check any charcter is uppercase or lower case
    // cout<<"enter the character ";

    // char ch ;
    // cin>>ch;
    // if((ch>97)&&(ch<122)){
    //     cout<<ch<<" character is lowercase ";

    // }
    // else if ((ch>=65)&&(ch<=90)){
    //     cout<<ch<<" character is uppercase";
    // }

    // home work : find sum of all even number from 1 to n
     
    //  int n ;
    //  cout<<"enter the number"<<endl;
    //  cin>>n;
    //  int i=2;
    //  int sum=0;
    //  while(i<n){
    //     sum=sum+i;
    //     i=i+2;
    //  }
    //  cout<<sum<<"this is sum of all even number";

    // home work : convert temperture ferinate degree into celus 
    int ft, cst ;
     cout<<"enter the ferenite temperture"<<endl;
     cin>>ft;
     cst=((ft-32)*(5.0/9));
     cout<< cst<<"is in celius temperture"<<endl;

    return 0;
}