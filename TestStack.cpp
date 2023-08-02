#include "Stack.h"

int main() {
    Stack stack;
    stack.push(5);
    stack.push(2);
    std::cout << stack.pop() << "\n";
    std::cout << stack.pop() << "\n";
    return 0;
}