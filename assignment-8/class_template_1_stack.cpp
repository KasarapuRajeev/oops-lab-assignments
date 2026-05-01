#include <iostream>

template <class T>
class Stack {
    T data[5];
    int top;

public:
    Stack() {
        top = -1;
    }

    void push(T value) {
        if (top == 4) {
            std::cout << "Stack is full" << std::endl;
            return;
        }

        top++;
        data[top] = value;
    }

    T pop() {
        if (top == -1) {
            std::cout << "Stack is empty" << std::endl;
            return T();
        }

        T value = data[top];
        top--;
        return value;
    }
};

int main() {
    Stack<int> stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);

    std::cout << "Popped value: " << stack.pop() << std::endl;
    std::cout << "Popped value: " << stack.pop() << std::endl;

    return 0;
}
