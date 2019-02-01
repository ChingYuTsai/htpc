#include <iostream>

using namespace std;

class Node {
    public:
        int element;
        Node* nextNode;
};

class List {
    public:
        List() {
            firstNode = NULL;
            size = 0;
        }

        void pushFront(int _element){
            Node* p = new Node;
            p -> element = _element;
            p -> nextNode = firstNode;
            firstNode = p;
            ++size;
        }

        void pushAt(int index, int _element){
            if(index == 0)
                pushFront(_element);
            else {
                Node* beforeNode = firstNode;
                for(int i=1; i < index; ++i)
                    beforeNode = beforeNode -> nextNode;
                push(beforeNode, _element);
            }
        }

        void printOut() const {
            Node* p = firstNode;
            while (p != NULL){
                cout << p -> element << " -> ";
                p = p -> nextNode;
            }
            cout << "NULL" << endl;
        }

        bool isEmpty() const{
            return (size == 0);
        }
        
    protected:
        void push(Node *beforeNode, int _element){
            Node* p = new Node();
            p -> element = _element;
            p -> nextNode = beforeNode -> nextNode;
            beforeNode -> nextNode = p;
            ++size;
        }
        Node* firstNode;
        int size;
};



int main() {

    List myList;

    myList.pushFront(1);
    myList.pushFront(2);
    myList.pushFront(3);
    myList.pushFront(4);
    myList.pushFront(5);
    myList.printOut();

    myList.pushAt(2, 999);
    myList.printOut();

    return 0;
}

