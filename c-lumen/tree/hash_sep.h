#ifndef _HashSep_H

// 分离链接散列表

struct ListNode;
typedef struct ListNode *Position;
struct HashTbl;
typedef struct HashTbl *HashTable;

HashTable InitializeTable(int TableSize);
void DestroyTable(HashTable H);
Position Find(ElementType Key, HashTable H);
void Insert(ElementType Key, HashTable H);
ElementType Retrieve(Position P);

#endif

struct ListNode
{
    ElementType Element;
    Position Next;
};

typedef Position List;

struct HashTbl
{
    int TableSize;
    List *TheLists;
};


HashTable InitializeTable(int TableSize)
{
    HashTable H;
    int i;
    if(TableSize < MinTableSize){
        Error('Table size too small');
        return NULL;
    }
    H = malloc(sizeof(struct HashTbl));
    if(H == NULL)
        FataError('Out of space!');

    H->TableSize = NextPrime(TableSize);
    H->TheLists = malloc(sizeof(List) * H->TableSize);

    if(H->TheLists == NULL)
        FataError('Out of space');

    for(i = 0; i < H->TableSize; i++) {
        H->TheLists[i] = malloc(sizeof(struct ListNode));
        if(H->TheLists[i] == NULL)
            FataError('Out of space!!');
        else
            H->TheLists[i]->Next = NULL;
    }

    return H;
}

Position Find(ElementTyep Key, HashTable H)
{
    Position P;
    List L;

    L = H->TheList[Hash(Key, H->TableSize)];
    P = L->Next;
    while(P != NULL && P->Element != Key)
        P = P->Next;
    return P;
}

void Insert(ElementType Key, HashTable H)
{
    Position Pos, NewCell;
    List L;

    Pos = Find(Key, H);
    if(Pos == NULL){
        NewCell = malloc(sizeof(struct ListNode));
        if(NewCell == NULL)
            FataError('Out of space!!');
        else {
            L = H->TheLists[Hash(Key, H->TableSize)];
            NewCell->Next = L->Next;
            NewCell->Element = Key;
            L->Next = NewCell;
        }
    }
}
