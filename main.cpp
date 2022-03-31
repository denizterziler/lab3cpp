#include <iostream>
#include <new>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node(int x, Node *n){
        data = x;
        next = n;
    }
    Node(){

    }
};
Node *top;
int element;

class Stack
        {
    int max;
    public:
        Stack(int data){
            top = NULL;
            max = data;
        }
    void push_Node(int data){
        if(element<max){
            cout << "-*-*-*-*-*-*-*-*-*-*-*-"<<endl;
            cout<<"Pushed element is: "<< data<<endl;
            Node* n = new Node();
            n->data = data;
            n->next = top;
            top = n;
            element++;
        }
        else{
            cout << "-*-*-*-*-*-*-*-*-*-*-*-"<<endl;
            cout<<"No enough space to add element: "<<data<<endl;
            return;
        }

    }
    void pop(){
        Node *n;
        if(isEmpty()){
            cout << "-*-*-*-*-*-*-*-*-*-*-*-"<<endl;
            cout << "Empty" << endl;
        }
        else{
            cout << "-*-*-*-*-*-*-*-*-*-*-*-"<<endl;
            cout<<"Popped element is: " << top->data << endl;
            n = top;
            top = top->next;
            delete n;
            element--;
        }
    }
    int returnTop(){
            if(isEmpty()){
                cout<<"Empty stack.There is no top element."<<endl;
            }
            else{
                Node *n;
                n = top;
                return n->data;
            }

        }
    void display(){
        Node *n;
        if(isEmpty()){
            cout << "-*-*-*-*-*-*-*-*-*-*-*-"<<endl;
            cout<< "Empty"<<endl;
            return;
        }
        else{
            n = top;
            cout << "-*-*-*-*-*-*-*-*-*-*-*-"<<endl;
            while(n!=NULL){
                cout<< n->data <<" " <<endl;
                n = n->next;
            }
        }
    }
    bool isEmpty(){
         if(top==NULL){
             return true;
         }
         else{
             return false;
         }
        }
    int size(){
            return element;
        }
};
void menu(){
    cout << "-*-*-*-*-*-*-*-*-*-*-*-"<<endl;
    cout<<"Press 1 to push a new node."<<endl;
    cout<<"Press 2 to pop a node."<<endl;
    cout<<"Press 3 to show top node."<<endl;
    cout<<"Press 4 to display the list."<<endl;
    cout<<"Press 5 to show the size."<<endl;
    cout<<"Press -1 to exit."<<endl;
}

int main() {
    Stack *stack = new Stack(5);
    int input = -1;
    int value;
    do{
        menu();
        cout<<"Enter choice: ";
        cin>>input;
        switch (input) {
            case -1:
                cout<<"Exit..."<<endl;
                break;

            case 1:
                cout<<"Enter the value to push: "<<endl;
                cin>>value;
                stack->push_Node(value);
                break;
            case 2:
                stack->pop();
                break;
            case 3:
                cout<<"Top: "<<stack->returnTop()<<endl;
                break;
            case 4:
                stack->display();
                break;
            case 5:
                cout<<"Size: "<<stack->size()<<endl;
                break;
            default:
                cout<<"Invalid Choice"<<endl;
        }


    }while(input!=-1);
   /* stack->push_Node(5);
    stack->display();
    cout<<"Top: "<<stack->returnTop()<<endl;
    cout<<"Size: "<<stack->size()<<endl;

    stack->push_Node(15);
    stack->display();
    cout<<"Top: "<<stack->returnTop()<<endl;
    cout<<"Size: "<<stack->size()<<endl;

    stack->push_Node(20);
    stack->display();
    cout<<"Top: "<<stack->returnTop()<<endl;
    cout<<"Size: "<<stack->size()<<endl;

    stack->push_Node(25);
    stack->display();
    cout<<"Top: "<<stack->returnTop()<<endl;

    stack->push_Node(30);
    stack->display();
    cout<<"Top: "<<stack->returnTop()<<endl;

    stack->push_Node(35);
    stack->display();
    cout<<"Top: "<<stack->returnTop()<<endl;



    stack->pop();
    stack->display();
    cout<<"Top: "<<stack->returnTop()<<endl;

    stack->pop();
    stack->display();
    cout<<"Top: "<<stack->returnTop()<<endl;

    stack->pop();
    stack->display();
    cout<<"Top: "<<stack->returnTop()<<endl;

    stack->pop();
    stack->display();
    cout<<"Top: "<<stack->returnTop()<<endl;

    stack->pop();
    stack->display();
    cout<<"Top: "<<stack->returnTop()<<endl;

    stack->pop();
    stack->display();
    cout<<"Top: "<<stack->returnTop()<<endl;*/

    return 0;
}
