#include<iostream>
#include<vector>

using namespace std;

class TreeNode{
    public:
    TreeNode(int val){
        this->data = val;
    }
    int data;
    TreeNode* left=NULL;
    TreeNode* right=NULL;
};

void insertion(TreeNode* root,int val){
    TreeNode* temp = root;
    while(1){
        if(val > temp->data && !temp->right){
            temp->right = new TreeNode(val);
            break;
        }
        else if(val > temp->data)temp = temp->right;
        else if(val < temp->data && !temp->left){
            temp->left = new TreeNode(val);
            break;
        }
        else if(val < temp->data )temp = temp->left;
    }
}

void inorder(TreeNode* root,vector<int>&store){
    if(root->left)inorder(root->left,store);
    store.push_back(root->data);
    if(root->right)inorder(root->right,store);
}

int main(){
    int k=3;
    TreeNode* root = new TreeNode(15);
    insertion(root,16);
    insertion(root,110);
    insertion(root,10);
    insertion(root,13);
    insertion(root,177);
    vector<int>store;
    inorder(root,store);
    cout<<store[k-1]<<endl;
    return 0;
}