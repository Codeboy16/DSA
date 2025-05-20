#include <iostream>
using namespace std;
int main(){
    int no;
    
    cout<<"Enter The Number ";
    cin>>no;
    int tmp=no;
    
    for(int a=1; a<=no; a++){
        for(int b=1; b<=a; b++){
            cout<<b;
        }
        cout<<endl;
    }
    return 0;
}


/*Output:
Enter The Number 5
1
12
123
1234
12345
*/