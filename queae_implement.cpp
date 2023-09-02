// #include <iostream>
// using namespace std;

// class Node
// {
//     public:
//     int data;
//     Node *next;

//     Node(int data)
//     {
//         data = data;
//         next = NULL;
//     }
// };

// class que
// {
// public:
//     Node *front;
//     Node *rear;

//     que()
//     {
//         front = NULL;
//         rear = NULL;
//     }

//     bool isEmpty()
//     {
//         return rear == NULL;
//     }

//     void enqueue(int val)
//     {
//         Node *n = new Node(val);

//         if (isEmpty())
//         {
//             front = n;
//             rear = n;
//         }
//         else
//         {
//             rear->next = n;
//             rear = n;
//         }
//     }

//     int dequeue()
//     {
//         if (isEmpty())
//         {
//             cout << "Queue is empty";
//             return -1;
//         }
//         else
//         {
//             int data = front->data;
//             front = front->next;
//             return data;
//         }
//     }

//     void display()
//     {
//         if (isEmpty())
//         {
//             cout << "Queue is empty";
//         }
//         else
//         {
//             Node *n = front;
//             while (n->next != NULL)
//             {
//                 cout << n->data<<" ";
//                 n = n->next;
//             }
//         }
//     }
// };
// int main()
// {

//     que q;
//     q.enqueue(10);
//     q.enqueue(20);
//     q.enqueue(30);
//     q.enqueue(40);

//     q.display();

//     return 0;
// }



#include <iostream>

// Node struct for the linked list
struct Node {
    int data;
    Node* next;

    
};

// Queue class
class Queue {
private:
    Node* front;
    Node* rear;

public:
    // Constructor
    Queue() {
        front = NULL;
        rear = NULL;
    }

    // Check if the queue is empty
    bool isEmpty() {
        return (front == NULL);
    }

    // Enqueue an element
    void enqueue(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = NULL;

        if (isEmpty()) {
            front = newNode;
            rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }

        std::cout << "Enqueued element: " << value << std::endl;
    }

    // Dequeue an element
    void dequeue() {
        if (isEmpty()) {
            std::cout << "Queue is empty. Cannot dequeue." << std::endl;
            return;
        }

        Node* temp = front;
        front = front->next;

        std::cout << "Dequeued element: " << temp->data << std::endl;
        
        delete temp;
    }

    // Display the elements in the queue
    void display() {
        if (isEmpty()) {
            std::cout << "Queue is empty." << std::endl;
            return;
        }

        Node* temp = front;

        std::cout << "Elements in the queue: ";
        while (temp != NULL) {
            std::cout << temp->data << " ";
            temp = temp->next;
        }
        std::cout << std::endl;
    }
};

int main() {
    Queue myQueue;

    myQueue.enqueue(10);
    myQueue.enqueue(20);
    myQueue.enqueue(30);

    myQueue.display();

    myQueue.dequeue();
    myQueue.dequeue();

    myQueue.display();

    return 0;
}
