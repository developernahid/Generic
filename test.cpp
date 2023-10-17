#include <iostream>
using namespace std;
template <class T>
class N
{
private:
   T answer;

public:
  N(T n)
   {
      //cout << "Inside constructor" << endl;
      answer=n;

   }

   T getNumber()
   {
      return answer;
   }
};
int main()
{
   // Creating an object with an integer type.
  N<int> numberInt(60);

   // Creating an object with double type.
 N<double> numberDouble(17.27);
 N<char> chars('N');


   // Calling the class method getNumber with different data types:
   cout << "Integer Number is: " << numberInt.getNumber() << endl;
   cout << "Double Number = " << numberDouble.getNumber() << endl;
   cout << "Char = "<<chars.getNumber()<<endl;

   return 0;
}
