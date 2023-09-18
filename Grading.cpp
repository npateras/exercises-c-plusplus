/*Grading Program
Requires:
variables <<  data types <<  and numerical operators
basic input/output
logic (if statements <<  switch statements)

Write a program that allows the user to enter the grade scored in a programming class (0-100).
If the user scored a 100 then notify the user that they got a perfect score.

★ Modify the program so that if the user scored a 90-100 it informs the user that they scored an A

★★ Modify the program so that it will notify the user of their letter grade
0-59 F 60-69 D 70-79 C 80-89 B 90-100 A*/

#include <iostream>
using namespace std;

int main()
{
  int grade;
  cout << "Please enter the grade you received from the programming class (0-100): ";
  cin >> grade;
  while (grade < 0 && grade > 100)
  {
    cout << "Please enter a valid grade (0-100): ";
    cin >> grade;
  }
  if (grade >= 0 && grade <= 59)
  {
    cout << "With a grade of " << grade << " you got an F";
  }
      else if (grade >= 60 && grade <= 69)
      {
        cout << "With a grade of " << grade << " you got an D";
      }
          else if (grade >= 70 && grade <= 79)
          {
            cout << "With a grade of " << grade << " you got an C";
          }
              else if (grade >= 80 && grade <= 89)
              {
                cout << "With a grade of " << grade << " you got an B";
              }
                  else if (grade >= 90 && grade <= 100)
                  {
                    cout << "With a grade of " << grade << " you got an A";
                  }
}
