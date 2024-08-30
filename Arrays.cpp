#include<iostream>
using namespace std;
int main(){
    char vowels[5];

    //int array[]={1,2,3,4};
    
  // int array[4]={1,2,3,4};
   // cout<<sizeof(array)<<endl;
   //int size = sizeof(array)/sizeof(array[0]);

    //for loop
    //for(int idx=0;idx<size;idx++){
       // cout<<array[idx]<<endl;
   // }
    //for(int ele:array){
       // cout<<ele<<endl;
    //}
    //while loop
    //int index=0;
    //while(index<size){
      //  cout<<array[index]<<endl;
        //index++;
   // }
   for(char &element:vowels){
      cin>>element;
   }
   for(int idx=0;idx<5;idx++){
    cout<<vowels[idx]<<" ";
   }
    
    


    return 0;



}