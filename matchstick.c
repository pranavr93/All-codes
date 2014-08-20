                        // Program for range minimum query using segment tree
#include <stdio.h>
#include <math.h>
#include <limits.h>

// A utility function to get minimum of two numbers
long minVal(long x, long y) { return (x < y)? x: y; }

// A utility function to get the middle index from corner indexes.
long getMid(long s, long e) {  return s + (e -s)/2;  }

/*  A recursive function to get the minimum value in a given range of array
    indexes. The following are parameters for this function.

    st    --> Pointer to segment tree
    index --> Index of current node in the segment tree. Initially 0 is
             passed as root is always at index 0
    ss & se  --> Starting and ending indexes of the segment represented by
                 current node, i.e., st[index]
    qs & qe  --> Starting and ending indexes of query range */
long RMQUtil(long *st, long ss, long se, long qs, long qe, long index)
{
    // If segment of this node is a part of given range, then return the
    // min of the segment
    if (qs <= ss && qe >= se)
        return st[index];

    // If segment of this node is outside the given range
    if (se < qs || ss > qe)
        return INT_MAX;

    // If a part of this segment overlaps with the given range
    int mid = getMid(ss, se);
    return minVal(RMQUtil(st, ss, mid, qs, qe, 2*index+1),
                  RMQUtil(st, mid+1, se, qs, qe, 2*index+2));
}

// Return minimum of elements in range from index qs (quey start) to
// qe (query end).  It mainly uses RMQUtil()
long RMQ(long *st,long n, long qs, long qe)
{
    // Check for erroneous input values
    if (qs < 0 || qe > n-1 || qs > qe)
    {
        printf("Invalid Input");
        return -1;
    }

    return RMQUtil(st, 0, n-1, qs, qe, 0);
}

// A recursive function that constructs Segment Tree for array[ss..se].
// si is index of current node in segment tree st
long constructSTUtil(long arr[], long ss, long se, long *st, long si)
{
    // If there is one element in array, store it in current node of
    // segment tree and return
    if (ss == se)
    {
        st[si] = arr[ss];
        return arr[ss];
    }

    // If there are more than one elements, then recur for left and
    // right subtrees and store the minimum of two values in this node
    int mid = getMid(ss, se);
    st[si] =  minVal(constructSTUtil(arr, ss, mid, st, si*2+1),
                     constructSTUtil(arr, mid+1, se, st, si*2+2));
    return st[si];
}

/* Function to construct segment tree from given array. This function
   allocates memory for segment tree and calls constructSTUtil() to
   fill the allocated memory */
long *constructST(long arr[], long n)
{
    // Allocate memory for segment tree
    long x = (int)(ceil(log(n))); //Height of segment tree
    long max_size = 2*(int)pow(2, x) - 1; //Maximum size of segment tree
    long *st = new long[max_size];

    constructSTUtil(arr, 0, n-1, st, 0);
    return st;
}

// Driver program to test above functions
int main()
{
    long arr[] = {1, 3, 2, 7, 9, 11};
    long n = sizeof(arr)/sizeof(arr[0]);

   long *st = constructST(arr, n);

    long  qs = 0;  // Starting index of query range
    long qe = 5;  // Ending index of query range

    // Print minimum value in arr[qs..qe]
    printf("Minimum of values in range [%d, %d] is = %d\n",
                           qs, qe, RMQ(st, n, qs, qe));

    return 0;
}
