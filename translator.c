#include <stdio.h>

int main(void)
{
    int c;
    while ((c = getchar()) != EOF)
    {
        switch (c) {
          case '>': printf("!!!"); break;
          case '<': printf("!!?"); break;
          case '+': printf("!??"); break;
          case '-': printf("???"); break;
          case '.': printf("??!"); break;
          case ',': printf("?!!"); break;
          case '[': printf("?!?"); break;
          case ']': printf("!?!"); break;
        }
    }
}
