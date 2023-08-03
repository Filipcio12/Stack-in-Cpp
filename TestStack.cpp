#include "Stack.h"

int main() {
    Stack stack1;
    stack1.push(5);
    stack1.push(2);

    Stack stack2(stack1);
    std::cout << "Pop: " << stack2.pop() << "\n";
    std::cout << "Pop: " << stack2.pop() << "\n";
    std::cout << "Pop: " << stack1.pop() << "\n";
    std::cout << "Pop: " << stack1.pop() << "\n";
    return 0;
}