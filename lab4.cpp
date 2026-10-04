//1

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* head = NULL;
    int n, value;

    cout << "Enter number of nodes: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter value: ";
        cin >> value;

        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = head;
        head = newNode;
    }

    cout << "Linked List after insertion at beginning: ";

    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL";

    return 0;
}

//2

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* head = NULL;
    int n, value;

    cout << "Enter number of nodes: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter value: ";
        cin >> value;

        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = head;
        head = newNode;
    }

    cout << "Linked List after insertion at beginning: ";

    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL";

    return 0;
}

//3

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node *head = NULL, *temp;
    int n, x, pos;

    cin >> n;

    while (n--) {
        cin >> x;
        Node* p = new Node{x, NULL};

        if (!head) head = p;
        else {
            temp = head;
            while (temp->next) temp = temp->next;
            temp->next = p;
        }
    }

    cin >> x >> pos;

    Node* p = new Node{x, NULL};

    if (pos == 1) {
        p->next = head;
        head = p;
    } else {
        temp = head;
        for (int i = 1; i < pos - 1; i++)
            temp = temp->next;

        p->next = temp->next;
        temp->next = p;
    }

    for (temp = head; temp; temp = temp->next)
        cout << temp->data << " ";

    return 0;
}

//4

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node *head = NULL, *temp;
    int n, x;

    cin >> n;

    while (n--) {
        cin >> x;
        Node* p = new Node{x, head};
        head = p;
    }

    if (head) {
        temp = head;
        head = head->next;
        delete temp;
    }

    for (temp = head; temp; temp = temp->next)
        cout << temp->data << " ";

    return 0;
}

//5

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node *head = NULL, *temp;
    int n, x;

    cin >> n;

    while (n--) {
        cin >> x;
        Node* p = new Node{x, head};
        head = p;
    }

    if (head) {
        temp = head;
        head = head->next;
        delete temp;
    }

    for (temp = head; temp; temp = temp->next)
        cout << temp->data << " ";

    return 0;
}

//6

#include<iostream>
using namespace std;

struct Node{int d; Node* next;};

int main(){
    Node *h=NULL,*t,*p;
    int n,x; cin>>n;

    while(n--){
        cin>>x; p=new Node{x,NULL};
        if(!h) h=p;
        else{
            t=h; while(t->next)t=t->next;
            t->next=p;
        }
    }

    if(!h) return 0;
    if(!h->next){delete h; h=NULL;}
    else{
        t=h;
        while(t->next->next)t=t->next;
        delete t->next; t->next=NULL;
    }

    for(t=h;t;t=t->next) cout<<t->d<<" ";
}

//7

#include<iostream>
using namespace std;

struct Node{int d; Node* next;};

int main(){
    Node *h=NULL,*t;
    int n,x,key,pos=1; cin>>n;

    while(n--){
        cin>>x; h=new Node{x,h};
    }

    cin>>key;

    for(t=h;t;t=t->next,pos++)
        if(t->d==key){
            cout<<"Found at "<<pos;
            return 0;
        }

    cout<<"Not Found";
}

//8

#include<iostream>
using namespace std;

struct Node{int d; Node* next;};

int main(){
    Node *h=NULL,*t;
    int n,x,key,pos=1; cin>>n;

    while(n--){
        cin>>x; h=new Node{x,h};
    }

    cin>>key;

    for(t=h;t;t=t->next,pos++)
        if(t->d==key){
            cout<<"Found at "<<pos;
            return 0;
        }

    cout<<"Not Found";
}

//9

#include<iostream>
using namespace std;

struct Node{int d; Node* next;};

int main(){
    Node *h=NULL,*t;
    int n,x,c=0; cin>>n;

    while(n--){
        cin>>x; h=new Node{x,h};
    }

    for(t=h;t;t=t->next)c++;

    cout<<"Nodes = "<<c;
}

//10

#include<iostream>
using namespace std;

struct Node{int d; Node* next;};

int main(){
    Node *h=NULL,*t;
    int n,x; cin>>n;

    while(n--){
        cin>>x; h=new Node{x,h};
    }

    int mx=h->d,mn=h->d;

    for(t=h;t;t=t->next){
        mx=max(mx,t->d);
        mn=min(mn,t->d);
    }

    cout<<"Max="<<mx<<" Min="<<mn;
}

//11

#include<iostream>
using namespace std;

struct Node{int d; Node* next;};

int main(){
    Node *h=NULL,*t;
    int n,x; cin>>n;

    while(n--){
        cin>>x; h=new Node{x,h};
    }

    for(Node*i=h;i;i=i->next)
        for(Node*j=i->next;j;j=j->next)
            if(i->d>j->d)
                swap(i->d,j->d);

    for(t=h;t;t=t->next)
        cout<<t->d<<" ";
}

//12

#include<iostream>
using namespace std;

struct Node{int d; Node* next;};

int main(){
    Node *h=NULL,*t;
    int n,x; cin>>n;

    while(n--){
        cin>>x; h=new Node{x,h};
    }

    for(Node*i=h;i;i=i->next)
        for(Node*j=i->next;j;j=j->next)
            if(i->d>j->d)
                swap(i->d,j->d);

    for(t=h;t;t=t->next)
        cout<<t->d<<" ";
}

//13

#include<iostream>
using namespace std;

struct Node{
    int d;
    Node *prev,*next;
};

int main(){
    Node *h=NULL,*t,*p;
    int n,x; cin>>n;

    while(n--){
        cin>>x;
        p=new Node{x,NULL,NULL};

        if(!h) h=p;
        else{
            t=h;
            while(t->next)t=t->next;
            t->next=p;
            p->prev=t;
        }
    }

    for(t=h;t;t=t->next)
        cout<<t->d<<" ";
}

//14

#include<iostream>
using namespace std;

struct Node{int d; Node* next;};

int main(){
    Node *h=NULL,*t,*p;
    int n,x; cin>>n;

    while(n--){
        cin>>x; p=new Node{x,NULL};

        if(!h){
            h=p;
            p->next=h;
        }
        else{
            t=h;
            while(t->next!=h)t=t->next;
            t->next=p;
            p->next=h;
        }
    }

    if(h){
        t=h;
        do{
            cout<<t->d<<" ";
            t=t->next;
        }while(t!=h);
    }
}

//15.
#include<iostream>
using namespace std;

struct Node{int d; Node* next;};

int main(){
    Node *h=NULL,*t,*p;
    int n,x; cin>>n;

    while(n--){
        cin>>x; p=new Node{x,NULL};

        if(!h){
            h=p;
            p->next=h;
        }
        else{
            t=h;
            while(t->next!=h)t=t->next;
            t->next=p;
            p->next=h;
        }
    }

    if(h){
        t=h;
        do{
            cout<<t->d<<" ";
            t=t->next;
        }while(t!=h);
    }
}
