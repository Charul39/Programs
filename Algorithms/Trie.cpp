#include<bits/stdc++.h>
using namespace std;

struct trie
{
  struct trie* alpha[26];
  bool End;
};

struct trie* getNode(void)
{
  struct trie* temp;
  temp = new trie;
  for(int i=0;i<26;i++)
    temp->alpha[i] = NULL;
  temp->End = false;
  return temp;
}

void insert(struct trie* root, string key)
{
  struct trie* temp;
  temp = root;
  for(int i=0;i<key.length();i++)
  {
    int index = key[i] - 'a';
    if(!temp->alpha[index])
      temp->alpha[index] = getNode();
    temp = temp->alpha[index];
  }
  temp->End = true;
  return;
}

bool search(struct trie* root, string key)
{
  struct trie* temp;
  temp = root;
  for(int i=0;i<key.length();i++)
  {
    int index = key[i] - 'a';
    if(!temp->alpha[index])
      return false;
    temp = temp->alpha[index];
  }
  return (temp!=NULL && temp->End);
}

bool freenode(struct trie* node)
{
  for(int i=0;i<26;i++)
  {
    if(node->alpha[i]!=NULL)
      return false;
  }
  return true;
}

bool del(struct trie* root, string s, int len, int level)
{
  if(level==len)
  {
    if(root->End)
    {
      root->End = 0;
      if(freenode(root))
        return true;
      return false;
    }
  }
  else
  {
    int ind = s[level]-'a';
    if(del(root->alpha[ind],s,len,level+1))
    {
      delete root->alpha[ind];
      return(!root->End && freenode(root));
    }
  }
  return false;
}

bool delet(struct trie* root, string s)
{
  int len = s.length();
  if(!search(root,s))
    return 0;
  if(len>0)
    del(root,s,len,0);
}

int main()
{
  std::vector<string> v;
  struct trie* root = getNode();
  int n,i;
  cin >> n;
  std::string s;
  for(i=0;i<n;i++)
  {
    cin >> s;
    v.push_back(s);
    insert(root,s);
  }
  cout << "Enter Keys to search : " << endl;
  for(i=0;i<3;i++)
  {
    cin >> s;
    if(search(root,s))
      cout << "Found" << endl;
    else
      cout << "Not Found" << endl;
  }
  cout << "Enter Key to Delete : " << endl;
  cin >> s;
  delet(root,s);
  cout << "Enter Keys to search : " << endl;
  for(i=0;i<3;i++)
  {
    cin >> s;
    if(search(root,s))
      cout << "Found" << endl;
    else
      cout << "Not Found" << endl;
  }
  return 0;
}
