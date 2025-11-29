#include <stdio.h>
#include <string.h>
void swap(){
	int left=0,right;
	char word[50],temp;
	printf("Enter a word:");
	scanf("%s",word);
	right=strlen(word)-1;
	while(left<right){
		temp=word[right];
		word[right]=word[left];
		word[left]=temp;
		left++;
		right--;
	}
	printf("%s",word);
}
int main(){
	swap();	
    return 0;
}