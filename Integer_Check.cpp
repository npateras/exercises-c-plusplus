#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   double num, tmp, str;

   cout << "Input a number: " << endl;

   cin >> num;

   if (cin.fail() || std::isnan(num))
   {
      cout << "You did not input a number." << endl;
      return -1;
   }
   auto str = modf(num, &tmp) ? " is not " : " is ";

   cout << num << str << "an integer" << endl;
}
