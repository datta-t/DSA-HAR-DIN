#include<iostream>
using namespace std;
int main (){
    // array declaration 
    int number [12];
        //accesssing an array
      cout<<"value at 10 index"<<number[10]<<endl;
      // cout<<"value at 14 index"<<number[14]<<endl;

   // array initialising an array
   int second[5] ={5,8,5,6,4};
         //access an element
   cout << "value at 2 index "<<second[2]<<endl;
   cout << "value at 2 index "<<second[3]<<endl;
  
  int third[15]={5,2};
  cout<<"value at index "<<third[1]<<endl;
  cout<<"value at index "<<third[11]<<endl;

  //size of array
 cout<< sizeof(third)<<endl;
 cout<< sizeof(number)<<endl;

 cout<< sizeof(second)<<endl;
 
 // length of array= sizeof(array) / sizeof(array[i])
 int len;
   len=(sizeof(second) / sizeof(second[0]));
  cout<<"length of second array"<<len<<endl;

  //traversing in the array :print all elment in array
    //1.by using for each loop
    for(int ele :second){
        cout<<ele;
    }
    cout<<endl;
    //2.by using while loop
    int index=0;
    while(index < 5)
    {
        cout<<second[index];
        index++;
    }
    //3.by using for loop
    //take input in array


    return 0;
}