#include <iostream>
using namespace std;
int main(){
    //Square Hallow Pattern
    cout<<"Enter The Number ";
    int no;
    cin>>no;
    for(int a=1; a<=no; a++){
        for(int b=1; b<=no; b++){
            if(a==1||a==no||b==1||b==no){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }

    return 0;
}


/* Output

Enter The Number 10
* * * * * * * * * * 
*                 * 
*                 * 
*                 * 
*                 * 
*                 * 
*                 * 
*                 * 
*                 * 
* * * * * * * * * *

*/