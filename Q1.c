#include <stdio.h>
int main(){
    int size,i;
    printf("Enter the amount of numbers you want to enter: ");
    scanf("%d", &size);
    int nums[size];
    printf("Enter %d numbers:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &nums[i]);
    }
    int index = 0;
    for (i = 0; i < size; i++) {
        if (nums[i] != 0){
            nums[index] = nums[i];
            index++;
        }
    }
    while (index < size){
        nums[index] = 0;
        index++;
    }
    printf("[");
    for (i = 0; i < size; i++) {
        printf("%d", nums[i]);
        if (i < size - 1) printf(", ");
    }
    printf("]");
    return 0;
}
