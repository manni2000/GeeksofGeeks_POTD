long long maxArea(long long A[], int len)
{
    // Your code goes here
    int low = 0;
    int high = len - 1;

    long long int ans = 0;

    while (low < high)
    {
        long long int water = (high - low) * min(A[high], A[low]);

        if (A[low] < A[high])
            low++;

        else
            high--;

        ans = max(ans, water);
    }
    return ans;
}