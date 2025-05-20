#include <iostream>
using namespace std;
int main(){
   int no;
   cout<<"Enter The Number ";
   cin>>no;
   int tmp = no;
   
   for(int a=1; a<=no; a++){
       for(int b=0; b<=tmp; b++){
           cout<<b;
       }
       cout<<endl;
       tmp--;
   }

    return 0;
}

/*
OutPut:
Enter The Number 5
012345
01234
0123
012
01
*/