#include <iostream>
using namespace std;
int main(){
    int no;
    
    cout<<"Enter The Number ";
    cin>>no;
    int tmp=no;
    int tmp2=1;
    for(int a=1; a<no; a++){
        for(int b=1; b<tmp; b++){
            cout<<" ";
        }
        for(int b=1; b<=tmp2; b++){
            cout<<b;
        }
        cout<<endl;
        tmp--;
        tmp2+=2;
    }


    return 0;
}


/*Output:
Enter The Number 5
    1
   123
  12345
 1234567
 */