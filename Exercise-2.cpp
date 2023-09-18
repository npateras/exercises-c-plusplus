#include <iostream>
#include <string>
#include <stdio.h>
#include <ctype.h>
#include <algorithm>
using namespace std;

int main() {
  int j=0,i=0,count=0; string str,conv,table[1000]; char temp,s[256];
  cout << "Enter a sentence: "; cin >> str;
  if (str.length()==1) {
    temp=str[i];
    temp=toupper(temp);
    table[j]=temp;
    cout << table[j] << endl;
  }
  else {
    while (str.length()>1) {
      for (i; i<str.length(); i++) {
        char c=str[i];
        if (isupper(c)) {count+=1;}
      }
      if (count==str.length()){}
      else {
        std::transform(str.begin(), str.end(),str.begin(), ::toupper);
        table[j]=str;
        j++;
      }
      cout << "Enter a sentence: "; cin >> str;
      if (str.length()==1) {
        char c=str[0];
        str=toupper(c);
        table[j]=str;
      }
    }
    for (i=0; i<=j; i++) {
      cout << table[i] << endl;
    }
  }
  return 0;
}
