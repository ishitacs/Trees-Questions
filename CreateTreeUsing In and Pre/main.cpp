 #include <iostream>

using namespace std;
class node{
public: int data; node* left; node* right;
node(int d)
{data=d;
left=NULL;
}
};
node*build(int*in,int*p,int s,int e)
{ static int i=0;
if(s>e) return NULL;
node*root=new node(p[i]);
int ind=-1;
for(int j=s;s<=e;j++){
    if(in[j]==p[i]) {ind=j; break;}
}
i++;
root->left=build(in,p,s,ind-1);
root->right=build(in,p,ind+1,e);
return root;
}
void print(node*root){

if(root==NULL) return;
print(root->left);
print(root->right);
cout<<root->data<<" ";
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int m;
    cin>>m;
    int b[m];
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    node*root=build(a,b,0,n-1);
    print(root);
    return 0;
}
