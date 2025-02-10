struct Node
{
    int data;
    Node* left, * right;
}; 
class Solution {
public:
void leftree(Node * root , vector<int> &ans)
{
    if(!root) return;
    
    if(root->left)
    {
        ans.push_back(root->data);
        leftree(root->left,ans);
    }
    else if(root->right)
    {
        ans.push_back(root->data);
        leftree(root->right,ans);
    }
    
}

void leaf(Node * root ,vector<int> &ans)
{
     if(!root) return;
     leaf(root->left,ans);
    if (!root->left and !root->right) {ans.push_back(root->data);}
     leaf(root->right,ans);
}
void rightree(Node * root , vector <int> &ans)
{
    if(!root) return;
    
    if(root->right)
    {
         rightree(root->right,ans); // recursive call then push inot ht eans in next step 
         ans.push_back(root->data);// for reverese output 
    }
    else if(root->left)
    {
         rightree(root->left,ans);
         ans.push_back(root->data); // for reverese output  that why it take after root->left;
    }
    
}
    vector <int> boundary(Node *root)
    {
         vector<int> ans;
         ans.push_back(root->data);
         leftree(root->left,ans);
         leaf(root,ans);
         rightree(root->right,ans);
         return ans; 
    }
};