/*
Program to create a Linked List
Author: Prajjwal Pathak
Date Modified: 3rd October 2021
*/

#include <stdio.h>
#include <stdlib.h>

//Structure of a node
struct node
{
    int data;
    struct node *next;
};
typedef struct node Node;

//Node creation function
Node *create(Node *start)
{
    int c = 1;
    Node *newNode = NULL, *previous = NULL;
    while (c != 0)
    {
        newNode = (Node *)malloc(sizeof(Node));
        printf("Enter data: ");
        scanf("%d", &newNode->data);
        newNode->next = NULL;
        if (start == NULL)
        {
            start = newNode;
        }
        else
        {
            previous->next = newNode;
        }
        previous = newNode;
        printf("Enter Choice: 1 to continue, 0 to stop");
        scanf("%d", &c);
    }
    return start;
}

//Display Linked List function
void display(Node *start)
{
    while (start != NULL)
    {
        printf("%d", start->data);
        start = start->next;
    }
}

//Main function
int main()
{
    Node *start = NULL;
    start = create(start);   //Function call
    display(start);   //Function call
    
    return 0;
}