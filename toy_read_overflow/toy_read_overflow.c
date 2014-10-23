#include <stdio.h>
#include <string.h>

int main() {

  char buf[100], * p;
  int i, len;

  while(1) {
    p = fgets(buf, sizeof(buf), stdin);
    if (p == NULL)
      return 0;

    len = atoi(p);
    
    p = fgets(buf, sizeof(buf), stdin);
    if (p == NULL)
      return 0;

    for(i=0; i < len; i++) {
      
      if(!iscntrl(buf[i])) {
	putchar(buf[i]);
      } else {
	putchar(".");
      }
    }
    printf("\n");
  }

  return 0;
}
