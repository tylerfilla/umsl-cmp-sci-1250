// This program demonstrates random numbers.
#include <iostream>
#include <cstdlib>   // rand and srand
#include <ctime>     // For the time function
using namespace std;

int main()
{  const int MIN_VALUE = 1;
   const int MAX_VALUE = 100;
   int x,y,z;
   // Get the system time.
   unsigned seed = time(0);
   
   // Seed the random number generator.
   srand(seed);
   x = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE; 
   y = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;   
   z = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;

   // Display three random numbers.
   cout << x << endl;
   cout << y << endl;
   cout << z << endl;
   return 0;
}
