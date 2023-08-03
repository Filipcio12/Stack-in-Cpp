#pragma once

#include <cstdlib>
#include <iostream>

class Stack {
    size_t top;
    size_t size;
    int* data;

    public:
        Stack();
        void push(int element);
        int pop();
        bool isEmpty();
        ~Stack();

        // copy constructor
        Stack(const Stack& s);

        // assignment operator
        Stack& operator=(const Stack& s);

    private:
        void incrementSize();
};