#include<iostream>

#include<queue>

using namespace std;

class BinaryNode

{

  public:

  int data;

  BinaryNode *left,*right;

  BinaryNode(int data){
    this->data=data;left=right=NULL;
    }

};

class BinaryTree

{

  public:

  BinaryNode *root=NULL;

  void insertNode(int data)

  {

    BinaryNode* newnode = new BinaryNode(data);

    if(root==NULL)

    {

    root=newnode;

    return;

    }

    queue<BinaryNode *>q;

    q.push(root);

    while(!q.empty())

    {

      BinaryNode *currentnode= q.front();

      q.pop();

      if(currentnode->left==NULL)

      {currentnode->left=newnode;return;}

      if(currentnode->right==NULL)

      {currentnode->right=newnode;return;}

      q.push(currentnode->left);

      q.push(currentnode->right);

    }

  }

   void preorder(BinaryNode *node)

  {

    if(node==NULL)

    return;

    cout<<node->data<<" ";

    preorder(node->left);

    preorder(node->right);

  }

  void inorder(BinaryNode *node)

  {

    if(node==NULL)

    return;

    inorder(node->left);

    cout<<node->data<<" ";

    inorder(node->right);

  }

    void postorder(BinaryNode *node)

  {

    if(node==NULL)

    return;

    postorder(node->left);

    postorder(node->right);

    cout<<node->data<<" ";

  }
  BinaryNode* lastnode(){
    BinaryNode *currentnode=NULL;
    queue<BinaryNode* > q;
    q.push(root);
    while(!q.empty()){
          currentnode= q.front();

      q.pop();

      if(currentnode->left!=NULL)

      {
    q.push(currentnode->left);
    }

      if(currentnode->right!=NULL)

      {
        q.push(currentnode->right);
        }

      
    }
    return currentnode;
  }

void deletenode(int val){
    BinaryNode *currentnode=NULL;
    queue<BinaryNode* > q;
    q.push(root);
    while(!q.empty()){
          currentnode= q.front();

      q.pop();

      if(currentnode->left!=NULL)

      {
    q.push(currentnode->left);
    }

      if(currentnode->right!=NULL)

      {
        q.push(currentnode->right);
        }
if(currentnode->data==val){
    currentnode->data=lastnode()->data;
}
lastnode()->data=NULL;
      
    }
}


};

int main()

{

  BinaryTree ob;

  ob.insertNode(10);

  ob.insertNode(20);

  ob.insertNode(30);

  ob.insertNode(40);

  ob.insertNode(50);

  ob.insertNode(60);

  ob.insertNode(70);

  ob.insertNode(80);

  ob.insertNode(90);

//   ob.inorder(ob.root);
ob.inorder(ob.root);
ob.deletenode(30);
ob.inorder(ob.root);
// cout<<ob.lastnode()->data;


}

















