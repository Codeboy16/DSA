#include <iostream>
using namespace std;
int main(){
    //Hallow Diamond Pattern
    cout<<"Enter The Number ";
    int no;
    cin>>no;
    
    int tmp=no,dv=no;
    for(int a=1; a<no; a++){
          for(int b=1; b<=tmp; b++){
            cout<<" ";
            }
          for(int c=1; c<=a; c++){
              if(c==1||c==a||a==1||a==no){
                cout<<"* ";
              }else{
                  cout<<"  ";
              }
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
           if(c==1||c==dv){
                   cout<<"* ";       
           }else{
               cout<<"  ";
           }

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
              *   * 
             *     * 
            *       * 
           *         * 
          *           * 
         *             * 
        *               * 
       *                 * 
      *                   * 
     *                     * 
    *                       * 
   *                         * 
  *                           * 
 *                             * 
  *                           * 
   *                         * 
    *                       * 
     *                     * 
      *                   * 
       *                 * 
        *               * 
         *             * 
          *           * 
           *         * 
            *       * 
             *     * 
              *   * 
               * * 
                * 

*/