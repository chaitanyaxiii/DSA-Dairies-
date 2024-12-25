#include <iostream>
#include <string>
using namespace std;

class Node {
public:
    int prn;
    string AY;
    string name;
    Node* next;

    Node(int prn, string AY, string name) : prn(prn), AY(AY), name(name), next(nullptr) {}
};

class Club {
public:
    Node* head;
    Node* tail;

    Club() : head(nullptr), tail(nullptr) {}

    ~Club() {
        while (head != nullptr) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }

    void addMember(int prn, string AY, string name) {
        Node* newNode = new Node(prn, AY, name);
        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void addCoordinator(string AY, string name) {
        Node* newNode = new Node(0, AY, name); // Coordinator has PRN = 0
        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            newNode->next = head;
            head = newNode; // Add coordinator at the front
        }
    }

    void deleteNode(int key) {
        if (head == nullptr) return;
        if (head->prn == key) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node* temp = head;
        while (temp->next != nullptr) {
            if (temp->next->prn == key) {
                Node* nodeToDelete = temp->next;
                temp->next = temp->next->next;
                delete nodeToDelete;
                return;
            }
            temp = temp->next;
        }

        cout << "Member with PRN " << key << " not found.\n";
    }

    void displayClub() {
        Node* temp = head;
        while (temp != nullptr) {
            if (temp->prn == 0) {
                cout << "Coordinator: " << temp->name << " (" << temp->AY << ")\n";
            } else {
                cout << "Member: " << temp->name << " (" << temp->AY << ", PRN: " << temp->prn << ")\n";
            }
            temp = temp->next;
        }
    }

    void Concatenate(Club& other){
        if (head == nullptr){
            head = other.head;
            tail = other.tail;
        }else{
            tail->next = other.head;
            tail = other.tail;
        }
        other.head = nullptr;
        other.tail = nullptr;
        Node* temp = head;
        while (temp != nullptr) {
            if (temp->prn == 0) {
                cout << "Coordinator: " << temp->name << " (" << temp->AY << ")\n";
            } else {
                cout << "Member: " << temp->name << " (" << temp->AY << ", PRN: " << temp->prn << ")\n";
            }
            temp = temp->next;
        }
    }
};

int main() {
    Club c1;
    Club c2;

    // Club 1
    c1.addMember(1001, "FYMCA", "Amol Jadhav");
    c1.addMember(1002, "FYMCA", "John Doe");
    c1.addMember(1003, "FYMCA", "Vinayak Shirsat");
    c1.addCoordinator("FYMCA", "Shripad Bhide");

    // Club 2
    c2.addMember(1001, "FYMCA", "Shubham Kale");
    c2.addMember(1002, "FYMCA", "Pratik Jadhav");
    c2.addMember(1003, "FYMCA", "Tim Cook");
    c2.addCoordinator("FYMCA", "Vrushali Mam");
    c2.deleteNode(1002);

    // Display Club Members
    cout << "Club - 1 Members:\n";
    c1.displayClub();
    cout << "\n";

    cout << "Club - 2 Members:\n";
    c2.displayClub();

    cout<<"After Concaternation :";
    c2.Concatenate(c1);
    cout << "\n";

    return 0;
}
