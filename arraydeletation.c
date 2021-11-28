#include<stdio.h>
#include<stdio.h>
 
 
void display(int arr[], int n){
    // Code for Traversal
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");   
}
 
int indDeletion(int arr[], int size, int element, int capacity, int index)
{
    // code for Insertion
    for (int i = index-1; i < size-1; i++)
    {
        arr[i] = arr[i + 1];
    }
    
}
 
int main()
{
    int arr[100] = {7, 8, 12, 27, 88};
    int size = 5, element = 45, index= 3;
    display(arr, size); 
    indDeletion(arr, size, element, 100, index);
    size -=1;
    display(arr, size);
    return 0;
}
