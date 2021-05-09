#include<stdio.h>
int main(){
	int n;
	int a;
	int b;
	
	printf("\n Enter the size of the array");
	scanf("%d", &n);
	
	int array[n];
	
	printf("\n Enter the elements of the array:");
	for(int i=0; i < n; i++){
		scanf("%d", &array[i]);
		for(int i=0; i < n; i++){
			for(a=i + 1; a < n; a++){
				if(array[i] < array[a])
				{ b = array[i];
				  array[i] = array[a];
				  array[a] = b;
				}
        }
    }
}
                printf("\n The second largest elemet in the array is %d", b);
            return 0;
}
