void rotate(int* nums, int numsSize, int k)
{
	int a[numsSize],i;
	for(i=0;i<numsSize;i++)
	{
		a[i]=nums[i];
	}
	for(i=0;i<numsSize;i++)
	{
		nums[(i+k)%numsSize]=a[i];
	}
	
}
