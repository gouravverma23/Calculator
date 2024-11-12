#include<stdio.h>
#include<math.h>
char addition(int*a){
    int b; char x='+';
    while(x=='+'){
        printf("Enter the next number :- ");
        scanf("%d",&b);
        printf("%d\n",*a+b);
         *a=*a+b;
    printf("Enter further operation (+,-,*,/,!) :- ");
    scanf(" %c",&x);
    }
    return x;
}

char subtraction(int*a){
    int b; char x='-';
    while(x=='-'){
        printf("Enter the next number :- ");
        scanf("%d",&b);
        printf("%d\n",*a-b);
         *a=*a-b;
    printf("Enter further operation (+,-,*,/,!) :- ");
    scanf(" %c",&x);
    }
    return x;
}

char multiplication(int*a){
    int b; char x='*';
    while(x=='*'){
        printf("Enter the next number :- ");
        scanf("%d",&b);
        printf("%d\n",*a*b);
         *a=*a*b;
    printf("Enter further operation (+,-,*,/,!) :- ");
    scanf(" %c",&x);
    }
    return x;
}

char division(int*a){
    int b; char x='/';
    while(x=='/'){
        printf("Enter the next number :- ");
        scanf("%d",&b);
        printf("%d\n",*a/b);
         *a=*a/b;
    printf("Enter further operation (+,-,*,/,!) :- ");
    scanf(" %c",&x);
    }
    return x;
}

char factorial(int*a){
    char x='!';
    while(x=='!'){
        int fact=1;
        for(int i=1;i<=*a;i++){
            fact=fact*i;
        }
        printf("%d\n",fact);
        *a=fact;
    printf("Enter further operation (+,-,*,/,!) :- ");
    scanf(" %c",&x);
    }
    return x;
}

char power1(int* a){
    char x='^'; int b;
    while(x=='^'){
        printf("Raised to the power :- ");
        scanf("%d",&b);
        int power = pow(*a,b);
        printf("the answer is : %d\n",power);
        *a=power;
        printf("Enter further operation (+,-,*,/,!) :- ");
        scanf(" %c",&x);
    }
}

int main(){
    int a; char x;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("What do you want to do +,-,*,/,!(for factorial),^(for power) : ");
    scanf(" %c",&x);
    while(x=='+' || x=='-' || x=='*' || x=='/' || x=='!' || x=='^'){
        if(x=='+') x=addition(&a);
        if(x=='-') x=subtraction(&a);
        if(x=='*') x=multiplication(&a);
        if(x=='/') x=division(&a);
        if(x=='!') x=factorial(&a);
        if(x=='^') x=power1(&a);
    }
    return 0;
}