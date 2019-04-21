#include <iostream>
using namespace std;

struct node
{
  int info;
  node* lptr;
  node* rptr;
}*start = NULL;

struct node* create_node(int value)
{
  struct node* temp;
  temp =new node;
  temp->info = value;
  temp->lptr = NULL;
  temp->rptr = NULL;
  return temp;
}

void insert()
{
    int value, pos, counter = 0,i;
    cout<<"Enter the value to be inserted: ";
    cin>>value;
    struct node *temp,*ptr,*s;
    temp = create_node(value);
    cout<<"Enter the position: ";
    cin>>pos;
    if (pos == 1) //At beginning
    {
        if (start == NULL)//Empty list
        {
            start = temp;
        }
        else
        {
            ptr = start;
            start = temp;
            start->lptr = ptr;
            ptr->rptr = start;
            start->rptr = NULL;
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
        ptr->lptr = temp;
        temp->lptr = s;
        s->rptr = temp;
        temp->rptr = ptr;
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
    {
      start = s->lptr;
      start->rptr = NULL;
    }
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
