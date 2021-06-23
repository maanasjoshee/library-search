#include <stdio.h>
int search(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x)
            {
			return i;
        }
    else 
	{
	 return -1;
    }
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
    int result = search(arr, n, x);
    if(result == -1)
        {
		 printf("Element is not present in array");
        }
    else 
    {
	  printf("Element is present at index %d", result);
    }
	return 0;
}
