#include <iostream>
using namespace std;
int main(){
    int no;
    cout<<"Enter The Number ";
    cin>>no;
    for(int a=1; a<no; a++){
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
1
21
321
4321
*/