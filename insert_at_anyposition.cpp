#include <iostream>

using namespace std;
struct node{
    int data;
    node*next;
};
void display( node*ptr){
	
    while(ptr!=NULL){
        cout<<ptr->data;
        ptr=ptr->next;
    }
}
node* insert( node*ptr,int n){
	int i=0;
   node *h;
   h=(struct node*)malloc(sizeof(struct node));
   node *p;
   p=ptr;
    while(i!=n-1){
        p=p->next;
        i++;
    }
    h->data=4;
    h->next=p->next;
    p->next=h;
    return ptr;
}

int main()
{
    cout<<"Hello World";
     node *n1;
      node *n2;
      node *n3;
     n1=(struct node*)malloc(sizeof(struct node));
     n2=(struct node*)malloc(sizeof(struct node));
     n3=(struct node*)malloc(sizeof(struct node));
     n1->data=3;
     n1->next=n2;
     n2->data=5;
     n2->next=n3;
     n3->data=7;
     n3->next=NULL;
     display(n1);
     n1=insert(n1,2);
     display(n1);

    return 0;
}
