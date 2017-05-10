# 树的节点声明
typedef struct TreeNode *PtrToNode

struct TreeNode {
  ElementType Element;
  PtrToNode FirstChild;
  PtrToNode NextSibling;
}
