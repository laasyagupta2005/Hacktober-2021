#include <stdio.h>
struct node
{
    int info;

    struct node *next;
};

GetNode()   // Used to Create a New Node.
{
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node));
    return temp;
}
void Traverse(struct node **list)   // Print the Linked List
{
    struct node *temp;
    temp = *list;
    if (temp == NULL)
        printf("Empty Linked List");
    else
    {
        printf("Linked List : ");
        while (temp!=NULL)
        {
            printf("%d\t",temp->info);
            temp = temp ->next;
        }

    }

}


void InsBeg(struct node **list,int x)  // Insertion in Beginning.
{
    struct node *temp;
    temp = GetNode();
    temp->info = x;
    temp->next=(*list);
    (*list)=temp;
}

int CountNode(struct node **list)
 {
     int c=0;
     struct node *temp;
     temp = (*list);
     while(temp!=NULL)
     {
        c++;
        temp = temp->next;
     }
     return c;
 }

int main()
{
    int c;
    struct node *START;
    START=NULL;
    int count;
    InsBeg(&START,600);
    InsBeg(&START,500);
    InsBeg(&START,400);
    InsBeg(&START,300);
    InsBeg(&START,200);
    InsBeg(&START,100);
    printf("Original Node\n");
    Traverse(&START);
    c = CountNode(&START);
    printf("\nNo of Nodes : %d",c);
}
