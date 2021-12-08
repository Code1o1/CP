#include<bits/stdc++.h>
using namespace std;
const auto start_time = std::chrono::high_resolution_clock::now();
#define TEST_CASES      int t; cin >> t; while(t--)
#define fastio          ios_base::sync_with_stdio(false);cin.tie(NULL);


class Node {
public:
    int data;
    Node* next;
    Node* prev;
};

Node* inputNode(Node* head , int n){
   Node* temp = NULL;
   Node* a = head ;
  
   int x;
   for(int i = 0; i < n; i++) {
      temp = new Node();
      cin >> x;
      temp -> data = x;
      temp -> next = NULL;
      temp -> prev = NULL;
      
      if(head == NULL) {
         temp -> next = NULL;
         head = temp;
      }
      else {
         head -> next = temp ; 
         temp -> prev = head ; 
         head = temp;   
      }
   }
   return  a-> next;
}

void printNode(Node* head) {
   while(head ->next != NULL) {  
      cout << head -> data << " ";
      head = head -> next;
   }
   cout << head -> data << endl;
}

int searchList(Node* head , int a) {
   while(head -> next !=NULL) {
      if(head -> data == a){
         return 1;
      }
      head = head ->next;
   }
   return 0;
}

void inserListFront(Node* head, int n) {
   Node* a = head;
   Node* temp = NULL;
   temp = new Node();
   temp -> data = n;
   temp -> next = NULL;
   temp -> prev = NULL;
   while(a->next != NULL){
      a = a ->next;
   }
   a -> next = temp ; 
   temp -> prev = a ; 
   a = temp;
   return;
}

Node* inserListBack(Node* head, int n) {
  
   Node* temp = NULL;
   temp = new Node();
   temp -> data = n;
   temp -> prev = NULL;

   temp -> next = head;
   head = temp;
   //if(temp -> next != NULL)
   head -> next -> prev = head;
  // printNode(head);
   

   return head;
}

Node* deleteNode(Node* head, int n) {
   Node* a = head;
   if(a -> data == n){
      head = head -> next;
      a -> prev = NULL;
   }

   else{
      
      while(a != NULL) {
         if(a -> data == n) {
            if(a -> next == NULL) {
               a -> prev -> next = NULL;
            }
            else {
               a -> next -> prev = a -> prev ;
               a -> prev -> next = a -> next;
            }
         }
         a = a->next;
      }
   }
  return head;
}


void solve(){
   Node* head = NULL;
   head = new Node();
   head -> data = 100;
   head -> next = NULL; 
   head -> prev = NULL;
   head = inputNode(head, 15);  
   printNode(head);
   cout << "**************" << endl;
   if(searchList(head , 78)) {
      cout << "Found" << endl;
   }
   else {
      cout << "Not Present" << endl;
   }
   cout << "****************"<< endl;
   inserListFront(head, -30);
   inserListFront(head, 12354);
   head = inserListBack(head, -9999);
   head = deleteNode(head, 78);
   head = deleteNode(head, -9999);
   head = deleteNode(head, 9);
   head = deleteNode(head, 12354);
   printNode(head);

   return ;
 }

int main(){
   fastio
   #ifdef SANDEEP
            freopen("input.txt", "r", stdin);
            freopen("output.txt", "w", stdout);
   #endif
            cout<< "ok"<<endl;
   solve();
    
    auto end_time = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> diff = end_time - start_time;
    #ifdef SANDEEP
    cout << "Time Taken : " << diff.count() << "s\n";
    #endif
   return 0;
}