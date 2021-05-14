#include <stdio.h>

#define VALUE 3

//A constant is a shortcut, or something used in the code to substitute for something else.
int main() {
printf("The value is %d.\n",VALUE);
printf("%d....that's surely the value.\n",VALUE);
printf("It's not %d.\n",VALUE+5);
printf("And there is now way it can be %d.\n", VALUE-12);
printf("No, only %d is the true value.\n",VALUE);
return 0;
}


