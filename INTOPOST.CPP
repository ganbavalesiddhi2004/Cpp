#include <iostream.h>
#include <conio.h>
#include <ctype.h>

char stack[20];
int top = -1;

void push(char x) {
    stack[++top] = x;
}

char pop() {
    if (top == -1) return -1;
    return stack[top--];
}

int priority(char x) {
    if (x == '(') return 0;
    if (x == '+' || x == '-') return 1;
    if (x == '*' || x == '/') return 2;
    return 0;
}

void main() {
    char exp[20];
    char x;
    int i = 0;
    clrscr();

    cout << "Enter expression: ";
    cin >> exp;

    while (exp[i] != '\0') {
        // 1. If it's a letter or number, print it
        if (isalnum(exp[i])) {
            cout << exp[i];
        } 
        // 2. If it's '(', push it to stack
        else if (exp[i] == '(') {
            push(exp[i]);
        } 
        // 3. If it's ')', pop everything until '('
        else if (exp[i] == ')') {
            while ((x = pop()) != '(')
                cout << x;
        } 
        // 4. If it's an operator, check priority
        else {
            while (top != -1 && priority(stack[top]) >= priority(exp[i]))
                cout << pop();
            push(exp[i]);
        }
        i++;
    }

    // Pop anything left in the stack
    while (top != -1) {
        cout << pop();
    }

    getch();
}
