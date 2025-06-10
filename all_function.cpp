#include<iostream> 
using namespace std;

int add(int a ,int b){                    // function with argu and with return
    return a+b;
}
int main()
{
    int x,y;
    cout << "enter value:" << endl;
    cin >> x>>y;
   // add(x,y);
   cout << "ans is: "<< add(x,y);
    return 0;
} 
    

                                              //function with argu withouttt return
                                
void min( int a  , int b)
{
    if(a < b){
        cout <<"minimum"<<a;
    }else{
        cout<<"minimum "<<b;
    }
}
int main(){
     int a,b;
     cout <<" enter value";
     cin >> a >> b;
     min(a,b); 
     return 0;
}

                                //function without argui with return ''''''''
                         
int even(){ 
     int num;
     cout << "enter value";
     cin >>num;
 if (num %2==0){
    cout <<"even";
 }else{
     cout << "odd";

}
} 
int main()
{
 cout << even() << endl; 
     return 0; 
}

                       // function withoutt arguu withouttt returnnn ;;;

void odd(){
    int num;
    cout <<"enter value";
    cin >> num;
    if( num %2!=0){
         cout <<"odd"<<endl;
    }else{
         cout <<"even"<<endl;
    }
}
int main(){
    
     odd();
     odd(); 
     return 0;
}

  

 // function withoutt arguu withouttt returnnn ;;;
  void odd(); 
int main(){
      int num;
       
    cout <<"enter value";
    cin >> num;
    if( num %2!=0){
         cout <<"odd"<<endl;
    }else{
         cout <<"even"<<endl;
    }
}
void odd(){
    odd();
}
