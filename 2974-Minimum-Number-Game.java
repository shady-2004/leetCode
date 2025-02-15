class Solution {
    public int[] numberGame(int[] nums) {
        int [] arr=new int [nums.length];
        Arrays.sort(nums);
        for(int i=nums.length-1;i>=0;i-=2){
            arr[i]=nums[i-1];
            arr[i-1]=nums[i];
        }
        return arr;
    }
}