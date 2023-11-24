#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) : data(data), next(nullptr) {}
};

class LinkedList {
public:
    Node* head;

    LinkedList() : head(nullptr) {}

    void append(int data) {
        Node* new_node = new Node(data);
        if (!head) {
            head = new_node;
            return;
        }
        Node* last_node = head;
        while (last_node->next) {
            last_node = last_node->next;
        }
        last_node->next = new_node;
    }

    void display() {
        Node* current = head;
        while (current) {
            cout << current->data << " -> ";
            current = current->next;
        }
        cout << "None" << endl;
    }
};

LinkedList createLinkedList() {
    LinkedList linkedList;
    int elements[] = {1, 2, 3, 4, 5};
    for (int element : elements) {
        linkedList.append(element);
    }
    return linkedList;
}

int main() {
    LinkedList myLinkedList = createLinkedList();
    myLinkedList.display();
    return 0;
}
