struct node* LCAbst(node* root, int n1, int n2)
{
  if(root == NULL)
    return NULL;
  if(root->info==n1 || root->info==n2)
    return root;
  node* leftLCA = LCAbst(root->lptr,n1,n2);
  node* rghtLCA = LCAbst(root->rptr,n1,n2);

  if(leftLCA && rghtLCA)
    return root;
  return ((leftLCA != NULL)? leftLCA : rghtLCA);
}

struct node *lca(struct node* root, int n1, int n2)
{
    if (root == NULL)
      return NULL;
    
    // If both n1 and n2 are smaller than root, then LCA lies in left
    if (root->data > n1 && root->data > n2)
        return lca(root->left, n1, n2);

    // If both n1 and n2 are greater than root, then LCA lies in right
    if (root->data < n1 && root->data < n2)
        return lca(root->right, n1, n2);

    return root;
}
