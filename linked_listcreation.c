#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
//node structure
struct node
{
    int data;
    struct node *next;
};
int main()
{
    //declaring nodes
    struct node *head,*middle,*last;
    
    //allocating memory
    head=(struct node*)malloc(sizeof(struct node));
    middle=(struct node*)malloc(sizeof(struct node));
    last=(struct node*)malloc(sizeof(struct node));
        //link head and middle nodes
        head->data=20;
        head->next=middle;
                //link middle and last nodes
        middle->data=60;
        middle->next=last;
        //terminate then list
        last->data=30;
        last->next=NULL;
        
        //temp is a reference for head pointer
        struct node *temp=head;
        //till node becomes null,printing each node
        while(temp!=NULL)
        {
            printf("%d->",temp->data);
temp=temp->next;
        }
        printf("null");
    return(0);
}

/*
****-----output----****
20->60->30->null  
*/