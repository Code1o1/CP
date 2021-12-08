#include<bits/stdc++.h>
using namespace std;
const auto start_time = std::chrono::high_resolution_clock::now();
#define TEST_CASES      int t; cin >> t; while(t--)
#define fastio          ios_base::sync_with_stdio(false);cin.tie(NULL);


class Node {
public:
    int data;
    Node* next;
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
      
      if(head == NULL) {
         temp -> next = NULL;
         head = temp;
      }
      else {
         head -> next = temp ;  
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

void inserList(Node* head, int x) {
   while(head ->next != NULL)
}

void solve(){
   Node* head = NULL;
   head = new Node();
   head -> data = 100;
   head -> next = NULL; 
     head = inputNode(head, 15);  
   printNode(head);
   cout << "**************" << endl;
   if(searchList(head , -30)) {
      cout << "Found" << endl;
   }
   else {
      cout << "Not Present" << endl;
   }
   cout << "****************"<< endl;
   inserList(head, -30);

   return ;
 }

int main(){
   fastio
   #ifdef SANDEEP
            freopen("input.txt", "r", stdin);
            freopen("output.txt", "w", stdout);
   #endif
   solve();
    
    auto end_time = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> diff = end_time - start_time;
    #ifdef SANDEEP
    cout << "Time Taken : " << diff.count() << "s\n";
    #endif
   return 0;
}