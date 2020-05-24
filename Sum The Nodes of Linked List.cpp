//User function Template for C++

/*
struct Node
{
    int data;
    Node * next;
    Node (int x)
    {
        data=x;
        next=NULL;
    }
        
};
*/

int sumOfElements(Node *head)
{
    if(head==NULL)
    return 0;
    else
    return head->data+sumOfElements(head->next);
    
   //Your code here
   
}
