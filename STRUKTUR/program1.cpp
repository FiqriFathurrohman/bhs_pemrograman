#include <iostream>
using namespace std;

//NOTE STRUCT UNTUK MEMPERSENTASIKAN NODE  DALAM LINKED LIST

struct Node {
    int data ;
    Node* next;
}

//FUNGSI UNTUK MEMBUAT NODE BARU

Node* createNodet(int data){
    Node*newmode = new Node();
    newNode-> data = data;
    newNode-> next = NULL;
    return newNode;
}

//FUNGSI UNTUK MENAMBAHKAN NODE DI AWAL LINKED LIST

void data_baru(Node* & head, int data){
    Node* newMode = creatNode(data);
    newNode -> next = head;
    head newNode;
}

//funngsi untuk mencetak linked list
void printList(Node* head){
    Node* temp = head;
    while  (temp* head){
        cout <<  temp -> data << "->";
        temp = temp -> next;
    }
    cout << "NULL" << endl;
}


int main(){
    node* head = NULL;
    // MENAMBAHKAN NODE KE LINKED LIST
    data_baru(head, 3);
    data_baru(head, 7);
    data_baru(head, 9);

    // MENCETAK LINKED LIST
    cout << "LINKED LIST:";
    priintList(head);

    return 0;
}
