#include "Stack.h"

Stack::Stack()
{
    top = 0;
    size = 0;
    data = NULL;
}

// copy constructor
Stack::Stack(Stack* s)
{
    data = (int*)malloc(s->size * sizeof(int));
    if (!data) {
        free(s->data);
        fprintf(stderr, "Can't copy stack.\n");
        abort();
    }
    top = s->top;
    size = s->size;
    for (size_t i = 0; i < size; i++) {
        data[i] = s->data[i];
    }
}

Stack::~Stack()
{
    free(data);
}

void Stack::incrementSize()
{
    size_t newSize = (size + 1) * 2;
    int* newData = (int*)realloc(data, newSize * sizeof(int));
    if (!newData) {
        free(data);
        fprintf(stderr, "Can't allocate sufficient memory.\n");
        abort();
    }
    data = newData;
    size = newSize;
}

void Stack::push(int element)
{
    if (top >= size) {
        incrementSize();
    }
    data[top++] = element;
}

int Stack::pop()
{
    if (top > 0) {
        return data[--top];
    }
    free(data);
    fprintf(stderr, "Can't pop from an empty stack.\n");
    abort();
}

bool Stack::isEmpty()
{
    if (top > 0) {
        return 0;
    }
    return 1;
}