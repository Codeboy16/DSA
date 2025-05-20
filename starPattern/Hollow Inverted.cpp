#include <iostream>
using namespace std;
int main(){
    int no;
    cout<<"Enter The Number ";
    cin>>no;
    int tmp=no;
    
    for(int a=1; a<=no; a++){
        for(int b=1; b<=no; b++){
            if(a==1||b==no||a==b){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}

/*
Output:
Enter The Number 5
*****
 *  *
  * *
   **
    *
*/    