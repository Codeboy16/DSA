#include <iostream>
using namespace std;
int main() {
    int no, current = 1;
    cout << "Enter The Number: ";
    cin >> no;
    for (int row = 1; row <= no; row++) {
        int start = current + row - 1;  // last number in this row

        for (int i = start; i >= current; i--) {
            cout << i << " ";
        }

        current = start + 1;  // next starting number
        cout << endl;
    }

    return 0;
}

/*
Output:
Enter The Number: 4
1 
3 2 
6 5 4 
10 9 8 7 
*/