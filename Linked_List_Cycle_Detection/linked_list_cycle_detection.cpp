/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::detectCycle(ListNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    if(A==NULL) return NULL;
    
    ListNode* temp=A;
    map<ListNode*, bool> list;
    
    map<ListNode*, bool>::iterator it;
    
    list.insert(pair<ListNode*, bool>(temp,1));
    while(temp->next!=NULL)
    {
        
       it = list.find(temp->next);
       
       if (it != list.end())
        {
           return temp->next; 
        }
        temp=temp->next;
        list.insert(pair<ListNode*, bool>(temp,1));
               
    }
    return NULL;
}
