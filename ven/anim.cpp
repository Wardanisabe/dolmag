  #include <stack>
  #include <iostream>
  
  int main() {
      std::stack<int> rhs;  // Declare a stack of integers
  
      int c = 42;  // Some value to push onto the stack
  
      rhs.push(c);  // Push c onto the stack
  
      // Print the top element of the stack (should be 42)
      std::cout << "Top element of stack: " << rhs.top() << std::endl;
  
      return 0;
  }
  