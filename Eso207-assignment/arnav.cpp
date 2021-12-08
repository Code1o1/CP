#include <bits/stdc++.h>
using namespace std;

typedef struct twothreeNode{//y,z are the keys, left,right and middle are pointers to children
    long long y,z;
    twothreeNode * left;
    twothreeNode * middle;
    twothreeNode * right;
}node;

typedef struct returnfrominsert{
    node * n1 = NULL;
    node * n2 = NULL;
    long long m = 0;
}ret_type;

node* MakeSingleton(long long data){//makes a single 'node' containing the given value
    node* newnode = (node*)malloc(sizeof(node));
    newnode->y=data;
    newnode->z=0;
    newnode->left=NULL;
    newnode->middle=NULL;
    newnode->right=NULL;
    return newnode;
}

int getHeight(node * T){//height of 2 3 tree rooted at T
    int height=0;
    node* ptr=T;
    while(ptr->left!=NULL){
        height++;
        ptr = ptr->left;
    }
    return height;
}

long long getLowest(node *T){
    node * ptr = T;
    while(ptr->left!=NULL){
        ptr=ptr->left;
    }
    return ptr->y;
}

// U is tree with higher values
node* Merge(node* T,node* U){//only for singleton right now (U is singleton)
    if(T->left==NULL){
        if(T->y==U->y){
            return T;
        }
        else if(U->y<T->y){
            node* newRoot = MakeSingleton(T->y);
            newRoot->left=U;
            newRoot->middle=T;
            newRoot->right=NULL;
            newRoot->z=0;
            return newRoot;
        }
        else{
            node* newRoot = MakeSingleton(U->y);
            newRoot->left=T;
            newRoot->middle=U;
            newRoot->right=NULL;
            newRoot->z=0;
            return newRoot;
        }
    }
    ret_type * args;
    args = Insert(T,U);
    if(args->n2==NULL)
        return args->n1;
    else{
        node* newRoot = MakeSingleton(args->m);
        newRoot->left=args->n1;
        newRoot->middle=args->n2;
        newRoot->right=NULL;
        newRoot->z=0;
        return newRoot;
    }

}

ret_type * Insert(node * T, node * U){
    ret_type *args;
    if(T->left==NULL){
        if(T->y==U->y){
            args->n1 = T;
        }
        else if(U->y<T->y){
            args->n1 = U;
            args->n2 = T;
            args->m = T->y;
        }
        else{
            args->n1 = T;
            args->n2 = U;
            args->m = U->y;            
        }
    }
    else if(T->right==NULL){//twonode
        if(U->y<T->y){
            ret_type * tpargs;
            tpargs = Insert(T->left,U);
            if(tpargs->n2==NULL){
                args->n2=NULL;
                args->n1 = //twonode(a,n,beta);
            }
            else{
                args->n2=NULL;
                args->n1 = //threenode(m,a,n1,n2,beta);
            }
        }
        else{

        }
    }
    else{//threenode

    }
}

void Extract(node* T){
    queue<node*> q;
    q.push(T);
    while(!q.empty()){
        node* ptr = q.front();
        q.pop();
        if(ptr->left!=NULL)q.push(ptr->left);
        if(ptr->middle!=NULL)q.push(ptr->middle);
        if(ptr->right!=NULL)q.push(ptr->right);
        if(ptr->left==NULL)cout << ptr->y <<" ";//prints data if it is a leaf node.
    }
  cout << endl;
}

void Test(){
    node* T = MakeSingleton(1);
    for(int i=2;i<=500;i++){
        T= Merge(T,MakeSingleton(i));
    }
    node* U = MakeSingleton(777);
    for(int i=778;i<=1000;i++){
        U= Merge(U,MakeSingleton(i));
    }
    node* V=Merge(U,T);
    Extract(V);
}

int main(){
    Test();
    return 0;
}