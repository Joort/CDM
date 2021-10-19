#include<stdio.h>       //stdio.h�� ���̺귯���� ���Խ�Ų��. 
#define MAX_STACK_SIZE 100   //#define���� MAX_STACK_SIZE�� ���� 100���� �����Ѵ�. 

int stack[MAX_STACK_SIZE];  //int�� stack������ ���� ���� ������ MAX_STACK_SIZE�� �����Ѵ�. 
int top = -1;               //int�� top������ ���� -1�� �����Ѵ�. 
//Because stack is Zero strat  
//Ex)top = 0 , push(1); -> stack[0] = {?} , stack[1] = {1};

int IsEmpty(); //������ ���۽�Ű���� ������ ����ִ��� �˻��ϴ� �Լ� 

int IsFull();  //������ ������ ���� �� á���� �ǹ̾��� �߰��� �������� �Լ� 

int push(int value); //int �� �Ű������� �޾� �����Ѵ�. ���ÿ� ���� �߰��ϴ� �Լ� 

int pop(); //���ÿ� ���� �������� �Լ� 

int main()
{

    printf("%d\n", push(3));    //push�� ���ÿ� 3�� �߰���Ű�� stdio.h���̺귯���� printf�Լ��� ���
    printf("%d\n", push(5));    //push�� ���ÿ� 5�� �߰���Ű�� stdio.h���̺귯���� printf�Լ��� ���
    printf("%d\n", push(12));    //push�� ���ÿ� 12�� �߰���Ű�� stdio.h���̺귯���� printf�Լ��� ���
    printf("%d\n", pop());      //push�� ���ÿ� 3�� ������Ű�� stdio.h���̺귯���� printf�Լ��� ���
    printf("%d\n", pop());      //push�� ���ÿ� 3�� ������Ű�� stdio.h���̺귯���� printf�Լ��� ���
    printf("%d\n", pop());      //push�� ���ÿ� 3�� ������Ű�� stdio.h���̺귯���� printf�Լ��� ���

    return 0;
}

int IsEmpty()   //������ ���۽�Ű���� ������ ����ִ��� �˻��ϴ� �Լ�
{
    if (top < 0)    //���� int�� ���� top�� ���� 0���� �۴ٸ� 1�� ��ȯ�Ѵ�. 
    {
        return 1;
    }               //int�� ���� top�� ���� 0���� �����ʴٸ� 0�� ��ȯ�Ѵ�. 
    else
    {
        return 0;
    }
}

int IsFull()    //������ ������ ���� �� á���� �ǹ̾��� �߰��� �������� �Լ�
{
    if (top >= MAX_STACK_SIZE - 1)   //���� top�� MAX_STACK_SIZEũ�⿡ -1�� �� ������ ũ�ų� ���ٸ� 
    {
        return 1;                   //1�� ��ȯ�Ѵ�.
    }                               //top�� MAX_STACK_SIZEũ�⿡ -1�� �� ������ �۴ٸ� 
    else
    {
        return 0;                   //0�� ��ȯ�Ѵ�. 
    }
}

int push(int value)    //int �� �Ű������� �޾� �����Ѵ�. ���ÿ� ���� �߰��ϴ� �Լ� 
{
    if (IsFull() == 1)              //���� IsFull�Լ��� ��ȯ���� 1�̶�� 
    {
        printf("������ ���� á���ϴ�."); //printf�Լ��� ������ ���������� �˸�.
        return;                          //�׸��� ��ȯ�� 
    }
    else                                 //IsFull�Լ��� ��ȯ���� 1�� �ƴ϶�� 
    {
        return stack[++top] = value;     //stack�� topũ������� value �Է¹��� int�� �Ű������� �ִ´�.  
    }
}

int pop()    //���ÿ� ���� �������� �Լ� 
{
    if (IsEmpty() == 1)             //���� IsEmpty�Լ��� ��ȯ���� 1�̶�� 
    {
        printf("������ ������ϴ�.");   //printf�Լ��� ������ ����ٴ°��� �˸�.
        return;                         //�׸��� ��ȯ�� 
    }                               //IsEmpty�Լ��� ��ȯ���� 1�� �ƴ϶��.
    else
    {
        return stack[top--];        //stack�� topũ���� ��ġ�� �ִ� ���� ������Ŵ. 
    }
}