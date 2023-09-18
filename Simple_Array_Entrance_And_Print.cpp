#include <iostream>
#include <string>

using namespace std;

int main() {
  string num; int i; string table[3];
  for (i=1; i<=3; i++){
    cout << "Enter a number" << " (1/" << i << "): " << endl; cin >> num;
    table[i]=num;
  }
  cout << endl;
  for (i=1; i<=3; i++){
    cout << table[i] << endl;
  }
  return 0;
}
