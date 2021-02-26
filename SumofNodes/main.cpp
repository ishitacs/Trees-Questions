#include <iostream>

using namespace std;
class node{
public: int data; node *left; node*right;

node(int d)
{
    data=d;
    left=NULL;
    right=NULL;
}

};
node*build(){
int d;
cin>>d;
if(d==-1) return NULL;
node*root=new node(d);
root->left=build();
root->right=build();
return root;}

int sum(node*root){
if(root==NULL) return 0;
return sum(root->left)+sum(root->right)+ root->data;
}
int main()
{
    node *root= build();
    cout<<sum(root)<<endl;
    return 0;
}
