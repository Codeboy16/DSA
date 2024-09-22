#include <iostream>
using namespace std;
int main(){
    //Rhombus Pattern
    cout<<"Enter The Number ";
    int no;
    cin>>no;
    
    int tmp=1;
    for(int a=1; a<=no; a++){
        for(int b=1; b<=tmp; b++){
            cout<<" ";
        }
        for(int c=1; c<=no; c++){
            cout<<"* ";
        }
        cout<<endl;
        tmp++;
    }

    return 0;
}


/* Output

Enter The Number 5
 * * * * * 
  * * * * * 
   * * * * * 
    * * * * * 
     * * * * * 

*/