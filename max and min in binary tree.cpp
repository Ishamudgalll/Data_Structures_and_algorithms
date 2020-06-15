int findMax(struct node* root)
{
if(!root)
return INT_MIN;
return max(root->data,max(findMax(root->left),findMax(root->right)));
}


int findMin(struct node* root)
{
if(!root)
return INT_MAX;
return min(root->data,min(findMin(root->right),findMin(root->left)));
}
