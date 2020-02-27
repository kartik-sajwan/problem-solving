#include<iostream>

#define MAX 10

using namespace std;


int x[MAX], y[MAX], z[MAX];

int top_x = -1, top_y = -1, top_z = -1;

struct stack    {
    int [MAX];
}
void push(int & stack, int elmnt, int top)  {
    if(top == MAX-1)   {
        cout << "Overflow";
    }
    else
    {
        top = top + 1;
        stack[top] = elmnt;
    }
}

int pop(int & stack, int top)  {
    if(top == -1)   {
        cout << "Underflow";
        return (-1);
    }
    else
    {
        int temp = stack[top];
        top = top - 1;
    }
}

void toh(int n, int & x, int y, int z)   {
    if(n)   {
        toh(n-1, x, z, y);
        int temp = pop(x, top_x);
        push(y, temp, top_y);

    }
}


struct node {
    int i;
    struct node * link;
};

void push(int item) {
    struct node *p =  node;
}

int main()  {

    int n;
    cin>>n;
    for(i=0; i<n; i++)  {
        cin >> x[i];
    }
    
    toh(n, x, y, z);
    return 0;
}