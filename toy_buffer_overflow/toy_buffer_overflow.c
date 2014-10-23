#include <stdio.h>
#include <string.h>

void func (char * argv) {
  int authenticated = 0;
  char buffer[4];
  strcpy(buffer, argv);

  if (authenticated) {
    printf("you are logged in!\n");
  } else {
    printf("wrong user name or password!\n");
  }

}


int main() {
  char * mystr = "Auth1";
  func(mystr);
  return 0;
}
