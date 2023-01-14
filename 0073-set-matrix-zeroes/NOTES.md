​Multiple edge cases to be considered.
Algo:
1. If m[0][0] as zero : set i and j flags to 0
2. Process full matrix:
    a. If m[i][j]==0
        Set m[0][j] and m[i][0] to 0
        Set respective flag to 0 if i=0 or j=0
3. Process matrix from m[1][1]
    a. If first cell of row/col is zero, set ele to zero
4. If i flag = 0: Set first row to 0
5. If j flag = 0: Set first col to 0
