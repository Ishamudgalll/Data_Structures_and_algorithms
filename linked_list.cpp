void displayList(Node *head)
{
    //Head to Tail
    
    /*
    Your code here to print from head to tail
    */
    while(head->next!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<head->data<<" ";
    cout<<endl;
    
    while(head->prev!=NULL)
    {
        cout<<head->data<<" ";
        head=head->prev;
    }
     cout<<head->data<<" ";
   
   
    
    //Tail to Head
    
    /*
    Your code here to print from tail to head
    */
    
  
   
    
    
}
