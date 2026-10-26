int arr[5];
int top = -1;

void push(int value)
{
    if (top == SIZE - 1)
    {
        cout << "Stack Overflow" << endl;
        return;
    }

    top++;
    arr[top] = value;
}

void pop()
{
    if (top == -1)
    {
        cout << "Stack Underflow" << endl;
        return;
    }

    top--;
}