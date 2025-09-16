#include<stdio.h>
// #include<conio.h>
#include<malloc.h>
// ds doubly circular --> 16/09/2025

typedef struct node {
    int data;
    struct node *next,*prev;
} node;

node *create() {
    node *head,*q,*r;
    char ch;
    head = (node*)malloc(sizeof(node));
    printf("\nEnter data: ");
    scanf("%d",&head->data);
    head->next = head->prev = NULL;
    q = head;
    printf("More(y/n): ");
    //ch = getche();
    scanf(" %c",&ch);
    while(ch == 'y') {
        r = (node*)malloc(sizeof(node));
        printf("\nEnter data: ");
        scanf("%d",&r->data);
        r->next = NULL;
        r->prev = q;
        q->next = r;
        // q->prev = r;
        q = r;
        printf("More(y/n): ");
        //ch = getche();
        scanf(" %c",&ch);
    }
    head->prev = q;
    q->next= head;
    return head;
}

void traverse(node *head){
    node *z;
    printf("\nForward traversing");
	for(z = head; z->next!=head;z=z->next){
		printf("%5d",z->data);
	}
	printf("%5d",z->data);
}

node *ins_first(node *head){
	node *n,*l;
	n = (node*)malloc(sizeof(node));
	printf("\nEnter Data for first position: ");
	scanf("%d",&n->data);
	n->next = n->prev = NULL;
	n->next = head;
	head->prev = n;
    l = head;
    for(l=head;l->next!=head;l=l->next);
    l->next = n;
    n->prev = l;
	head = n;
	return head;
}

node *ins_last(node *head) {
    node *z,*n;
    n = (node*)malloc(sizeof(node));
    printf("Enter data for last position: ");
    scanf("%d",&n->data);
    n->next=n->prev = NULL;
    for(z=head; z->next!=head; z=z->next);
    z->next = n;
    n->prev=z;
    n->next = head;
    head->prev = n;
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
    for(z=head; z->next!=head; z=z->next) {
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
    node *t,*z,*q;
    t = head;
    for(q=head;q->next!=head;q=q->next);
    head = head->next;
    head->prev=q;
    q->next=head;
    printf("\nAfter deleting first node: ");
    free(t);
    return head;
}

node *del_last(node *head) {
    node *z,*t;
    //Dummy for-loop
    for(z=head; z->next->next!=head; z=z->next);
    t = z->next;
    z->next=head;
    head->prev = z;
    printf("\nAfter deleting last node: ");
    free(t);
    return head;
}

node *del_pos(node *head) {
    node *z,*t;
    int pos, c = 0;
    printf("\nEnter position: ");
    scanf("%d",&pos);
    for(z=head; z->next!=head; z=z->next) {
        c++;
        if(c == pos-1) {
            t = z->next;
            z->next = t->next;
            t->next->prev = z;
            printf("\nAfter deleting position %d",pos);
            free(t);
            break;
        }
    }
    return head;
}

int main(){
    node *h;
    h = create();
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
    traverse(h);
    printf("\n");
    h = del_last(h);
    traverse(h);
    printf("\n");
    h = del_pos(h);
    traverse(h);
    printf("\n");
    return 0;
}