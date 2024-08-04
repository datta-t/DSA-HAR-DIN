#include<iostream>
using namespace std;
int main(){
    //  a<b
    // int num1,num2;
    // cout<<"enter the number num1"<<endl;
    // cin>>num1;
    // cout<<"enter the number num2"<<endl;
    // cin>>num2;
    // if(num1>num2){
    //     cout<<"yes";

    // }
    // else
    // cout<<"no";

    //2. odd or even number

    //  int num1;
    // cout<<"enter the number num1"<<endl;
    // cin>>num1;
    // if((num1 % 2) == 0){
    //     cout<<num1<<"numer is even "<<endl;
    // }
    // else{
    //     cout<<num1<<" number is odd";

    // }

    // 3.check the number +ve ,-ve ,0
     
    // int num1;
    // cout<<"enter the number num1"<<endl;
    // cin>>num1;
    // if(num1>0){
    //     cout<<num1<<" is positive";

    // }
    // else if(num1<0){
    //     cout<<num1<<"is negtive";
    // }
    // else{
    //     cout<<"number is zero";
    // }

   int a,b,c;
   cout<<"enter the number a"<<endl;
    cin>>a;
    cout<<"enter the number b"<<endl;
    cin>>b;
    cout<<"enter the number c"<<endl;
    cin>>c;
    if((a+b)>c){
        cout<<"triangle is valid";

    }
    else if ((b+c)>a){
        cout<<"triangle is valid";
    }
    else if ((c+a)>b){
        cout<<"triangle is valid";
    }
    else{
        cout<<"triangle is not valid";
    }

    

    


    return 0;
}