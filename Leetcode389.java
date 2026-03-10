class Solution {
    public char findTheDifference(String s, String t) {
        int sum = 0;
        int sum1 = 0;
        for(int i=0 ; i< s.length() ; i++){
            sum = sum + (int) s.charAt(i);
        }
        for(int i=0 ; i< t.length() ; i++){
            sum1 = sum1 + (int) t.charAt(i);
        }
        int diff = sum1 - sum;
        return (char)diff;
     
    }
}
