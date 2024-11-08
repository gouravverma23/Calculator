#include<stdio.h>
void addition2(int a,int b){
    
    printf("The sum is equal to = %d\n",a+b);
    return;
}
void addition(int a){
    int b;
    char x='+';
    while(x=='+'){
        printf("Enter the next number :- ");
    scanf("%d",&b);
        addition2(a,b);
         a=a+b;
    printf("Enter + if you want to add further or just space and enter if you want to close :- ");
    scanf(" %c",&x);
    }
    return;
}
void subtraction2(int a,int b){
    
    printf("The sum is equal to = %d\n",a-b);
    return;
}
void subtraction(int a){
    int b;
    char x='-';
    while(x=='-'){
        printf("Enter the next number :- ");
    scanf("%d",&b);
        subtraction2(a,b);
         a=a-b;
    printf("Enter - if you want to subtract further or just space and enter if you want to close :- ");
    scanf(" %c",&x);
    }
    return;
}
void multiplication2(int a,int b){
    
    printf("The sum is equal to = %d\n",a*b);
    return;
}
void multiplication(int a){
    int b;
    char x='*';
    while(x=='*'){
        printf("Enter the next number :- ");
    scanf("%d",&b);
        multiplication2(a,b);
         a=a*b;
    printf("Enter * if you want to multiply further or just space and enter if you want to close :- ");
    scanf(" %c",&x);
    }
    return;
}
void division2(int a,int b){
    
    printf("The sum is equal to = %d\n",a/b);
    return;
}
void division(int a){
    int b;
    char x='/';
    while(x=='/'){
        printf("Enter the next number :- ");
    scanf("%d",&b);
        division2(a,b);
         a=a/b;
    printf("Enter / if you want to divide further or just space and enter if you want to close :- ");
    scanf(" %c",&x);
    }
    return;
}
int main(){
    int a; char x;
    printf("Enter the first number :- ");
    scanf("%d",&a);
    printf("Enter + for addition, - for subtraction, * for multiplication, / for division :- ");
    scanf(" %c",&x);
    if(x=='+'){
        addition(a);
    }
    if(x=='-'){
        subtraction(a);
    }
    if(x=='*'){
        multiplication(a);
    }
    if(x=='/'){
        division(a);
    }
    return 0;
}