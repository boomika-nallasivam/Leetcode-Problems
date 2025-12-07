class Solution {
    public boolean canCross(int[] stones) {
        HashMap<Integer, HashSet<Integer>> map = new HashMap<>();

        for (int s : stones) {
            map.put(s, new HashSet<>());
        }

        map.get(0).add(0);  

        for (int s : stones) {
            for (int k : map.get(s)) {   
                for (int jump = k - 1; jump <= k + 1; jump++) {
                    if (jump > 0 && map.containsKey(s + jump)) {
                        map.get(s + jump).add(jump);
                    }
                }
            }
        }

        return !map.get(stones[stones.length - 1]).isEmpty();
    }
}
public class Leetcode403{
	public static void main(String[]args){
		Scanner Sc = new Scanner(System.in);
		int low = sc.nextInt();
		int [] arr = new int[low];
		for(int i=0 ; i<low ; i++){
			arr[i]=sc.nextInt();
		}		
		Solution sol = new Solution();
		System.out.println(sol.countOdds(low));
	}
}