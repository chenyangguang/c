/*二叉树节点声明*/
typedef struct TreeNode *PtrToNode;
typedef struct PtrToNode Tree;

struct TreeNode
{
    ElementType Element;
    Tree Left;
    Tree Right;
};
