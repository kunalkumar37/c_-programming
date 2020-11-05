#include <stdio.h>

int main() {

  int i = 0;
  char str[] = "I am joe";

  while (str[i] != '\0') {

    if (str[i] == ' ')     
      printf("\n");

    else
      printf("%c", str[i]);

    i++;

  }

}