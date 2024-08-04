#include<iostream>
using namespace std;
int main(){
    // print 1 to n number 
    // int num1;
    // cout<<"enter the number num1";
    // cin>>num1;
    // int i=1;
    // while(i<=num1){
    //     cout<<i<<endl;
    //     i++;
        
    // }

     //2. print even number from 1to n
     
    // int n;
    // cout<<"enter the number n";
    // cin>>n;
    // int i =2;
    // while(i<n){
    //     cout<<i<<endl;
    //     i=i+2;
    // }
   
   // 3.print odd number from 1 to n ( n inclusive)

    // int n;
    // cout<<"enter the number n";
    // cin>>n;
    // int i=1;
    // while(i<=n){
    //     cout<<i<<endl;
    //     i=i+2;
    // } 

    //4.find sum of 1 to n

//    int n;
//      cout<<"enter the number n";
//     cin>>n;
//    int i =1;
//      int sum=0;
//     while(i<=n){
//         sum = sum+i;
//         i=i+1;

//     }
//     cout<<"the value of sum is "<<sum;

   // 5.find factiorial of n
//    int n;
//      cout<<"enter the number n";
//     cin>>n;
//     int i = 1;
//     int fact=1;
//     while(i<=n){
//         fact=fact*i;
//         i++;
//     }
//     cout<<"find the value of factorial"<<fact;


    // check number is prime or not
    int n;
     cout<<"enter the number n";
    cin>>n;   
    int i =2;
    while(i<n){
        if((n%i)==0){
            cout<<"not prime number";
            break;
         
        }
       
       i++;
        
    } 
   
    

    

    return 0;
}