int lo = 0, hi = N;
for(int mid = (lo + hi)/2; hi - lo > 1; mid = (lo + hi)/2)
   (arr[mid] > x? hi : lo) = mid;
return lo;
// assuming N < 2^30, else "(hi + lo)" may overflow int
// can be worked around using lo + (hi-lo)/2 : see answer-comment thread

