bool checkmid(int mid,int n,vector<int> &boards, int k){
    int cntpainter=0;
    int csum=0;
    for(int i=0;i<n;i++){
        if(boards[i]>mid){
            return false;
        }
        csum+=boards[i];
        if(csum>mid){
            cntpainter++;
            csum=boards[i];
            if(cntpainter>=k){
                return false;
            }
        }
    }
    return true;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
     int sum = 0;
    int n = boards.size();
    if (k > n) return -1;
    for (int i = 0; i < n; i++) {
        sum += boards[i];
    }
    int i = 1;
    int j = sum;
    int result = sum;
    while (i <= j) {
        int mid = i + (j - i) / 2;
        if (checkmid(mid, n, boards, k) == true) {
            result = mid;
            j = mid - 1;
        } else {
            i = mid + 1;
        }
    }
    return result;
}
