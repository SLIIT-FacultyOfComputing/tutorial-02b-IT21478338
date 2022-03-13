/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/

#include <iostream>//declaring hadder file

//function declaration 
long Factorial(int no);
long nCr(int n, int r);

int main() {//declaration main function
  int n, r;
  std::cout << "Enter a value for n ";
  std::cin >> n;
  std::cout << "Enter a value for r ";
  std::cin >> r;
  std::cout << "nCr = ";
  std::cout << nCr(n,r);
  std::cout << std::endl;
  return 0;
  }

//function prototypes 
long Factorial(int no)
{
  long fac = 1;
  int r;
  for(r=no; r >= 1; r--)
    {
      fac = fac * r;
    }
  return fac;
}
//function prototypes 
long nCr(int n, int r)
{
 long answer = Factorial(n) / (Factorial (r) * Factorial (n-r));
  return answer;
}