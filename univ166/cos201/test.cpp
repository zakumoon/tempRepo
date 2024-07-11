#include <iostream>
using namespace std;

// Define a Node structure
struct Node {
    int data;
    Node* next;
};

// Function to insert a new node at the beginning
void insert(Node*& head, int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

// Function to insert a new node at the end
void append(Node*& head, int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = nullptr;
    if (head == nullptr) {
        head = newNode;
        return;
    }
    Node* current = head;
    while (current->next != nullptr) {
        current = current->next;
    }
    current->next = newNode;
}

// Function to insert a new node after a given node
void insertAfter(Node* prevNode, int value) {
    if (prevNode == nullptr) {
        cout << "Previous node cannot be null." << endl;
        return;
    }
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = prevNode->next;
    prevNode->next = newNode;
}

// Function to display the linked list
void display(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

// Function to delete a node with a given value
void deleteNodeWithValue(Node*& head, int value) {
    if (head == nullptr) {
        return;
    }
    if (head->data == value) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }
    Node* current = head;
    while (current->next != nullptr && current->next->data != value) {
        current = current->next;
    }
    if (current->next != nullptr) {
        Node* temp = current->next;
        current->next = current->next->next;
        delete temp;
    }
}

int main() {
    Node* myList = nullptr;

    insert(myList, 5);
    insert(myList, 10);
    append(myList, 15);
    insertAfter(myList->next, 7);

    display(myList); // Output: 10 7 5 15

    deleteNodeWithValue(myList, 7);
    display(myList); // Output: 10 5 15

    // Don't forget to free the memory when you're done
    while(myList != nullptr) {
        Node* temp = myList;
        myList = myList->next;
        delete temp;
    }

    return 0;
}
