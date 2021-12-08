#include<iostream>
using namespace std;
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};
struct Node* createNode(int x){
    struct Node * n = NULL;
    n = (struct Node*)malloc(sizeof(struct Node));
    n -> data = x;
    n -> left = NULL;
    n -> right = NULL;
    return n;
}
struct Node* insert(struct Node* A, int x){
    if(A == NULL){
        struct Node * n;
        n = createNode(x);
        return n;
    }
    if(A -> data == x) return A;
    if(x < A -> data){
        struct Node * B = insert(A -> left, x);
        A -> left = B;
        return A;
    }
    if(x > A -> data){
        struct Node * B = insert(A -> right, x);
        A -> right = B;
        return A;
    }
    return A;
}
struct Node* deleteMin(struct Node* A) {
    if(A -> left == NULL){
        return A -> right;
    }
    A -> left = deleteMin(A -> left);
    return A;
}
int minValue(struct Node* A) {
    if(A->left == NULL) return A->data;
    return minValue(A->left);
}

struct Node* deleteX(struct Node* A, int x){
    if(A == NULL) return A;
    if(x > A -> data) {
        A->right = deleteX(A->right, x);
        return A;
    }
    if(x < A->data) {
        A->left = deleteX(A->left, x);
        return A;
    }
    if(A -> left == NULL) return A->right;
    if(A->right == NULL) return A->left;

    int y = minValue(A->right);
    A->right = deleteMin(A->right);
    A->data = y;
    return A;

}

void print(struct Node* head) {
    if(head == NULL) return;
    print(head -> left);
    cout << head -> data << " ";
    print(head -> right);
}

int member(struct Node* head, int x) {
    if(head == NULL) {
        return 0;
    }
    if(head -> data == x) return 1;
    if(head -> data > x) {
        return member(head -> left , x);
    }
    else return member(head -> right , x);

}

int main(){
    struct Node* A = NULL;
    int x,n;
    cin >> x;
    for(int i = 0; i < x; i++){
        cin >> n;
        A = insert(A,n);
        
    }
    cout << endl;
    print(A);
    cout << endl;
    //A = insert(A,5);
    //print(A);
    //cout << endl;
    //cout << member(A,5);
    A = deleteX(A, 5);
    cout << minValue(A);
    cout << endl;
    print(A);
    cout << endl;
    return 0;

}