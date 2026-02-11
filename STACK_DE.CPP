#include<iostream.h>
#include<conio.h>

class stack {
    int a[10], top, n;
public:
    stack()
    {
      top = -1;
    }
    void push();
    void pop();
    void peep();
    void display();
};

void stack::push()
   {
    if(top == 9)
    {
	cout << "Stack is full\n";
    }
    else
     {
	cout << "Enter element to push: ";
	cin >> n;
	top++;
	a[top] = n;
    }
}

void stack::pop() {
    if(top == -1)
    {
	cout << "Stack is Empty\n";
    }
    else
    {
	cout << "Popped element: " << a[top] << endl;
	top--;
    }
}

void stack::peep()
{
 if(top == -1)
    {
	cout << "Stack is empty\n";
    }
    else
    {
	cout << "Top element: " << a[top] << endl;
    }
}

void stack::display()
{
  if(top == -1)
   {
	cout << "Stack is empty\n";
   }
   else
   {
    cout << "Stack Elements:\n";
    for (int i = top; i >= 0; i--)
     {
       cout << a[i] << "\n";
     }
    }
}

void main()
 {
    clrscr();
    stack s;
    int ch = 1;
    while(ch != 0)
    {
	cout << "\n1.push\n2.pop\n3.peep\n4.display\n0.exit\nChoice: ";
	cin >> ch;

	switch(ch)
	 {
	    case 1: s.push(); break;
	    case 2: s.pop(); break;
	    case 3: s.peep(); break;
	    case 4: s.display(); break;
	    case 0: cout << "Exiting..."; break;
	    default: cout << "Invalid Choice\n";
	}
    }
    getch();
}
