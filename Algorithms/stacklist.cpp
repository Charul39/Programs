#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
struct node
{
    int info;
    struct node *next;
}*top;
class stack_list
{
    public:
        node* create_node(int);
        void push();
        void pop();
        void display();
        stack_list()
        {
            top = NULL;
        }
};
node *stack_list::create_node(int value)
{
    struct node *temp, *s;
    temp = new(struct node);
    temp->info = value;
    temp->next = NULL;
    return temp;
}
void stack_list::push()
{
    int value;
    cout<<"Enter the value to be inserted: ";
    cin>>value;
    struct node *temp;
    temp = create_node(value);
    if(top==NULL)
       {
         top = temp;
         top -> next = NULL;
       }
    else
       {
         temp -> next = top;
         top = temp;
       }
}
void stack_list::pop()
{
    int i, counter = 0;
    if (top == NULL)
    {
        cout<<"List is empty"<<endl;
        return;
    }
    struct node *temp;
    temp = top;
    top = top -> next;
    free(temp);
    cout<<"Element Deleted"<<endl;
}
void stack_list::display()
{
    struct node *temp;
    temp = top;
    cout<<"Elements of list are: "<<endl;
    while (temp != NULL)
    {
        cout << temp -> info << "->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

main()
{
    int choice;
    stack_list sl;
    top = NULL;
    while (1)
    {
        cout << "1.PUSH" << endl << "2.POP"<< endl <<"3.DISPLAY"<< endl << "0.EXIT "<<endl;
        cout << "Enter your choice : ";
        cin>>choice;
        switch(choice)
        {
        case 1: sl.push();
                cout<<endl;
                break;
        case 2: sl.pop();
                break;
        case 3: sl.display();
                cout<<endl;
                break;
        case 0: cout<<"Exiting..."<<endl;
                exit(1);
                break;
        default:cout<<"Wrong choice"<<endl;
        }
    }
}
