class Solution {
    public boolean checkIfPangram(String sentence) {
        boolean []occur=new boolean[26];
        for(int i=0;i<26;i++)occur[i]=false;
        for(int i=0;i<sentence.length();i++)occur[(int)(sentence.charAt(i))-97]=true;
        for(int i=0;i<26;i++)if(!occur[i])return false;
        return true;
    }
}