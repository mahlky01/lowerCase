#include <stdio.h>
#include "isupper.h"

int main(int argc, char* argv[]) {
  char c;

/*  c = getchar();
  
  while (c != EOF) {
    if(!isupper(c)){
      printf("%c",c);
      c = getchar();
    }
  }
works the same way as:
*/
  
  while((c=getchar()) != EOF) {
    if (!isupper(c))
      printf("%c",c);
    if (isupper(c)){
      c = c + 32;
      printf("%c",c);
      }
  }

  return 0;
 
}
