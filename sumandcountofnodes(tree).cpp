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

void bfs(node *root)
{
    queue<node *>q;
    q.push(root);
    while(!q.empty())
    {
        node* f=q.front();
        cout<<f->data;
        q.pop();
    if(f->left)
       {
           q.push(f->left);
       }
      else if(f->right)
            {
                q.push(f->right);
            }
    }
}
int count(node*root)
{
 if(root==NULL)
 {
     return 0;
 }
 return 1+count(root->left)+count(root->right);
}
int sum(node*root)
{
    if(root==NULL)
    {
        return 0;
    }
    return root->data+sum(root->left)+sum(root->right);
}
int main()
{
    node*root=buildTree();
    cout<<count(root)<<endl;
    cout<<sum(root)<<endl;
}

