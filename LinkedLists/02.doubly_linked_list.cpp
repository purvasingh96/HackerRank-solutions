#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
    Node(int);
};

Node:: Node(int value) {
    data=value;
    prev=NULL;
    next=NULL;
}

class HugeInt{

    public:
        HugeInt();
        ~HugeInt();

        void insertFront(int data);
        void insertEnd(int data);
        void display();
        int length();
        void diff(HugeInt*, HugeInt*);
        void add(HugeInt*, HugeInt*);
        void multiply(HugeInt*, HugeInt*);
        void quo(HugeInt*, HugeInt*);
        void cmp(HugeInt*, HugeInt*);
        Node* head;
        Node* tail;
        int size;

};

// :: is scope resolution operator

HugeInt::HugeInt() {
    head=tail=NULL;
    size=0;
}

void HugeInt:: insertFront(int data) {
Node* temp = new Node(data);
    if(head==NULL) {
        head=tail=temp;
    } else {

        head->prev=temp;
        temp->next=head;
        head=temp;
    }
    ++size;

}


void HugeInt :: insertEnd(int data) {
    Node* temp=new Node(data);
    if(tail==NULL) {
        head=tail=temp;
    } else {
        tail->next=temp;
        temp->prev=tail;
        tail=temp;
    }
    ++size;
}

void HugeInt:: display() {
Node* temp=head;
    while(temp!=NULL) {
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}

int HugeInt:: length(){
    return size;
}


void HugeInt:: add(HugeInt* a, HugeInt* b) {
    int c=0,s;
    HugeInt* a1= new HugeInt(*a);
    HugeInt* b1= new HugeInt(*b);

    this->head=NULL;
    this->tail=NULL;
    this->size=0;

    while(a1->tail!=NULL || b1->tail!=NULL) {
        if(a1->tail!=NULL && b1->tail!=NULL) {

            s=((a1->tail->data+b1->tail->data+c)%10);
            c=((a1->tail->data+b1->tail->data+c)/10);

            a1->tail=a1->tail->prev;
            b1->tail=b1->tail->prev;
        } else if(a1->tail==NULL && b1->tail!=NULL) {

            s=((b1->tail->data+c)%10);
            c=((b1->tail->data+c)/10);

            b1->tail=b1->tail->prev;

        } else if(a1->tail!=NULL && b1->tail==NULL) {

            s=((a1->tail->data+c)%10);
            c=((a1->tail->data+c)/10);

            a1->tail=a1->tail->prev;

        }
            insertFront(s);

    }
    if(c!=0) {
        insertFront(c);
    }
}

void HugeInt:: diff(HugeInt* a, HugeInt* b) {

    int c=0, s;
    this->head=NULL;
    this->tail=NULL;
    this->size=0;

    HugeInt* a1= new HugeInt(*a);
    HugeInt* b1= new HugeInt(*b);

    while(a1->tail!=NULL || b1->tail!=NULL) {
        if(a1->tail!=NULL && b1->tail!=NULL) {
            if((a1->tail->data+c)>=b1->tail->data) {
                s=((a1->tail->data+c)-b1->tail->data);
                c=0;
            } else {
                s=((a1->tail->data+c+10)-b1->tail->data);
                c=-1;
            }
            a1->tail=a1->tail->prev;
            b1->tail=b1->tail->prev;
        } else if(a1->tail!=NULL && b1->tail==NULL) {

            if(a1->tail->data>=1) {
                s=(a1->tail->data+c);
                c=0;
            } else {
                if(c!=0) {
                   s=((a1->tail->data)+10+c);
                   c=-1;
                } else {
                    s=a1->tail->data;
                }
                a1->tail=a1->tail->prev;
            }
            insertFront(s);
        }



    }



}


void HugeInt:: multiply(HugeInt* a, HugeInt* b) {
int k=0, i;
while(b->tail!=NULL) {

    int c=0, s;
    HugeInt* temp=new HugeInt(*a);
    HugeInt* pro=new HugeInt();
    while(temp->tail!=NULL) {
        s = ((temp->tail->data)*(b->tail->data)+c)%10;
        c = ((temp->tail->data)*(b->tail->data)+c)/10;
        pro->insertFront(s);
        temp->tail=temp->tail->prev;
    }
    if(c!=0)
        pro->insertFront(c);
    for(int i=0;i<k;++i)
        pro->insertEnd(0);

    add(this, pro);
    ++k;
    b->tail=b->tail->prev;
    pro->head=pro->tail=NULL;
    pro->size=0;
}

}



int main() {
    HugeInt* m = new HugeInt();
    HugeInt* n = new HugeInt();
    HugeInt* s = new HugeInt();
    HugeInt* p = new HugeInt();
    HugeInt* d = new HugeInt();
    HugeInt* q = new HugeInt();

    string s1 = "123";
    string s2 = "5";

    for (int i = 0; i < s1.length(); i++)
        m->insertEnd(s1.at(i) - '0');

    for (int i = 0; i < s2.length(); i++)
        n->insertEnd(s2.at(i) - '0');

    // Creating copies of m and n
    HugeInt* m1 = new HugeInt(*m);
    HugeInt* n1 = new HugeInt(*n);
    HugeInt* m2 = new HugeInt(*m);
    HugeInt* n2 = new HugeInt(*n);
    HugeInt* m3 = new HugeInt(*m);
    HugeInt* n3 = new HugeInt(*n);

    cout << "Product :" << endl;
    s->multiply(m, n);
    s->display();
    cout << endl;

    cout << "Sum :" << endl;
    p->add(m1, n1);
    p->display();
    cout << endl;

  /*  cout << "Difference (m-n) : m>n:" << endl;

    d->dif(m2, n2);
    d->display();
    q->quo(m3, n3);
    cout << endl;

    cout << "Quotient :" << endl;
    q->display();*/
    return 0;


}
