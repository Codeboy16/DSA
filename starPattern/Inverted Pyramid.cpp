#include <iostream>
using namespace std;
int main(){
    int no;
    
    cout<<"Enter The Number ";
    cin>>no;
    int tmp=1;
    int tmp2=no;
    for(int a=1; a<=no; a++){
        for(int b=1; b<=tmp; b++){
            cout<<" ";
        }
        for(int b=1; b<tmp2; b++){
            cout<<"* ";
        }
        cout<<endl;
        tmp++;
        tmp2--;
    }


    return 0;
}

/*Output:
Enter The Number 5
 * * * * 
  * * * 
   * * 
    *
*/     