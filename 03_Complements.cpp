#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node* prev ;
};

class DoublyLinkedList{
    public:

    Node* head;
    Node* tail;

    DoublyLinkedList(){
        head = nullptr;
        tail = nullptr;
    }

    void InsertAtEnd(int val){
        Node* newNode = new Node();
        newNode->data = val;
        newNode->next = nullptr;
        newNode->prev = nullptr;

        if(head == nullptr){
            head = newNode;
            tail = newNode;
        }else{
            tail->next = newNode;
            newNode->prev = tail;
            tail = tail->next;
        }
    }

    void OnesComplemet(){
        Node* temp  = head;

        if(head == nullptr){
            cout<<"List is empty"<<endl;
        }

        while(temp!=nullptr){
            if(temp->data == 0){
                temp->data = 1;
            }else{
                temp->data = 0;
            }
        temp = temp->next;
        }
        
    }

    void display(){
        Node* temp = head;

        while(temp!=nullptr){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    }


};
int main(){
    DoublyLinkedList dll;

    dll.InsertAtEnd(0);
    dll.InsertAtEnd(1);
    dll.InsertAtEnd(0);
    dll.InsertAtEnd(1);

    dll.display();
    cout<<endl;

    cout<<"The One's Complement is :"<<endl;
    dll.OnesComplemet();
    dll.display();
}