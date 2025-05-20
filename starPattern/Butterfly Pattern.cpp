#include <iostream>
using namespace std;
int main(){
    int no;
    cout<<"Enter The Number ";
    cin>>no;
    int tmp,tmp2;
    tmp=tmp2=no;

   for(int a=1; a<=no; a++){
       for(int b=1; b<=a; b++){
           cout<<"*";
       }
       for(int b=1; b<tmp; b++){
           cout<<" ";
          
       }
       //right Side
      for(int b=1; b<tmp2; b++){
           cout<<" ";
       }
        for(int b=1; b<=a; b++){
           cout<<"*";
       }
       cout<<endl;
       tmp--;
       tmp2--;
   }
//Down Side
tmp=no;
tmp2=1;
   for(int a=1; a<=no; a++){
       for(int b=1; b<=tmp; b++){
           cout<<"*";
       }
       for(int b=1; b<tmp2; b++){
           cout<<" ";
       }
       for(int b=1; b<=tmp; b++){
           cout<<"*";
       }
       cout<<endl;
       tmp--;
       tmp2+=2;
   }



    return 0;
}

/*
Output:
Enter The Number 6
*          *
**        **
***      ***
****    ****
*****  *****
************
************
*****  *****
****    ****
***      ***
**        **
*          *

*/