#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main(){
  int len,j,i=0; string table[1000],sen;
  cout << "Enter a sentence: "; cin >> sen;
  while (sen.length()<1 || sen.length()>100){
    cout << "Sentence must have a length from 1-100" << endl << "Re-enter a sentence: "; cin >> sen;
  }
  while (sen!="TELOS"){
      len=sen.length();
      reverse(sen.begin(),sen.end());
      table[i]=sen;
      i++;
      cout << "Enter a sentence: "; cin >> sen;
      while (sen.length()<1 || sen.length()>100){
        cout << "Sentence must have a length from 1-100" << endl << "Re-enter a sentence: "; cin >> sen;
      }
  }
  for (j=0; j<=i; j++){
    cout << table[j] << endl;
  }
  return 0;
}
