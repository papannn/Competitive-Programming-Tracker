#include "grader.h"
#include "memory.h"
#include <iostream>
#include <string.h>

using namespace std;
void play() {
   int i;
   char a, b;

   int memo[25];
   memset(memo, -1, sizeof(memo));

   bool open = false;
   char prev;
   int move = 0;
   for (int i = 1; i <= 50; i+=2) {
      char c1 = faceup(i);
      if (memo[c1 - 'A'] != -1) { // Check prev card
         faceup(memo[c1 - 'A']);
         i--;
      } else {
         memo[c1 - 'A'] = i;
         char c2 = faceup(i + 1);
         if (memo[c2 - 'A'] == -1 && c1 != c2) {
            memo[c2 - 'A'] = i + 1;
         } else if (c1 != c2) {
            faceup(i + 1);
            faceup(memo[c2 - 'A']);
         }
      }
   }
}
