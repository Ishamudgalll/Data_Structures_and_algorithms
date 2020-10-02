void insert(set<int> &s,int x)
{
    s.insert(x);
    
    //Your code here
}

/*prints the contents of the set s */
void print_contents(set<int> &s)
{
    for(const auto&e :s){
        cout<<e<<" ";
    }
    //Your code here
}

/*erases an element x from the set s */
void erase(set<int> &s,int x)
{
    s.erase(x);
    //Your code here
}

/*returns 1 if the element x is
present in set s else returns -1 */
int find(set<int> &s,int x)
{
    int b=-1;
set<int>::iterator itr;
for (itr = s.begin(); itr!= s.end(); ++itr)
{ if(*itr==x)
{ b=1;break;}
}

return b;
    //Your code here
}

/*returns the size of the set s */
int size(set<int> &s)
{
    return s.size();
   //Your code here
}




