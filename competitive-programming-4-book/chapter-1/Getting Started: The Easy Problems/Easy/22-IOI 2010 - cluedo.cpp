#include "grader.h"
#include "cluedo.h"

void Solve(){
   bool solved = false;
   int murderer = 1;
   int location = 1;
   int weapon = 1;
   while (!solved) {
      int res = Theory(murderer, location, weapon);
      if (res == 0) {
         solved = true;
      } else if (res == 1) {
         murderer++;
      } else if (res == 2) {
         location++;
      } else {
         weapon++;
      }
   }
}
