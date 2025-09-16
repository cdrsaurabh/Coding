#include<stdio.h>
#include<malloc.h>
// ds doubly --> 02/09/2025
typedef struct node{
	int data;
	struct node *next,*prev;
}node;

node *create(){
	node *head,*q,*r;
	char ch;
	head = (node*)malloc(sizeof(node));
	printf("\nEnter data: ");
	scanf("%d",&head->data);
	head->next = head->prev = NULL;
	q = head;
	printf("More(y/n)");
	ch = getche();
	while(ch == 'y'){
		r = (node*)malloc(sizeof(node));
		printf("\nEnter data: ");
		scanf("%d",&r->data);
		r->next = NULL;
		r->prev = q;
		q->next = r;
		q = r;
		printf("More(y/n): ");
		ch = getche();
	}
	return head;
}

void traverse(node *head){
	node *z;
	printf("\nForward traversing");
	for(z = head; z->next!=NULL;z=z->next){
		printf("%5d",z->data);
	}
	printf("%5d",z->data);
	printf("\nBackward traversing");
	while(z!=NULL){
		printf("%5d",z->data);
		z=z->prev;
	}
}

node *ins_first(node *h){
	node *n;
	n = (node*)malloc(sizeof(node));
	printf("\nEnter Data for new node: ");
	scanf("%d",&n->data);
	n->next = n->prev = NULL;
	n->next = h;
	h->prev = n;
	h = n;
	return h;
}
node *ins_last(node *head) {
    node *z,*n;
    n = (node*)malloc(sizeof(node));
    printf("Enter data for new node: ");
    scanf("%d",&n->data);
    n->next=n->prev = NULL;
    for(z=head; z->next!=NULL; z=z->next);
    z->next = n;
    n->prev=z;
    return head;
}
node *ins_pos_bef(node *head) {
    node *z, *n;
    int pos,c =0;
    n = (node *)malloc(sizeof(node));
    printf("\nEnter data: ");
    scanf("%d",&n->data);
    n->next = n->prev = NULL;
    printf("\nEnter position: ");
    scanf("%d",&pos);
    for(z=head; z!=NULL; z=z->next) {
        c++;
        if(c==pos-1) {
            n->next =z->next;
            z->next->prev = n;
            z->next=n;
            n->prev=z;
            break;
        }
    }
    return head;
}
node *ins_pos_aft(node *head) {
    node *z, *n;
    int pos,c =0;
    n = (node *)malloc(sizeof(node));
    printf("\nEnter data: ");
    scanf("%d",&n->data);
    n->next = n->prev = NULL;
    printf("\nEnter position: ");
    scanf("%d",&pos);
    for(z=head; z!=NULL; z=z->next) {
        c++;
        if(c==pos) {
            n->next =z->next;
            z->next->prev = n;
            z->next=n;
            n->prev=z;
            break;
        }
    }
    return head;
}

node *del_first(node *head) {
    node *t;
    t = head;
    head = head->next;
    head->prev = NULL;
    free(t);
    return head;
}

node *del_last(node *head) {
    node *z,*t;
    //Dummy for-loop
    for(z=head; z->next->next!=NULL; z=z->next);
    t = z->next;
    z->next=NULL;
    free(t);
    return head;
}

node *del_pos(node *head) {
    node *z,*t;
    int pos, c = 0;
    printf("\nEnter position: ");
    scanf("%d",&pos);
    for(z=head; z!=NULL; z=z->next) {
        c++;
        if(c == pos-1) {
            t = z->next;
            z->next = t->next;
            t->next->prev = z;
            free(t);
            break;
        }
    }
    return head;
}
int main(){
	node *h;
	h = create();
	printf("\nBefore: ");
	traverse(h);
	printf("\n");
	h = ins_first(h);
	traverse(h);
	printf("\n");
	h = ins_last(h);
	traverse(h);
	printf("\n");
	h = ins_pos_bef(h);
    traverse(h);
    printf("\n");
	h = ins_pos_aft(h);
    traverse(h);
    printf("\n");
	h = del_first(h);
	printf("\nDeleting first: ");
	traverse(h);
	h = del_last(h);
	printf("\nDeleting last");
	traverse(h);
	h = del_pos(h);
	printf("\nEnter the position to delete: ");
	traverse(h);
	return 0;
}