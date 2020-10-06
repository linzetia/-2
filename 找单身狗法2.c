
//元素组中找出单身狗（法二）
#include<stdio.h>
int main()
{
	int arr[] = {1,2,3,4,5,1,2,3,4};
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0,res=0;
	for (i = 0; i < sz; i++)
	{
		res = res ^ arr[i];
	}
	printf("单身狗是：%d\n", res);
	return 0;
}