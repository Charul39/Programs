node*ReverseLL(node* root)
{
  if(root==NULL || root->next==NULL)
    return root;
  node* next,*prev=NULL;
  while(root)
  {
    nxt = root->next;
    root->next = prev;
    prev = root;
    root = nxt;
  }
  return prev;
}
