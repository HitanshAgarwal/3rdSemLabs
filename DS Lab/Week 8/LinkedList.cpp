#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = NULL;
    }

    void insertAtBeginning(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = head;
        head = newNode;
    }

    void insertAtEnd(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = NULL;

        if (!head) {
            head = newNode;
            return;
        }

        Node* temp = head;
        while (temp->next) {
            temp = temp->next;
        }

        temp->next = newNode;
    }

    void insertBefore(int value, int pos) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = NULL;

        if (pos == 0) {
            insertAtBeginning(value);
            return;
        }

        Node* temp = head;
        for (int i = 0; temp != NULL && i < pos - 1; i++) {
            temp = temp->next;
        }

        if (temp == NULL) {
            cout << "Position does not exist" << endl;
            delete newNode;
            return;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }

    void insertAfter(int value, int pos) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = NULL;

        Node* temp = head;
        for (int i = 0; temp != NULL && i < pos; i++) {
            temp = temp->next;
        }

        if (temp == NULL) {
            cout << "Position does not exist" << endl;
            delete newNode;
            return;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }

    void del(int pos) {
        if (!head) {
            cout << "Position does not exist" << endl;
            return;
        }

        Node* temp = head;

        if (pos == 0) {
            head = head->next;
            delete temp;
            return;
        }

        Node* temp2 = NULL;
        for (int i = 0; temp != NULL && i < pos; i++) {
            temp2 = temp;
            temp = temp->next;
        }

        if (temp == NULL) {
            cout << "Position does not exist" << endl;
            return;
        }

        temp2->next = temp->next;
        delete temp;
    }

    void print() {
        if (!head) {
            cout << "Linked List is empty!" << endl;
            return;
        }

        Node* temp = head;
        while (temp) {
            cout << temp->data;
            if (temp->next) cout << " -> ";
            temp = temp->next;
        }
        cout << " -> NULL" << endl;
    }
};

int main() {
    LinkedList list;

    list.insertAtBeginning(10);
    list.insertAtEnd(20);
    list.insertAtEnd(30);
    list.print(); // Expected: 10 -> 20 -> 30 -> NULL

    list.insertBefore(15, 1);
    list.print(); // Expected: 10 -> 15 -> 20 -> 30 -> NULL

    list.insertAfter(25, 1);
    list.print(); // Expected: 10 -> 15 -> 25 -> 20 -> 30 -> NULL

    list.del(2);
    list.print(); // Expected: 10 -> 15 -> 20 -> 30 -> NULL

    return 0;
}

