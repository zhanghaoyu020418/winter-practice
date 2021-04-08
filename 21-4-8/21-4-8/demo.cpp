#define _CRT_SECURE_NO_WARNINGS 1
lass Solution{
public:
	int findMin(vector<int>& nums) {
		if (nums.size() == 0) return 0;
		if (nums[nums.size() - 1] > nums[0]) return nums[0];
		int l = 0, r = nums.size() - 1;
		while (l < r) {
			int mid = l + r >> 1;
			if (nums[mid] <= nums.back()) r = mid;
			else l = mid + 1;
		}
		return nums[l];
	}
};
