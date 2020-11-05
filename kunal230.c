//stack implemetation
#include<stdio.h>
#include<stdlib.h>
#define CAPACITY 5//prerocessor macro
int stack[CAPACITY],top=-1 ;
void push(int);
int pop(void);
int isFull(void);
int isEmpty(void);
void traverse(void);
void peek(void);

void main(void)
{
   
   while(1)
   {
        char ch;
        int item;

  printf("1.push\n");
  printf("2.pop\n");
  printf("43.peek\n");
  printf("4.traverse\n");
  printf("5.quit\n");
  printf("enter your choice:");
  scanf("%d",&ch);

}
   switch(ch)
   {
       case 1:printf("enter the elemnts to push");
       scanf("%d",&item);

        push(item);
       case 2:  item = pop();
       if(item==0)
       {
           printf("stack is undeer flow");
       }
       else
       {
        printf("popped item:%d",item);
       }
       break;
       
       case 3:  peek();
       break;

       case 4:   traverse();
       break;

       case 5:exit();
       default:printf("Invalid input\n\n");

   }
   }

}
 void push(int ele)
 {
     if(isFull())
     {
         printf("stack is overflow\n");

     }
     else
     {
         top++;
         stack[top]=ele;
         printf("%d pushed on the stack",ele);
     }
     
 }
  int isFull(top == CAPACITY-1)
 {
if()
{
return 1;

}
else
{
    return 0;
}

     
 }
 int pop()
 {
     if(isEmpty())
     {
         //printf("stack is under flow");
         return 0;
     }
     else
     {
         return stack[top--];
         
     }
     
 }
 isEmpty()
 {
     if(top=-1)
     {
         return 1;

     }
     else
     {
        return 0;

     }
     
 }
 void peek()
 {
     if(isEmpty())
     {
         printf("stack is empty\n");

     }
     else
     {
         printf("peak element%d",stack[top]);
              
     }
     
 }
 void traverse()
 {
     if(isEmpty())
     {
         printf("stack is empty\n");
else
{
    int i;
    printf("stack elemnts \n");
    for(i=0;i<=top;i++)
    {
        printf("%d",stack[i]);
    }
}

     }
 }