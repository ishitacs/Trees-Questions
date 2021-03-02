#include <iostream>

using namespace std;
class node{
public: int data; node* left; node *right;

node(int d){
data=d;
left=NULL;
right=NULL;
}
};
node *build(){
int d;
cin>>d;
if(d==-1) return NULL;
node* root=new node(d);
root->left=build();
root->right=build();
return root;
}
void printright(node *root,int level,int &maxlevel){
if(root==NULL) return ;
if(maxlevel<level){cout<<root->data<<" "; maxlevel=level;}
printright(root->right, level+1,maxlevel);
printright(root->left,level+1,maxlevel);
}
int main()
{
    node *root=build();
    int maxlevel=-1;
    printright(root,0,maxlevel);
    return 0;
}
