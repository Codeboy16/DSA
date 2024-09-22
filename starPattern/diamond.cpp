#include <iostream>
using namespace std;
int main(){
    //Diamond Pattern
    cout<<"Enter The Number ";
    int no;
    cin>>no;
    
    int tmp=no,dv=no;
    for(int a=1; a<no; a++){
          for(int b=1; b<=tmp; b++){
            cout<<" ";
            }
          for(int c=1; c<=a; c++){
            cout<<"* ";
            }
          cout<<endl;
          tmp--;
    }
         tmp=1;
   //Down Star
   for(int a=1; a<=no; a++){
       for(int b=1; b<=tmp; b++){
           cout<<" ";
       }
       for(int c=1; c<=dv; c++){
           cout<<"* ";
       }
       cout<<endl;
       dv--;
       tmp++;
   }


    return 0;

}

/* Output

Enter The Number 16
                * 
               * * 
              * * * 
             * * * * 
            * * * * * 
           * * * * * * 
          * * * * * * * 
         * * * * * * * * 
        * * * * * * * * * 
       * * * * * * * * * * 
      * * * * * * * * * * * 
     * * * * * * * * * * * * 
    * * * * * * * * * * * * * 
   * * * * * * * * * * * * * * 
  * * * * * * * * * * * * * * * 
 * * * * * * * * * * * * * * * * 
  * * * * * * * * * * * * * * * 
   * * * * * * * * * * * * * * 
    * * * * * * * * * * * * * 
     * * * * * * * * * * * * 
      * * * * * * * * * * * 
       * * * * * * * * * * 
        * * * * * * * * * 
         * * * * * * * * 
          * * * * * * * 
           * * * * * * 
            * * * * * 
             * * * * 
              * * * 
               * * 
                * 

*/