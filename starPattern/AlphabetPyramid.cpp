#include <iostream>
using namespace std;
int main(){
    int no;
    cout<<"Enter The Number ";
    cin>>no;
    
    int tmp=1;
    
    for(int a=1; a<=no; a++){
        for(int b=0; b<a; b++){
          cout<<char('A'+b);
        }
        cout<<endl;
    }

    return 0;
}

/*
Output:
Enter The Number 6
A
AB
ABC
ABCD
ABCDE
ABCDEF
*/