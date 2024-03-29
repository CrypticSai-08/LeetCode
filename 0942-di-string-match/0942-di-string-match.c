/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *diStringMatch(char *S, int *returnSize) {
    int *ret, d = -1, i = 1, index = 1;
    *returnSize = strlen(S) + 1;
    ret = malloc(*returnSize * sizeof(int));
    ret[0] = 0;
    while (*S) {
        if (*S == 'I') ret[index++] = i++;
        else ret[index++] = d--;
        S++;
    }
    d = -d - 1;
    for (int j = 0; j < *returnSize; ++j) {
        ret[j] += d;
    }
    return ret;
}