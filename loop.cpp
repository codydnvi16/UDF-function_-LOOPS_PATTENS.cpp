#include<iostream>
using namespace std;
int main(){
// WHILE LOOp
          int i=1,sum=0;
          while (i<=5)
 {
      sum+=i;
      i++;
      cout<< sum<<endl;
 }
return 0;
} 
//----------------------------------------------------------------

// DO__WHILE LOOP
// Sum of N numbers using DO _while loop
int main(){
     int i=1,sum=0,n=5;
     do{
           sum+=i;
           i++;
          cout << sum<< " "<<endl;

     }while(i<=n);
     return 0;
}
 //----------------------------------------------------------------

// FOR LOOP
// Sum oF numbers using for loop
int main(){
      int sum=0,i;
      for (i=1;i<=5;i++){
          sum+=i;
          cout<<"\n"<<sum;
      }
      return 0;
}
//----------------------------------------------------------------------
// sum of all numbers from 1_N which are divisible by 3;;

     int main(){
           int sum=0,i;
           for (i=1;i<=20;i++){
               if(i%3==0){
                    sum+=i;
                    cout<<"\n"<<sum;
               }
           }return 0;
     }

