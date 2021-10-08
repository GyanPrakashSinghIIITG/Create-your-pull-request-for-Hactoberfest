#include <bits/stdc++.h>
using namespace std;
struct Stack
{
    char ch;
    Stack *next;
};
class Stack_Paranthesis
{
    Stack *top = NULL;
    Stack *ptr;

protected:
    void reset_stack();
    void pop();
    void push(char ch);
    bool isEmpty();

public:
    void processing_Results();
};

void Stack_Paranthesis::reset_stack()
{
    while (top != NULL)
    {
        Stack *ptr = top;
        top=top->next;
        delete ptr;
    }
}

bool Stack_Paranthesis::isEmpty()
{
    if (top == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Stack_Paranthesis::processing_Results()
{
    string Expression;
    int pushCount = 0;
    int Popcount = 0;
    cout << "Enter the Expression: ";
    cin >> Expression;
    for (int i = 0; i < Expression.size(); i++)
    {
        if (Expression[i] == '(')
        {
            push(Expression[i]);
            pushCount++;
        }
        else if (Expression[i] == ')')
        {
            if (isEmpty())
            {
                cout << "The Stack is Empty as the Expression is unbalanced" << endl;
                return;
            }
            else
            {
                pop();
                Popcount++;
            }
        }
    }

    if (Popcount == pushCount)
    {
        cout << "The Stack is Balanced" << endl;
    }
    else if (pushCount > Popcount)
    {
        cout << "The Stack is not Balanced" << endl;
        reset_stack();
    }
}

void Stack_Paranthesis::push(char ch)
{
    Stack *new_node = new Stack;
    new_node->ch = ch;
    if (top == NULL)
    {
        top = new_node;
    }
    else
    {
        new_node->next = top;
        top = new_node;
    }
}

void Stack_Paranthesis::pop()
{

    Stack *new_node = top;
    top = top->next;
    delete new_node;
}

int main()
{
    int choice;
    Stack_Paranthesis operations;
    do
    {
        cout << "1. Result of the Given Expression:" << endl;
        cout << "2. Exit" << endl;
        cout << endl;
        cout << "Enter your Choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            operations.processing_Results();
            break;
        }
        case 2:
        {
            break;
        }

        default:
            break;
        }
    } while (choice != 2);

    return 0;
}