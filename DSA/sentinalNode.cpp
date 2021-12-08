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
      head -> next = temp ; 
      temp -> prev = head ; 
      head = temp;   
   }
   head -> next = a;
   a-> prev = head;

   return  a;
}

void printNode(Node* head) {
   Node * temp = head ->prev;
   while(head != temp) {  
      if(head->data)
         cout << head -> data << " ";
      head = head -> next;
   }
   if(head -> data)
      cout << head -> data << endl;
}

void solve(){
   Node* head = NULL;
   head = new Node();
   head -> next = NULL; 
   head -> prev = NULL;
   head = inputNode(head, 15);  

   printNode(head);
   cout << "**************" << endl;
   return;
 }

int main(){
   fastio
   #ifdef SANDEEP
            freopen("input.txt", "r", stdin);
            freopen("output.txt", "w", stdout);
   #endif
   cout<< "ok"<< endl;
   solve();
    
    auto end_time = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> diff = end_time - start_time;
    #ifdef SANDEEP
    cout << "Time Taken : " << diff.count() << "s\n";
    #endif
   return 0;
}