#include<iostream>
using namespace std;
class node{
public:
    int data;
    node *left;
    node *right;
    node(int d)
    {
        data=d;
        left=NULL;
        right=NULL;
    }

};
node *buildtree()
{
    int d;
    cin>>d;
    if(d==-1)
    {
        return NULL;
    }
    node*root=new node(d);
    root->left=buildtree();
    root->right=buildtree();
}
void in(node*root)
{
    cout<<root->data<<endl;
    in(root->left);
    in(root->right);
}
void sum(node *root)
{
    if(root==NULL)
    {
        return 0;
    }
    if(root->left==NULL || root->right==NULL)
    {
        return root->data;
    }
    int leftsum=sum(root->left);
    int rightsum=sum(root->right);
    int temp=root->data;
    root->data=leftsum+rightsum;
    return temp+ root->data;
}
int main()
{
    node*f=buildtree();
    sum(f);
    in(f);


}
