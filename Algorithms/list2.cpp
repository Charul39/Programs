#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
struct node
{
    int info;
    struct node *next;
}*start;

class linked_list
{
    public:
        node* create_node(int);
        void insert();
        void delet();
        void display();
        linked_list()
        {
            start = NULL;
        }
};
node *linked_list::create_node(int value)
{
    struct node *temp;
    temp = new(struct node);
    temp->info = value;
    temp->next = NULL;
    return temp;
}
void linked_list::insert()
{
    int value, pos, counter = 0,i;
    cout<<"Enter the value to be inserted: ";
    cin>>value;
    struct node *temp, *s, *ptr;
    temp = create_node(value);
    cout<<"Enter the position: ";
    cin>>pos;
    s = start;
    while (s != NULL)
    {
        s = s->next;
        counter++;
    }
    if (pos == 1) //At beginning
    {
        if (start == NULL)//Empty list
        {
            start = temp;
            start->next = NULL;
        }
        else
        {
            ptr = start;
            start = temp;
            start->next = ptr;
        }
    }
    else if(pos > 1  && pos <= counter) // Between or last
    {
        s = start;
        for (i = 1; i < pos; i++)
        {
            ptr = s;
            s = s->next;
        }
        ptr->next = temp;
        temp->next = s;
    }
}
void linked_list::delet()
{
    int pos, i, counter = 0;
    if (start == NULL)
    {
        cout<<"List is empty"<<endl;
        return;
    }
    cout<<"Enter the position of value to be deleted: ";
    cin>>pos;
    struct node *s, *ptr;
    s = start;
    if (pos == 1)
       start = s->next;
    else
    {
        while (s != NULL)
        {
            s = s->next;
            counter++;
        }
        if (pos > 0 && pos <= counter)
        {
            s = start;
            for (i = 1;i < pos;i++)
            {
                ptr = s;
                s = s->next;
            }
            ptr->next = s->next;
        }
        cout<<"Element Deleted"<<endl;
    }
}
void linked_list::display()
{
    struct node *temp;
    temp = start;
    cout<<"Elements of list are: "<<endl;
    while (temp != NULL)
    {
        cout<<temp->info<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

main()
{
    int choice;
    linked_list sl;
    start = NULL;
    while (1)
    {
        cout << "1.Insert" << endl << "2.Delete"<< endl <<"3.Display"<< endl << "0.Exit "<<endl;
        cout << "Enter your choice : ";
        cin>>choice;
        switch(choice)
        {
        case 1: sl.insert();
                cout<<endl;
                break;
        case 2: sl.delet();
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
