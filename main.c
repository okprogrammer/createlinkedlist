#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};
struct Node* head;
void insert(int x)
{
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = head;
    head = temp;
}

void print()
{
    struct Node*temp=head;
    printf("print the list!\n");
    while(temp!=NULL){
        printf("%d\n",temp->data);
    temp=temp->next;
    }
}




int main()
{
    head = NULL;
    int n,x,i;
    printf("enter the number of element");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter the number\n");
        scanf("%d",&x);
        insert(x);
    }
    print();

    return 0;
}
