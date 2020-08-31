#include <stdio.h>

/**
 *  The functions in this module implement a Stack data structure
 *  of integers.  (Note that chars are also integers so this
 *  integer Stack can be used for chars as well.)
 *
 *  NOTE: the stack is implemented as a fixed size array (size = 100).
 *  Consequently, no more than 100 integers can be pushed onto
 *  the Stack at any given time.
 */

// Implementation hints:
//   The 3 functions--push, pop and isEmpty--share information
//   about the array used to implement the stack and the index
//   of the "top" of the stack.
//
//   You may want to make these variables global...
//   ...but that would
//   be a mistake (because anyone using the module would have
//   to ensure that they did not use global variables with the
//   same names).
//
//   An alternative in C is a "static global".
//   If a global variable is qualified as "static", it is global only
//   within the source code file where it is declared.
//   In parituclar, it cannot conflict with any other global variable.
//
//  RECOMMENDATION:
//   Uncomment the following 2 lines and use these static globals!
static int top = -1;
static int stack[100];



int pop(){
    if(!isEmpty()){
int temp = stack[top];
top--;
  return temp;  //A dummy return statement
}
}


void push(int thing2push)
{
if(top ==99){
printf(stderr, "Error. Stack is Full");
}

else{
stack[top+1] =thing2push;
top++;

}
}

int isEmpty()
{
if(top == -1)
  return 1;
return 0;
}
