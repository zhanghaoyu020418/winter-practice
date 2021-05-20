class Solution {
public:
	int largestRectangleArea(vector<int>& heights) {
		int n = heights.size();
		stack<int> mono_sk;// ����ջ
		int Left[n], Right[n];// ��right�����е���ȫ����ʼ��Ϊn
		fill(Right, Right + n, n);
		for (int i = 0; i < n; i++) {
			while (!mono_sk.empty() && heights[mono_sk.top()] >= heights[i]) {
				Right[mono_sk.top()] = i;
				mono_sk.pop();
			}
			Left[i] = mono_sk.empty() ? -1 : mono_sk.top();
			mono_sk.push(i);
		}

		int ans = 0;
		for (int i = 0; i < n; i++) {
			ans = max(ans, (Right[i] - Left[i] - 1) * heights[i]);
		}

		return ans;
	}
};