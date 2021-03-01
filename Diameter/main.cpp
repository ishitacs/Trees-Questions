#include <iostream>

using namespace std;
class node{public: int data; node*left; node*right;
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
class Pair{
    public: int d; int h;
};

Pair diameter(node *root){
Pair p;
if(root==NULL){p.d=0; p.h=0; return p;}
Pair left= diameter(root->left);
Pair right= diameter(root->right);
p.h= max(left.h , right.h)+1;
p.d=max(left.h+right.h, max(left.d,right.d));
return p;

}

int main()
{ node*root= buildTree();
printPre(root);
    cout<< endl;
Pair p= diameter(root);
cout<<p.h<<" "<<p.d<<endl;
    return 0;
}
