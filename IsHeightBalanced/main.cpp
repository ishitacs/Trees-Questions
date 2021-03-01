#include <bits/stdc++.h>

using namespace std;
class node{
    public:
int data;
node *left; node *right;
node(int d){data=d; left=NULL; right=NULL;}
};
node *buildTree(){
int d;
cin>>d;
if(d==-1) return NULL;

node*root=new node(d);
root->left=buildTree();
root->right=buildTree();
return root;
}
void printPre(node*root){
if(root==NULL) return;
cout<<root->data<<" ";
printPre(root->left);
printPre(root->right);
}
class Pair{public: int ht; bool b;};
Pair isBalanced(node* root){
Pair p;
if(root==NULL){p.ht=0; p.b=true; return p;}
Pair left= isBalanced(root->left);
Pair right = isBalanced(root->right);
p.ht=max(left.ht,right.ht)+1;
if(abs(left.ht-right.ht)<=1 && left.b && right.b) {p.b=true;}
else p.b=false;
return p;
}
int main()
{
    node *root=buildTree();
    printPre(root);
    cout<<endl;
    if(isBalanced(root).b) cout<<"Balanced"<<endl;
    else cout<<"Not Balanced"<<endl;
    return 0;
}
