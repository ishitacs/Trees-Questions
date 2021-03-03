#include <iostream>

using namespace std;
class node{ public:
int data;
node*left;
node*right;
node(int d)
{
    data=d;
    left=right=NULL;
}
};
node*build(int *a,int s,int e)
{
    if(s>e) return NULL;
    int m=(s+e)/2;
    node*root=new node(a[m]);
    root->left=build(a,s,m-1);
    root->right=build(a,m+1,e);
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
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
            node*root=build(a,0,n-1);
    print(root);
    cout<<endl;
    }

    return 0;
}
