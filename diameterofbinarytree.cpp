#include<iostream>
#include<queue>

using namespace std;

class node{
    public:
        int data;
        node*left;
        node*right;

        node(int d){
            data = d;
            left = NULL;
            right = NULL;
        }
};

node* buildTree(){
    int d;
    cin>>d;

    if(d==-1){
        return NULL;
    }
    node * root = new node(d);
    root->left = buildTree();
    root->right = buildTree();
    return root;
}
void print(node *root){
    if(root==NULL){
        return;
    }
    //Otherwise, print root first followed by subtrees(children)
    cout<<root->data<<" ";
    print(root->left);
    print(root->right);
}
int height(node *root)
{
    if(root==NULL)
    {
        return 0;
    }
    int h1=height(root->left);
    int h2=height(root->right);
    if(h1>h2)
    {
        return h1+1;
    }
    else
    return 1+h2;
}



int diameter(node* root)
{
   if(root==NULL)
   {
       return 0;
   }
   int h1=height(root->left);
   int h2=height(root->right);
   int op1=h1+h2+1;
   int op2=diameter(root->left);
   int op3=diameter(root->right);
  return max(op1,max(op2,op3));
}
int main()
{
    node*f=buildTree();
    cout<<diameter(f);
}
