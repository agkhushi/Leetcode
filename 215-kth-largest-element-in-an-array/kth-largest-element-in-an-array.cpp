class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> minHeap;
        for (int num : nums) {
            minHeap.push(num);  // push current number into heap
            if (minHeap.size() > k) {
                minHeap.pop();  // remove smallest if size > k
            }
        }
        // Top of heap is kth largest element
        return minHeap.top();
    }
};