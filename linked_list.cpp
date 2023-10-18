// //insrt in begining

// #include <iostream>

// struct Node {
//     int data;
//     Node* next;
// };



// class LinkedList {
// private:
//     Node* head;

// public:
    
//     LinkedList() {
//         head = nullptr;
//     }

    
//     void insert(int value) {
//         Node* newNode = new Node;
//         newNode->data = value;
//         newNode->next = head;
//         head = newNode;
//     }

    
//     void display() {
//         Node* temp = head;
//         while (temp != nullptr) {
//             std::cout << temp->data << " ";
//             temp = temp->next;
//         }
//         std::cout << std::endl;
//     }
// };

// int main() {
    
//     LinkedList myList;


//     myList.insert(5);
//     myList.insert(10);
//     myList.insert(15);

    
//     myList.display();

//     return 0;
// }


//Insert in middle

// Reverse the string
#include <iostream>


struct Node {
    int data;
    Node* next;
};


class LinkedList {
private:
    Node* head;

public:
    
    LinkedList() {
        head = nullptr;
    }

    
    void insert(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = head;
        head = newNode;
    }

    
    void reverseRecursive(Node* current, Node* previous) {
        if (current == nullptr) {
         
            head = previous;
            return;
        }

        Node* nextNode = current->next;
        current->next = previous;

        reverseRecursive(nextNode, current);
    }


    void reverse() {
        reverseRecursive(head, nullptr);
    }


    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            std::cout << temp->data << " ";
            temp = temp->next;
        }
        std::cout << std::endl;
    }
};

int main() {
    
    LinkedList myList;

    
    int numElements;
    std::cout << "Enter the number of elements: ";
    std::cin >> numElements;

   
    std::cout << "Enter the elements:" << std::endl;
    for (int i = 0; i < numElements; i++) {
        int value;
        std::cin >> value;
        myList.insert(value);
    }

 
    std::cout << "Original Linked List: ";
    myList.display();

   
    myList.reverse();

   
    std::cout << "Reversed Linked List: ";
    myList.display();

    return 0;
}



