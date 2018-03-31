// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
using namespace std;

class Stack {
private:
    class Node {
    public:
        int data;
        Node* next;

        Node(int x){
            data = x;
            next = NULL;
        }
    };
    
    Node* head;
    int sze;

public:
    Stack(){
        head = NULL;
        sze = 0;
    }

    void push(int x){
        Node* tmp = new Node(x);
        tmp->next = head;
        head = tmp;
        ++sze;
    }

    void pop(){
        if (empty()) return;
        Node* tmp = head;
        head = head->next;
        --sze;
        delete tmp;
    }

    int top(){
        if (empty()) return -1;

        int x = head->data;
        return x;
    }

    bool empty(){
        return head == NULL;
    }

    int size(){
        return sze;
    }

    ~Stack(){
        while(head){
            Node* ahead = head->next;
            delete head;
            head = ahead;
        }
    }
};

int main() {
    Stack s;
    // s.push(3);      // s.insert(3);
    // s.top();        // s.readTopElement();
    // s.pop();        // s.remove();

    s.push(2);
    s.pop();
    s.pop();
    s.pop();
    s.push(20);
    s.push(200);
    cout << s.top() << endl;
    cout << s.top() << endl;
    s.push(12);
    cout << s.top() << endl;

}