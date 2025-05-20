#include <iostream>
using namespace std;
int main(){
   int no;
   cout<<"Enter The Number ";
   cin>>no;
   int tmp = no;
   
   for(int a=1; a<=no; a++){
      for(int b=1; b<=no; b++){
         if(b<a){
             cout<<a;
         }else{
             cout<<b;
         }
      }
      cout<<endl;
   }

    return 0;
}

/*Output:
Enter The Number 5
12345
22345
33345
44445
55555
*/