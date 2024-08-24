class Solution {
    public int strStr(String haystack, String needle) {
        Queue<Character> needleQueue = new LinkedList<>();
        Queue<Character> haystackQueue = new LinkedList<>();

        // putting the characters of needle String into a queue
        for(int i=0; i<needle.length(); i++) {
            needleQueue.add(needle.charAt(i));
        }


        // putting the characters of the haystack into another queue
        for(int j=0; j<haystack.length(); j++) {
            haystackQueue.add(haystack.charAt(j));

            if(haystackQueue.equals(needleQueue)) {
                return j - needle.length() + 1;
            }
            
            if(haystackQueue.size() >= needle.length()) {
                haystackQueue.remove();
            }
        }

        return -1;  // if not same
    }
}