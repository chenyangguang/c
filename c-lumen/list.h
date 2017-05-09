include <list.c>

#ifndef _List_H 

struct Node;
typedef struct Node *PtrToNode
typedef PtrToNode List
typedef PtrToNode Position

List MakeEmpty(List L);
int IsEmpty(List L);
int IsLast(Position P, List L);
Position Find(ElementType X, List L);
void Delete(ElementType X, List L);
Position FindPrevious(ElementType X, List L);
void Insert (ElementType X, List L, Position P);
void DeleteList(List L);
void Header(List L);
Position First(List L);
Position Advance(Position P);
ElementType Retrieve(Position P);

#endif  /* _LIST_H */


int Isempty(List L)
{
  return L->Next == NULL;
}

int IsLast(Position P, List)
{
  return P->Next == NULL;
}

Position Find(ElementType X, List L)
{
  Position P;

  P = L->Next;
  while(P != NULL && P->Element != X)
    P = P->Next;
  return P;
}

void Delete(ElementType X, List L)
{
  Position P, TmpCell;
  P = FindPrevious(X, L);
  if(!IsLast(P, L))
  {
    TmpCell = P->Next;
    P->Next = TmpCell->Next;
    free(TmpCell);
  }
}

Position FindPrevious(ElementType X, List L)
{
  Position P;
  P = L;
  while(P->Next != NULL && P->Next->Element != X)
      P = P->Next;
  return P;
}

void Insert(ElementType X, List L, Position P)
{
  Position TmpCell;
  TmpCell = malloc(sizeof(struct Node)); // 申请内存
  if(TmpCell == NULL)
    FataError("你丫耗光内存了!!")

  TmpCell->Element = X;
  TmpCell->Next = P->Next;
  P->Next = TmpCell;
}
