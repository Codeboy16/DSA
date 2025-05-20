#include <iostream>
using namespace std;
int main(){
   int no;
   cout<<"Enter The Number ";
   cin>>no;
   int tmp = no;
   
   for(int a=1; a<=no; a++){
      for(int b=1; b<=a; b++){
        cout<<a*b<<" ";
      }
      cout<<endl;
   }

    return 0;
}

/*
Output:
Enter The Number 5
1 
2 4 
3 6 9 
4 8 12 16 
5 10 15 20 25 
*/