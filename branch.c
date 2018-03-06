void merge(int src1[], int src2[], int dst[], int n)
{
    int i1 = 0, i2 = 0, id = 0;
    while (i1 < n && i2 < n) {
        dst[id++] = (int)(src1[i1] < src2[i2]) * src1[i1] +  (int)(src1[i1] > src2[i2]) * src2[i2];
        i1 += (src1[i1] < src2[i2])*1;
        i2 = id - i1;
    }
    while (i1 < n)
        dst[id++] = src1[i1++];
    while (i2 < n)
        dst[id++] = src2[i2++];
}
