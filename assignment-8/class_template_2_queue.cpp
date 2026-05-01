#include <iostream>

template <class T>
class Queue {
    T data[5];
    int front;
    int rear;

public:
    Queue() {
        front = 0;
        rear = -1;
    }

    void enqueue(T value) {
        if (rear == 4) {
            std::cout << "Queue is full" << std::endl;
            return;
        }

        rear++;
        data[rear] = value;
    }

    T dequeue() {
        if (front > rear) {
            std::cout << "Queue is empty" << std::endl;
            return T();
        }

        T value = data[front];
        front++;
        return value;
    }
};

int main() {
    Queue<int> queue;

    queue.enqueue(100);
    queue.enqueue(200);
    queue.enqueue(300);

    std::cout << "Dequeued value: " << queue.dequeue() << std::endl;
    std::cout << "Dequeued value: " << queue.dequeue() << std::endl;

    return 0;
}
