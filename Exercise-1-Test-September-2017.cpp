#include <iostream>
#include <string>
using namespace std;

class BankCard {
  private:
    string bankName,holderName; int year;
  public:
    struct data {
      string bankName1,holderName1;
      int year1;
    };
    data bankName1="",holderName1="",year1=2000;
};

int main(){
  BankCard();
  cout << bankName1;
  return 0;
}
