#include<stdio.h>       //stdio.h의 라이브러리를 포함시킨다. 
#define MAX_STACK_SIZE 100   //#define으로 MAX_STACK_SIZE의 값을 100으로 정의한다. 

int stack[MAX_STACK_SIZE];  //int형 stack변수의 값을 위에 정의한 MAX_STACK_SIZE로 정의한다. 
int top = -1;               //int형 top변수의 값을 -1로 정의한다. 
//Because stack is Zero strat  
//Ex)top = 0 , push(1); -> stack[0] = {?} , stack[1] = {1};

int IsEmpty(); //스택을 동작시키기전 스택이 비어있는지 검사하는 함수 

int IsFull();  //스택이 정해진 량에 꽉 찼을때 의미없는 추가를 막기위한 함수 

int push(int value); //int 형 매개변수를 받아 동작한다. 스택에 값을 추가하는 함수 

int pop(); //스택에 값을 가져오는 함수 

int main()
{

    printf("%d\n", push(3));    //push로 스택에 3을 추가시키고 stdio.h라이브러리속 printf함수로 출력
    printf("%d\n", push(5));    //push로 스택에 5을 추가시키고 stdio.h라이브러리속 printf함수로 출력
    printf("%d\n", push(12));    //push로 스택에 12을 추가시키고 stdio.h라이브러리속 printf함수로 출력
    printf("%d\n", pop());      //push로 스택에 3을 삭제시키고 stdio.h라이브러리속 printf함수로 출력
    printf("%d\n", pop());      //push로 스택에 3을 삭제시키고 stdio.h라이브러리속 printf함수로 출력
    printf("%d\n", pop());      //push로 스택에 3을 삭제시키고 stdio.h라이브러리속 printf함수로 출력

    return 0;
}

int IsEmpty()   //스택을 동작시키기전 스택이 비어있는지 검사하는 함수
{
    if (top < 0)    //만약 int형 변수 top의 값이 0보다 작다면 1을 반환한다. 
    {
        return 1;
    }               //int형 변수 top의 값이 0보다 작지않다면 0을 반환한다. 
    else
    {
        return 0;
    }
}

int IsFull()    //스택이 정해진 량에 꽉 찼을때 의미없는 추가를 막기위한 함수
{
    if (top >= MAX_STACK_SIZE - 1)   //만약 top이 MAX_STACK_SIZE크기에 -1을 한 값보다 크거나 같다면 
    {
        return 1;                   //1을 반환한다.
    }                               //top이 MAX_STACK_SIZE크기에 -1을 한 값보다 작다면 
    else
    {
        return 0;                   //0을 반환한다. 
    }
}

int push(int value)    //int 형 매개변수를 받아 동작한다. 스택에 값을 추가하는 함수 
{
    if (IsFull() == 1)              //만약 IsFull함수의 반환값이 1이라면 
    {
        printf("스택이 가득 찼습니다."); //printf함수로 스택이 가득찬것을 알림.
        return;                          //그리고 반환함 
    }
    else                                 //IsFull함수의 반환값이 1이 아니라면 
    {
        return stack[++top] = value;     //stack의 top크기번지에 value 입력받은 int형 매개변수를 넣는다.  
    }
}

int pop()    //스택에 값을 가져오는 함수 
{
    if (IsEmpty() == 1)             //만약 IsEmpty함수의 반환값이 1이라면 
    {
        printf("스택이 비었습니다.");   //printf함수로 스택이 비었다는것을 알림.
        return;                         //그리고 반환함 
    }                               //IsEmpty함수의 반환값이 1이 아니라면.
    else
    {
        return stack[top--];        //stack에 top크기의 위치에 있는 값을 삭제시킴. 
    }
}