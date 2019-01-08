#include<stdio.h>
int removeDuplicates(int* nums, int numsSize) {
	if (numsSize == 0)return 0;
	int j = 1; int pre = nums[0];
	for (int i = 1; i < numsSize; i++) {
		if (pre == nums[i])continue;
		nums[j++] = nums[i];
		pre = nums[i];
	}
	return j;
}
int maxProfit(int* prices, int pricesSize) {
	int buy = 0, sold = 0, profit = 0;
	int i = 0, j = 0;
	do
	{
		for (; i < pricesSize; i++)
		{
			if ((i == 0 && prices[i] < prices[i + 1]) || (prices[i] <= prices[i - 1] && prices[i] < prices[i + 1]))
			{
				buy = i;
				break;
			}
		}
		for (j = i + 1; j < pricesSize; j++)
		{
			if ((prices[j] >= prices[j + 1] && prices[j] > prices[j - 1])||(j==pricesSize-1&&prices[j]>prices[i]))
			{
				sold = j;
				break;
			}
		}
		if(buy>=0&&sold>0)
			profit += (prices[sold] - prices[buy]);
		i = j + 1;
	} while (i < pricesSize-1&&j < pricesSize);
	return profit;
}
int main()
{
	int nums[] = { 1,2,3,4,5 };
	int size = sizeof(nums) / sizeof(nums[0]);
	printf("%d", maxProfit(nums, size));
	return 0;
}