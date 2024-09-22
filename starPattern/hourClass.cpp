#include <iostream>
using namespace std;
int main(){
    //HourClass Pattern
    cout<<"Enter The Number ";
    int no;
    cin>>no;
    
    int tmp=1,dv=no;
    for(int a=1; a<no; a++){
          for(int b=1; b<=tmp; b++){
            cout<<" ";
            }
          for(int c=1; c<=dv; c++){
                cout<<"* ";
           }
          cout<<endl;
          tmp++;
          dv--;
    }
         tmp=no;
         dv=1;
   //Down Star
   for(int a=1; a<=no; a++){
       for(int b=1; b<=tmp; b++){
           cout<<" ";
       }
       for(int c=1; c<=dv; c++){
             cout<<"* ";       
       }
       cout<<endl;
       dv++;
       tmp--;
   }


    return 0;

}

/* Output

Enter The Number 5
 * * * * * 
  * * * * 
   * * * 
    * * 
     * 
    * * 
   * * * 
  * * * * 
 * * * * * 

*/