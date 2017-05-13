#define CutOff(3)

void Qsort(ElementType A[], int Left, int Right)
{
    int i, j;
    ElementType Pivot;

    if(Left + Cutoff <= Right){
        Pivot = Median3(A, Left, Right);
        i = Left; j = Right - 1;
        for(;;) {
            while(A[++i] < Pivot){}
            while(A[--j] > Pivot){}
            if(i < j)
                Swap(&A[i], &A[j]);
            else
                break;
        }
        Swap(&A[i], &A[Right - 1]);
        Qsort(A, Left, i - 1);
        Qsort(A, i + 1, Right);
    } else 
        InsertionSort(A + Left, Right - Left + 1);
}
