#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int count = 0;
struct node
{
    int data;
    struct node *next;
} *head,*newn,*trav;
void create_list()
{
    int value;
    struct node *temp;
    temp=head;
    newn=(struct node*)malloc(sizeof(struct node));
    printf("\n enter the value to be inserted");
    scanf("%d",&value);
    newn ->data = value;
    if(head == NULL)
    {
        head = newn;
        head->next = NULL;
        count++;
    }
    else{
        while(temp ->next!=NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
        newn->next=NULL;
        count++;
    }
}


void insert_at_beginning(int value)
{
    newn = (struct node*)malloc(sizeof(struct node));
    newn ->data = value;
    if(head == NULL)
    {
        head =  newn;
        head->next = NULL;
        count ++;
    }
    else
    {
        newn -> next = head;
        head = newn;
        count++;
    }
}
void insert_at_end(int value)
{
    struct node *temp;
    temp = head;
    newn = (struct node*)malloc(sizeof(struct node));
    newn ->data=value;
    if(head ==NULL)
    {
        head = newn;
        head ->next = NULL;
        count ++;
    }
    else{
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp ->next = newn;
        newn -> next = NULL;
        count ++;
    }
}
int insert_at_middle()
{
    if(count>=2)
    {
        struct node *varl,*temp;
        int loc,value;
        printf("\nafter which value you want to insert: ");
        scanf("%d",&loc);
        printf("\n Enter the value to be inserted");
        scanf("%d",&value);
        newn = (struct node*)malloc(sizeof(struct node));
        newn -> data = value;
        temp =head;
        while (temp ->data!=loc)
        {
            temp = temp->next;
            if(temp==NULL)
            {
                printf("\n SORRY....there is no %d element",loc);
                return 0;
            }
        }
        newn ->next = temp->next;
        temp->next = newn;
        count++;
    }
    else
    {
        printf("\n the np of nodes must be >=2 ");
    }
}
int delete_from_middle()
{
    if(count==0)
    printf("\n List is Empty!!! you can't deleteelement \n");
    else if(count >2)
    {
        struct node *temp,*var;
        int value;
        temp = head;
        printf("\n Enter the data that you want to delete from the list shown above");
        scanf("%d",&value);
        while(temp->data!=value)
        {
            var = temp;
            temp = temp->next;
            if(temp ==NULL)
            {
                printf("\n SORRY....there is no %d element",value);
                return 0;
            }
        }
        if(temp == head)
        {
            head = temp->next;
        }
        else
        {
            var->next = temp->next;
            temp->next=NULL;
        }
        count--;
        if (temp == NULL)
        printf("Element is not avaolable in the list \n**enter only middle element..**");
        else
        
            printf("\n data deleted from list is %d ",value);
            free(temp);
        
        }
        else
        {
            printf("\n there no middle element...only %d elements is available \n",count);
        }
    }
// yaha ek } tha
int delete_from_front()
{
    struct node *temp;
    temp = head;
    if (head ==NULL)
    {
        printf("\n deleted element is : %d",head->data);
        if(temp->next == NULL)
        {
            head =NULL;
        }
        else{
            head = temp ->next;
            temp->next= NULL;
        }
        count --;
        free(temp);

    }
}
int delete_from_end()
{
    struct node *temp,*var;
    temp = head;
    if(head == NULL)
    {
        printf("\n no elements in the list");
        return 0;
    }
    else{
        if (temp -> next== NULL)
        {
            head = NULL;
        }
        else
        {
            while (temp->next!=NULL)
            {
                var = temp;
                temp = temp -> next;
            }
            var = temp;
            temp = temp->next;
        }
        var -> next  = NULL;
    }
    printf("\n data deleted from list is %d",temp -> data);
    free (temp);
    count --;
return 0;
}

int display()
{
    trav = head;
    if(trav==NULL)
    {
        printf("\n list is empty \n");
        return 0;
    }
    else
    {
        printf("\n \n elents in the single linked list is %d: \n",count);
        while(trav!=NULL)
        {
            printf("->%d",trav->data);
            trav = trav->next;
        }
        printf("\n");
    }

}
int main()
{
    int ch=0;
    char ch1;
    head = NULL;
    while(1)
    {
        printf("\n1.create linked list");
        printf("\n2.insertion at beginning of linked list");
        printf("\n3.insertion at the end of linked list");
        printf("\n4.insertion at the middle where you want");
        printf("\n5.deletion from the front of linked list");
        printf("\n6.deletion from the end of linked list");
        printf("\n7.deletion of the middle data that you want");
        printf("\n8.display the linked list");
        printf("\n9.exit\n");
        printf("\n enter the choice of operation to perform an linked list");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            {
                do{
                    create_list();
                    display();
                    printf("do you want to create list ,y\n");
                    getch ();
                    scanf("%c",&ch1);

                }
                while(ch1=='y');
                break;
            }
            case 2:
            {
                int value;
                printf("\n enter the value to be inserted: ");
                scanf("%d",&value);
                insert_at_beginning(value);
                display();
                break;
            }
            case 3:
            {
                int value;
                printf("\n enter the value to be inserted: ");
                scanf("%d",&value);
                insert_at_end(value);
                display();
                break;
            }
            case 4:
            {
            insert_at_middle();
            display();
            break;
            }
            case 5:
            {
                delete_from_front();
                display();
                break;
            }
            case 6:
            {
                delete_from_end();
                display();
                break;
            }
            case 7:
            {
                display();
                delete_from_middle();
                display();
                break;
            }
            case 8:
            {
                display();
                break;
            }
            case 9:
            {
                exit(1);
            }
            default: printf("\n***Please enter correct choice***\n");
        }
    }
    getch();
}