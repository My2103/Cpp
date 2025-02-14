//
//  main.cpp
//  midterm - Mai Ngoc Diem My
//
//  Created by Mai Ngoc Diem My on 20/1/25.
//
#define MAX 100
#include <iostream>
#include <queue>
using namespace std;
struct Myqueue {
    int front; //first node
    int rear; //last node
    int nodes[MAX]; // array items
};
void initialize(struct Myqueue *pq);
int empty(struct Myqueue *pq);
int full (struct Myqueue *pq);
void insert (struct Myqueue *pq, int x);
void insertMultiple(struct Myqueue *pq, int count);
void displayQueue (struct Myqueue *pq);
void Enqueue(struct Myqueue *pq, int x);
int Dequeue(struct Myqueue *pq);
void displayMin(struct Myqueue *pq);
void displaySecondLargest(struct Myqueue *pq);
void reverseQueue(struct Myqueue *pq);
int main(int argc, const char * argv[]) {
    Myqueue pq;
    int value, choice, add;
    
    // Initialize queue
    initialize(&pq);
    
    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Push a single value to queue\n";
        cout << "2. Push multiple values to queue\n";
        cout << "3. Display queue\n";
        cout << "4. Enqueue\n";
        cout << "5. Dequeue\n";
        cout << "6. Display lowest element\n";
        cout << "7. Display second highest element\n";
        cout << "8. Reverse Queue\n";
        cout << "9. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
            
        switch (choice) {
            case 1: {
                cout << "Enter value to push: ";
                cin >> value;
                insert(&pq, value);
                break;
            }
            case 2: {
                int count;
                cout << "Enter the number of values to push: ";
                cin >> count;
                insertMultiple(&pq, count);
                break;
            }
            case 3:
                displayQueue(&pq);
                break;
            case 4:
                cout << "Enter value to add: ";
                cin >> add;
                Enqueue(&pq, add);
                break;
            case 5:
                Dequeue(&pq);
                break;
            case 6:
                displayMin(&pq);
                break;
            case 7:
                displaySecondLargest(&pq);
                break;
            case 8:
                reverseQueue(&pq);
                break;
            case 9:
                cout << "Exiting program." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
            }
        }
    return 0;
}// main

void initialize(struct Myqueue *pq) {
    pq->front = -1; // Hàng đợi trống
    pq->rear = -1;  // Hàng đợi trống
}// initialize

// Kiểm tra hàng đợi rỗng
int empty(struct Myqueue *pq) {
    return (pq->front == -1);
}// empty

int full (struct Myqueue *pq) {
    return (((pq->rear + 1) % MAX == pq->front) ? 1 : 0);
}// full

void insert (struct Myqueue *pq, int x) {
    if (full(pq)) {
        cout << "Queue is full.";
    } else {
        if (empty(pq)) {
            // Nếu hàng đợi trống, cập nhật front và rear
            pq->front = pq->rear = 0;
        } else {
            // Di chuyển rear theo kiểu vòng tròn
            pq->rear = (pq->rear + 1) % MAX;
        }
        // Chèn phần tử vào hàng đợi
        pq->nodes[pq->rear] = x;
    }
}// insert new item

void insertMultiple(struct Myqueue *pq, int count) {
    if (count <= 0) {
        cout << "Invalid count. Please enter a positive number." << endl;
        return;
    }

    cout << "Enter " << count << " values to push into the queue:" << endl;
    for (int i = 0; i < count; i++) {
        int value;
        cin >> value;

        if (full(pq)) {
            cout << "Queue is full. Only " << i << " elements were added to the queue." << endl;
            return;
        }

        insert(pq, value);
    }

    cout << count << " elements added to the queue." << endl;
}// Create a function to input a queue with multiple value

void displayQueue (struct Myqueue *pq) {
    if (empty(pq)) {
        cout << "Queue is empty." << endl;
    } else {
        int i = pq->front;
        cout << "Elements in queue: " << endl;
        while (true) {
            cout << pq->nodes[i] << " ";
            
            if (i == pq->rear) {
                break;
            }
            i = (i + 1) % MAX;
        }
        cout << endl;
    }
}// display Queue

void Enqueue(struct Myqueue *pq, int x) {
    if (full(pq)) {
        cout << "Queue is full. Cannot enqueue " << x << "." << endl;
    } else {
        if (empty(pq)) {
            pq->front = pq->rear = 0;
        } else {
            pq->rear = (pq->rear + 1) % MAX;
        }
        pq->nodes[pq->rear] = x;
        cout << "Enqueued: " << x << endl;
    }
}// Enqueue

int Dequeue(struct Myqueue *pq) {
    if (empty(pq)) {
        cout << "Queue is empty. Cannot dequeue." << endl;
        return -1;
    } else {
        int value = pq->nodes[pq->front];
        if (pq->front == pq->rear) {
            pq->front = pq->rear = -1;
        } else {
            pq->front = (pq->front + 1) % MAX;
        }
        cout << "Dequeued: " << value << endl;
        return value;
    }
}// Dequeue

void displayMin(struct Myqueue *pq) {
    if (empty(pq)) {
        cout << "Queue is empty. No minimum value to display." << endl;
    } else {
        int minValue = pq->nodes[pq->front];
        int i = pq->front;

        while (true) {
            if (pq->nodes[i] < minValue) {
                minValue = pq->nodes[i];
            }

            if (i == pq->rear) {
                break;
            }
            i = (i + 1) % MAX;
        }

        cout << "The minimum value in the queue is: " << minValue << endl;
    }
}// display Min

void displaySecondLargest(struct Myqueue *pq) {
    if (empty(pq)) {
        cout << "Queue is empty. No second largest value to display." << endl;
        return;
    }

    if (pq->front == pq->rear) {
        // Chỉ có 1 phần tử
        cout << "Queue has only one element. No second largest value to display." << endl;
        return;
    }

    int max1 = INT_MIN;
    int max2 = INT_MIN; 

    int i = pq->front;
    while (true) {
        int current = pq->nodes[i];

        if (current > max1) {
            max2 = max1;
            max1 = current;
        } else if (current > max2 && current != max1) {
            max2 = current;
        }

        if (i == pq->rear) {
            break;
        }
        i = (i + 1) % MAX;
    }

    if (max2 == INT_MIN) {
        cout << "All elements in the queue are the same. No second largest value to display." << endl;
    } else {
        cout << "The second largest value in the queue is: " << max2 << endl;
    }
}// display second largest

void reverseQueue(struct Myqueue *pq) {
    if (empty(pq)) {
        cout << "Queue is empty. Cannot reverse." << endl;
        return;
    }

    int temp[MAX];
    int size = 0;

    while (!empty(pq)) {
        temp[size++] = pq->nodes[pq->front];
        pq->front = (pq->front + 1) % MAX;
        if (pq->front == (pq->rear + 1) % MAX) {
            pq->front = -1;
            pq->rear = -1;
            break;
        }
    }

    for (int i = 0; i < size / 2; i++) {
        swap(temp[i], temp[size - i - 1]);
    }

    for (int i = 0; i < size; i++) {
        Enqueue(pq, temp[i]);
    }

    cout << "Queue has been reversed." << endl;
    displayQueue(pq); // Hiển thị hàng đợi sau khi đảo ngược
}// Reverse queue

