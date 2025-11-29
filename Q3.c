#include <stdio.h>
int main(){
    int size,i,j=1,k=1;
    printf("Enter the amount of numbers you want to enter: ");
    scanf("%d", &size);
    int nums[size],expectednum[size];
    printf("Enter %d numbers:\n", size);
    for (i = 0; i < size; i++){
        scanf("%d", &nums[i]);
    }
    expectednum[0]=nums[0];
    for (i = 1; i < size; i++){
        if(nums[i]!=nums[i-1]){
        	expectednum[j]=nums[i];
        	j++;
        	k++;
		}
    }
    printf("%d, ",k);
    printf("nums=[");
    for (i = 0; i <j; i++){
        printf("%d", expectednum[i]);
        if (i < j - 1){
			printf(",");
		}
    }
    while(j<size){
    	printf(",_");
    	j++;
	}
	printf("]");
	return 0;
}