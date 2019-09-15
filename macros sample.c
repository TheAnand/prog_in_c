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

/* 
Macros are nothing but a piece of code based on the #define preprocessor.
In the C programming language, a macro would generally look like:

#define MACRO macro_value

There are two type of macros 
1. Pre-define macro
2. Types of macros - (1)-> Object-like (2)-> Function-like Macros

    Object-like macros: These macros are not capable of taking parameters.
    Function-like macros: These macros are capable of taking parameters.
    
Key takeaway: It is important to note that the macros are not terminated by a semicolon (;)
*/
