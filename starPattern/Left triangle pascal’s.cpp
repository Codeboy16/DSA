#include <iostream>
using namespace std;
int main(){
   int no;
   cout<<"Enter The Number ";
   cin>>no;
   int tmp = no;
   
   for(int a=1; a<=no; a++){
       for(int b=1; b<tmp; b++){
           cout<<" ";
       }
      for(int b=1; b<=a; b++){
        cout<<"*";
      }
      cout<<endl;
      tmp--;
   }
   //Down
   tmp=no;
   int tmp2=1;
      for(int a=1; a<=no; a++){
          for(int b=1; b<=tmp2; b++){
              cout<<" ";
          }
      for(int b=1; b<tmp; b++){
        cout<<"*";
      }
      cout<<endl;
      tmp--;
      tmp2++;
   }

    return 0;
}

// Output:
// Enter The Number 5
//     *
//    **
//   ***
//  ****
// *****
//  ****
//   ***
//    **
//     *
     