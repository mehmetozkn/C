#include <stdio.h>
#include <string.h>


int removeElement(int* nums, int numsSize, int val){
	int i;
	int temp = 0;
	for(i = 0 ; i < numsSize ; i++){
		if(nums[i] != val){
			nums[temp] = nums[i];
			temp++;
		}
	}
	return temp;
	

}
int main()
{
	int length;
	int i;
	int removeNumber;
	printf("Dizinin Eleman Sayisi : ");
	scanf("%d", &length);
	int nums[length];
	for(i = 0 ; i < length ; i++){
		printf("%d. Eleman : ",(i+1));
		scanf("%d", &nums[i]);
	}
	printf("\nKaldirilacak Eleman : ");
	scanf("%d", &removeNumber);
	
	int result = removeElement(nums,length,removeNumber);
	printf("Kalan Eleman Sayisi : %d",result);
	

	return 0;
}
