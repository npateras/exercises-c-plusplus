#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int main() {
  string num; int i,rows;
  cout << "How many rows?: "; cin >> rows; cout << endl; string table[rows];
  for(i=0; i<rows; i++){
    cout << "Enter a number: "; cin >> num;
    cout << endl; table[i]=num;
  }
  for (i=0; i<(rows/2); i++) {
       string temp = table[i];
       table[i] = table[(rows - 1) - i];
       table[(rows - 1) - i] = temp;
   }
   for(i=0; i<rows; i++){
     cout << table[i] << endl;
   }
  return 0;
  getchar();
}
