#include "Stack.h"

int main() {
    /*
    Stack stack1;
    stack1.push(5);
    stack1.push(2);

    Stack stack2(stack1);
    std::cout << "Pop: " << stack2.pop() << "\n";
    std::cout << "Pop: " << stack2.pop() << "\n";
    std::cout << "Pop: " << stack1.pop() << "\n";
    std::cout << "Pop: " << stack1.pop() << "\n";

    */
    Stack s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);

    Stack s2(s1);

    Stack s3 = s1;

    Stack s4;
    s4.push(10);
    s4 = s1;
    std::cout << "\ns1:\n";
    std::cout << "Pop: " << s1.pop() << "\n";
    std::cout << "Pop: " << s1.pop() << "\n";
    std::cout << "Pop: " << s1.pop() << "\n";

    std::cout << "\ns2:\n";
    std::cout << "Pop: " << s2.pop() << "\n";
    std::cout << "Pop: " << s2.pop() << "\n";
    std::cout << "Pop: " << s2.pop() << "\n";

    std::cout << "\ns3:\n";
    std::cout << "Pop: " << s3.pop() << "\n";
    std::cout << "Pop: " << s3.pop() << "\n";
    std::cout << "Pop: " << s3.pop() << "\n";

    std::cout << "\ns4:\n";
    std::cout << "Pop: " << s4.pop() << "\n";
    std::cout << "Pop: " << s4.pop() << "\n";
    std::cout << "Pop: " << s4.pop() << "\n";
    return 0;
}