class Solution {
  public:
    Node* sortedInsert(Node* head, int data) {
        Node * newnode =new Node(data);
       
        //if the head null make it head make it point towords itself
        if(head==NULL){
            newnode->next=newnode;
            return newnode;
        }
        
        //data is less than head make the newnode points towords the head node 
      //travel till the end and make last node point towords the newnode to make it corcular link list
         Node * curr=head;
         
           if(data<head->data){
               newnode->next=head;
               while(curr->next!=head){
                   curr=curr->next;
               }
               curr->next=newnode;
               return newnode;
           }
        
        
      //check till curr element is not equal to the head once the we get the element which is greter then the available elmenet 
      //then make the curr next to thge n
        
        while(curr->next!=head){
            if(data<curr->next->data){
                newnode->next=curr->next;
                curr->next=newnode;
                return head;
                
            }
            curr=curr->next;
        }
        
          curr->next=newnode;
           newnode->next=head;
        
        return head;
    }
};
