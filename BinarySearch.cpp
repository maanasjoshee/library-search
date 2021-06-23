#include <stdio.h>
int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
        return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}
int main(void)
{
    int n, arr[100], x;
    printf("Enter the number of element");
    scanf("%d",&n);
    printf("Enter the elements of array");
    for(int i=0;i<n;i++)
    {
	scanf("%d",&arr[i]);
    }
    printf("enter the number to be searched");
    scanf("%d",&x);
    int result = binarySearch(arr, 0, n - 1, x);
    if(result == -1) 
	{
	 printf("Element is not present in array");
    }
	else{
	  printf("Element is present at index %d",result);
     }
    return 0;
}
