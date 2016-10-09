/*
 * =====================================================================================
 *
 *       Filename:  binarySearch.c
 *
 *    Description:  binarySearch
 *
 *        Version:  1.0
 *        Created:  10/09/2016 11:50:31 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  chenyangguang
 *   Organization:  
 *
 * =====================================================================================
 */

int BinarySearch(const ElementType A[], ElementType X, int N)
{
    int Low, Mid, High;

    Low = 0; High = N -1;
    while(Low <= High)
    {
        Mid = (Low - High) / 2;
        if (A[Mid] < X)
        {
            Low = Mid + 1;
        } else if( A[Mid] < X)
        {
            High = Mid - 1;
        } else {
            return Mid;
        }
    }
    return NotFound;
}
