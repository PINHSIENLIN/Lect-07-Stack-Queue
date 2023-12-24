// Use stack to implement dispatch program
// Implementation of dealing 52 playing cards to 4 players, 
// sorting them and printing the sorting results
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

#define MAX_SIZE 52
#define PEOPLE 4
#define CARD 52

struct Stack {
  int data[MAX_SIZE];
  int top;
};

void push(Stack* stack, int value) {
  // check if Stack is full
  if (stack->top == MAX_SIZE - 1) { 
      return;
  } 
  else {
    // stack: Assuming stack is a pointer to an object of some class or structure.
    // stack->top: Accesses the member variable top of the object pointed to by stack.
    // ++stack->top: Increments the value of top by 1. 
    // The pre-increment operator ++ increases the value before its current value is used.
    stack->data[++stack->top] = value;
  }
}

int pop(Stack* stack) {
  // check if Stack is empty
  if (stack->top == -1) { 
      return -1;
  } 
  else {
     int temp = stack->data[stack->top];
    //  stack->data[stack->top] = 0;
     --stack->top;
     return temp;
  }
}



int main() {
  Stack myStack;
  myStack.top = -1; // Initialize top to -1 for empty stack
  
  // Call by address
//   push(&myStack, 10);
//   push(&myStack, 20);

//   cout << pop(&myStack) << endl;
//   cout << pop(&myStack) << endl;

  vector<int> deck(52);
 
  return 0;
}