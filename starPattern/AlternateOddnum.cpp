#include <iostream>
using namespace std;
int main(){
   int no;
   cout<<"Enter The Number ";
   cin>>no;
   int tmp = 1;
   
   for(int a=1; a<=no; a++){
       for(int b=1; b<=a; b++){
           cout<<tmp;
       }
       cout<<endl;
       tmp+=2;
   }

    return 0;
}

/*
Output:
Enter The Number 5
1
33
555
7777
99999
*/