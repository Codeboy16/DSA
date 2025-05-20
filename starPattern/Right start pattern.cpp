#include <iostream>
using namespace std;
int main(){
   int no;
   cout<<"Enter The Number ";
   cin>>no;
   int tmp = no;
   
   for(int a=1; a<=no; a++){
      for(int b=1; b<=a; b++){
        cout<<"*";
      }
      cout<<endl;
   }
   //Down
      for(int a=1; a<=no; a++){
      for(int b=1; b<tmp; b++){
        cout<<"*";
      }
      cout<<endl;
      tmp--;
   }

    return 0;
}

// Output:
// Enter The Number 5
// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *