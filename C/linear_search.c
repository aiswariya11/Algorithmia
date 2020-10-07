// This program performs linear search on an array with n integers and outputs the index if the key is found
// Input : number of elements n, array arr[], key
// output: the index where the key resides in the array, if found; else "key not found"

/* Assumptions :-
    1.The key and the array elements are integers.
    2.There is only one key to be found at a moment
    3.Only if the first occurance of the key is to be found, if there are duplicates.
    4.Number of elements does not exceed 100. (if it exceeds 100, change the array size to a value more than the number of elements).
*/
#include<stdio.h>
void main()
{
    int n, arr[100], key, i; 

    printf("Enter the number of elements in the array : \t");
    scanf("%d", &n); 

    printf("Enter the array elements: \n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]); 
    }

    printf("Enter the key to be found : \t");
    scanf("%d", &key);


/* Search starts here */
/*Linear Search aka Sequential Search : The array is searched sequentially, i.e., the key is compared to the element at array's 0th index and proceeds to the next index in a sequential order until the key is found or reaches the end of the list */
   
    for (i = 0; i < n;i++){
        if(arr[i]==key) //Each element in the array is compared with the key.
        
        {
            printf("%d found at index %d of the array", key, i);
            break; /* If the key is found, then there is no need for further iteration.(why? Read Assumptions). Hence, the break statements breaks the loop and the control goes out of the loop to the next immediate statement*/
        }
        
    }
/* Search ends here */

/*If the key isn't found it means that the entire list was searched and the iterative variable i exited the loop with a value 1 more than the last index*/
    if(i==n) 
    {
        printf("Key not found");
    }
}
