#include<iostream.h>
#include<conio.h>
#include<string.h>

void main() {
    clrscr();
    char exp[50], stack[50];
    int top = -1, balanced = 1;

    cout << "Enter expression: ";
    cin >> exp;

    for (int i = 0; i < strlen(exp); i++) {
        // 1. If opening bracket, push to stack
        if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[') {
            stack[++top] = exp[i];
        } 
        // 2. If closing bracket, check for a match
        else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']') {
            if (top == -1) { 
                balanced = 0; // Closing bracket with no opening
                break; 
            }
            char open = stack[top--];
            if ((exp[i] == ')' && open != '(') ||
                (exp[i] == '}' && open != '{') ||
                (exp[i] == ']' && open != '[')) {
                balanced = 0; // Mismatch
                break;
            }
        }
    }

    // 3. Final check: stack must be empty and no errors found
    if (balanced && top == -1) 
        cout << "Balanced";
    else 
        cout << "Not Balanced";

    getch();
}
