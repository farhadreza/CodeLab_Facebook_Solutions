/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
  //  A= head;
   
    if(A==NULL) return NULL;
    if(A->next==NULL) return A;
    ListNode* duprem=A;
    while(duprem->next!=NULL)
    {       
        if(duprem->val == duprem->next->val)
        {         
            ListNode* temp=duprem->next;
            duprem->next=temp->next;
            temp =NULL;
            delete temp;
           
        }
        
        else
        {
           duprem=duprem->next; 
        }

    }
    return A;
    
    
}
