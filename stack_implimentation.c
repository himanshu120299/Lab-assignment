#include<stdio.h>
#include<stdlib.h>
#define size 5      //defining the size as 5
int top=-1;         
int arr[size];

void push()         //function for push operation
{
    int x;
    if(top==size-1)
    {
        printf("overflow");
    }
    else
    {
            printf("Enter the element to be pushed::");
            scanf("%d",&x);
            top++;
            arr[top]=x;
    }
}
void pop()          //function for pop operation

{
    if(top==-1)
    {
        printf("Underflow");
    }
    else
    printf("removed element is %d",arr[top]);
    top--;
}
void display() {     //displays the elements of the stack 

    int i;
    if(top!=-1){
    for(i=top;i>=0;i--)
    {
        printf(" \n%d\t",arr[i]);
    }
    printf("\n");
}
    else
    printf("Stack is empty");
}
int main()      
{
    int ch;
    while(1){
    printf("\n1.push,2.pop,3.display,4.exit::");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1: push();
                  break;
        case 2: pop();
                  break;
        case 3: display();
                  break;
        case 4: exit(0);
                  break;
        default: printf("INVALID\n");
            break;  
    }
}
}
