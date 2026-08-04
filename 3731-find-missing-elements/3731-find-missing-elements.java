class Solution {
    public List<Integer> findMissingElements(int[] nums) {
        boolean[] present=new boolean[101];
        int min=Integer.MAX_VALUE;
        int max=Integer.MIN_VALUE;
        for(int x : nums){
            present[x]=true;
            min=Math.min(min,x);
            max=Math.max(max,x);
        }
        List<Integer>ans=new ArrayList<>();
        for(int i=min;i<=max;i++){
            if(!present[i])
                ans.add(i);
        }
        return ans;
    }
}