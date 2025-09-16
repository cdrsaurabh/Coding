#include<stdio.h>
#include<conio.h>
#include<malloc.h>
// ds singly circular --> 11/09/2025

typedef struct node {
    int data;
    struct node *next;
} node;

node *create() {
    node *head,*q,*r;
    char ch;
    head = (node*)malloc(sizeof(node));
    printf("\nEnter data: ");
    scanf("%d",&head->data);
    head->next = head;
    q = head;
    printf("More(y/n): ");
    //ch = getche();
    scanf(" %c",&ch);
    while(ch == 'y') {
        r = (node*)malloc(sizeof(node));
        printf("\nEnter data: ");
        scanf("%d",&r->data);
        r->next = head;
        q->next = r;
        q = r;
        printf("More(y/n): ");
        //ch = getche();
        scanf(" %c",&ch);
    }
    return head;
}

void traverse(node *head) {
    node *z;
    for(z = head; z->next!=head; z=z->next) {
        printf("%5d",z->data);
    }
    printf("%5d",z->data);
}

node *ins_first(node *h) {
    node *n,*z;
    n = (node*)malloc(sizeof(node));
    printf("\nEnter Data for new node: ");
    scanf("%d",&n->data);
    n->next = NULL;
    for(z=h;z->next!=h;z=z->next);
    n->next = h;
    z->next = n;
    h = n;
    return h;
}

node *ins_last(node *head) {
    node *z,*n;
    n = (node*)malloc(sizeof(node));
    printf("Enter data for new node: ");
    scanf("%d",&n->data);
    n->next=NULL;
    for(z=head; z->next!=head; z=z->next);
    z->next = n;
    n->next = head;
    return head;
}

node *ins_pos_bef(node *head) {
    node *z, *n;
    int pos,c =0;
    n = (node *)malloc(sizeof(node));
    printf("\nEnter data: ");
    scanf("%d",&n->data);
    n->next = NULL;
    printf("\nEnter position: ");
    scanf("%d",&pos);
    for(z=head; z->next!=head; z=z->next) {
        c++;
        if(c==pos-1) {
            n->next =z->next;
            z->next=n;
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
    n->next = NULL;
    printf("\nEnter position: ");
    scanf("%d",&pos);
    for(z=head; z->next!=head; z=z->next) {
        c++;
        if(c==pos) {
            n->next =z->next;
            z->next=n;
            break;
        }
    }
    return head;
}

node *del_first(node *head) {
    node *t,*z;
    for(z=head;z->next!=head;z=z->next);
    t = head;
    head = head->next;
    z->next=head;
    free(t);
    return head;
}

node *del_last(node *head) {
    node *z,*t;
    for(z=head; z->next->next!=head; z=z->next);
    t = z->next;
    z->next=head;
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
            free(t);
            break;
        }
    }
    return head;
}

int main() {
    node *h;
    h = create();
    traverse(h);
//    printf("\nInsert data at 1st pos.\n");
//    h = ins_first(h);
//    traverse(h);
//    printf("\nInsert data at last pos.\n");
//    h = ins_last(h);
//    traverse(h);
//    printf("\nInsert data at specific pos.\n");
//    h = ins_pos_bef(h);
//    traverse(h);
//    printf("\n");
//    printf("\nInsert data after specific pos.\n");
//    h = ins_pos_aft(h);
//    traverse(h);
    printf("\n");
    printf("\n1st element will be deleted.\n");
    h = del_first(h);
    traverse(h);
    printf("\nlast element will be deleted.\n");
    h = del_last(h);
    traverse(h);
    printf("\nSpecific element will be deleted.\n");
    h = del_pos(h);
    traverse(h);
    return 0;
}