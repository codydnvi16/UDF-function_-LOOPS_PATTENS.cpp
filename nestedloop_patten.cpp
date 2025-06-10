// NOW WE WILL PERFORM NESTED LOOPING BY USING FOR LOOP AND CREARTE PATTENS!!!

#include<iostream>
using namespace std;
int main()
{                                                   
                                                          
                                                                
   int n=4;                       1.
 for (int i=1;i<=n;i++)// outer loop           ****
                                               ****
                                               ****
                                               ****
 {
    for (int j=1;j<=n;j++)//inner loop
    {
        cout <<'*';
    }
   cout << endl;
 }    
 return 0;
}


//-------------------------------------------------------------------
   2.
int i,j,num=1,n=3;              //patten of this code will be;;
for (i=0;i<n;i++){              /*123
                                456
                                789 */

  for (j=0;j<n;j++){
    cout << num;
    num++;
  }
  cout << endl;

}
return 0;
}

  //---------------------------------------------------------------------

//TRINGLE PATT RSS  3.


int i,j,n=4;
                      /* patten of this code;;
                        *
                        **
                        ***
                        **** */
for (i=0;i<n;i++){
  for (j=0;j<i+1;j++){
    cout << "*";
  }
  cout << endl;
}
return 0;
}

//----------------------------------------------------

// ANOTHER PATTEN OF TRINGLE BUT OF NUMBERS
   4.
int i,j,n=4;
                      /* patten of this code;;
                       1
                       22
                       333
                       4444 */ 
for (i=0;i<n;i++){
  for (j=0;j<i+1;j++){
    cout << (i+1);
  }
  cout << endl;
}
return 0;
}
*/
//--------------------------------------------------------------
  5....
 int i,j,num=1,n=4;
                        //patten of code;;
                           /*1
                           12
                           123
                           1234 */
 for (i=0;i<n;i++){
  for( j=1;j<=i+1;j++){
    cout<< j;      
    
  }
 cout << endl;
}
return 0;
}
*/
//-**----------------------------------------------------------------

int i,j,n=4;
for (i=0;  i <n; i-- ){
   for  (  j= i+1 ;  j > 0  ; j-- ){
     cout<<j;
   }
   cout<<endl;
}
return 0;
}
