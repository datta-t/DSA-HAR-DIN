#include<iostream>
using namespace std;
void printarray (int arr[15],int size){
    cout<<"printing the arry"<<endl;
    //print the array
    for(int i=0; i<size; i++){
        cout<< arr[i]<<" ";
    }
}
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
  //cout<<"value at index "<<third[1]<<endl;
  //cout<<"value at index "<<third[11]<<endl;

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
    for(int i=0; i<15; i++){
        cout<<third[i];
    }

    cout<<endl;
    //take input in array
    char vowels [5];
      //by using for loop
       cout<<"take input in array";
    //   cout<<endl;
    //   for(int i =0;i<5; i++){
    //     cin>>vowels[index];
    //   } 
      
    //   for (int indx=0; indx<5; indx++){
    //     cout<<vowels[indx]<<" ";
    //   }
    
    // by using for each loop
    for(char&ele :vowels){
        cin>>ele;
    }
      
   // array with function 
   cout<<"printing arry "<<endl;
   printarray(third,10);

    return 0;
}