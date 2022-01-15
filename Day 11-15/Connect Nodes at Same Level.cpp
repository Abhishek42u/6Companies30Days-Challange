class Solution {
  public:
    void connect(Node *root) {
        if(!root) return;
        root->nextRight = NULL;
        Node* leftMostNode = root;
        while(leftMostNode != NULL) {
            Node* nextLeftNode = NULL, *prevNode = NULL, *temp = leftMostNode;
            while(temp != NULL) {
                adjust(temp->left, prevNode, nextLeftNode);
                adjust(temp->right, prevNode, nextLeftNode);
                temp = temp->nextRight;
            }
            if(prevNode) prevNode->nextRight = NULL;
            leftMostNode = nextLeftNode;
        }
    } 
    
    inline void adjust(Node* node, Node* &prevNode, Node* &nextLeftNode) {
        if(!node) return;
        if(!prevNode) {
            prevNode = node;
            nextLeftNode = prevNode;
        }
        else {
            prevNode->nextRight = node;
            prevNode = node;
        }
    }
};
