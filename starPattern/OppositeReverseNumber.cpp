#include <iostream>
using namespace std;
int main(){
    int no;
    cout<<"Enter The Number ";
    cin>>no;
    for(int a=no; a>=1; a--){
        for(int b=a; b>=1; b--){
            cout<<b;
        }
        cout<<endl;
    }

    return 0;
}

/*
Output:
Enter The Number 5
54321
4321
321
21
1
*/