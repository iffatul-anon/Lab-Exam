#include<stdio.h>
int main()
{
    int n;
    printf("How many numbers:");
    scanf("%d",&n);

	int a[n];
	int i,j,temp;

	for(i=0;i<n;i++){
	scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++){

		for(j=i+1;j<n;j++){
		
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}	
		}	
	}
	
	printf("Sorted Array in asceding order\n");
	for(i=0;i<n;i++){
		printf("%d\n",a[i]);	
	}

    printf("Sorted Array in desceding order\n");
	for(i=n-1;i>=0;i--){
		printf("%d\n",a[i]);	
	}

    printf("Maximum number = %d\n",a[n-1]);

    printf("Minimum number = %d\n",a[0]);
	
	return 0;
}
