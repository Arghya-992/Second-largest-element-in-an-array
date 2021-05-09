#include<stdio.h>
int main(){

int n;
int a;//first maximum
int b; //second maximum

printf("\n Enter the size of the array:");
scanf("%d", &n);

int array[n];

printf("Enter elements in the array: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &array[i]);
    }

a=b;

for(int i=0; i<n; i++)
    {
        if(array[i] > a)
        {
            
            b = a;
            a = array[i];
        }
        else if(array[i] > b && array[i] < a)
        {
           
            b = array[i];
        }
    }
    
    //printf("First largest = %d\n", max1);
    printf("Second largest element is= %d", b);

    return 0;
}

