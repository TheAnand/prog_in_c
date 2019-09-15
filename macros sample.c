#include<stdio.h>
#define PI 3.14			// Object type macro
#define REC(l,b) l*b		// Function type macro

int main() {
  int l=10, b=32;
  // Function macro
  printf("%d\n",REC(l,b));
  // Object macro
  printf("%.2f\n",PI);
  // Pre-define macro
  printf("Date %s\n",__DATE__);
  printf("Time %s\n",__TIME__);
  printf("Line %d\n",__LINE__);
  printf("File name %s\n",__FILE__);
  printf("STDC : %d\n",__STDC__);
}

// there are two type of macros 1. Function 2. Object .
