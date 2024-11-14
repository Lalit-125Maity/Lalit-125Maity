#include<stdio.h>
 #define N 100
 int top=-1;
char postfix[N];
 int stack[N];
 int postfixevo()
 {
     int i;
     for(i=0;i<strlen(postfix);i++)
     {
         if(postfix[i]>='0'&&postfix[i]<='9')
       { 
           push(postfix[i]-'0');
           
       }
       else
       int op1=pop();
       int op2=pop();
       switch(postfix[i])
        {
            case '+':
                push(op2+op1);
                break;
            case '-':
                push(op2-op1);
                break;
            case '*':
                push(op2*op1);
                break;
            case '/':
                push(op2/op1);
                break;
        }
        
     }
     return pop();
 }
 int push(int data)
 {
     if(top==N-1)
     {
         printf("Overflow");
         return;
     }
     else
     top++;
     stack[top]=data;
     
 }
 int pop()
 {
     if(top==-1)
     {
         printf("Underflow");
         return -1;
     }
     else
     int result=stack[top];
     top=top-1;
     printf("pop element:%d",result);
}
 int main()
 {
     printf("Enter the postfix Expression:");
    getch(postfix);
     int z=postfixevo();
     printf("Postfix evo:%d",z);
     return 0;
     
     
 }
