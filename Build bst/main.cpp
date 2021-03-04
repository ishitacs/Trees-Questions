#include <iostream>

using namespace std;
class node{
public: int data;
node*left;
node*right;
node(int d)
{
    data=d;
    left=right=NULL;
}
};
node *insertbst(node*root,int d){
if(root==NULL) return new node(d);
if(d<=root->data) {root->left=insertbst(root->left,d);}
else root->right=insertbst(root->right,d);
return root;
}
node* build(){
int d;
cin>>d;
node*root=NULL;
while(d!=-1)
    {
        root=insertbst(root,d);
        cin>>d;
}
return root;

}

void print(node*root)
{
    if(root==NULL) return;
    cout<<root->data<<" ";
    print(root->left);
    print(root->right);
}
int main()
{
    node*root=build();
    print(root);
    return 0;
}
