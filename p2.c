/*Write a C program to insert an element into the first position of an array.*/
#include<stdio.h>
void print(int arr[],int);
int main()
{
    printf("Pattern Printing");
    //input values in the array
    int l,i;
    printf("Enter the size of the array=");
    scanf("%d",&l);
    int arr[l];
    for(i=0;i<l;i++)
    {
        printf("Enter element %d =",i+1);
        scanf("%d",&arr[i]);
    }
    int a,j;
    printf("Enter the element to be inserted =");
    scanf("%d",&a);
    //shifting element forward
    for(j=l;j>=0;j--)
        arr[j]=arr[j-1];
    //inserting element
    arr[0]=a;    
    //printing updated array
    print(arr,l);
}
void print(int arr[],int l)
{
    for(int j=0;j<=l;j++)
        printf("%d  ",arr[j]);
}