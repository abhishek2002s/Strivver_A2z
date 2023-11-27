#include <iostream>
#include <cmath>

//check armstrong number


bool checkArmstrong(int num){
	
	int originalNum, remainder, n = 0, result = 0, power;
    originalNum = num;

   while (originalNum != 0) {
      originalNum /= 10;
      ++n;
   }
   originalNum = num;

   while (originalNum != 0) {
      remainder = originalNum % 10;

      // pow() returns a double value
      // round() returns the equivalent int
      power = round(pow(remainder, n));
      result += power;
      originalNum /= 10;
   }

   if (result == num)
      return true;
   else
      return false;
}