class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = s.size()-1;
        int wordCount = 0;
        string lastWord;
        while (count >= 0 && s[count] == ' '){
            count--;
        }

        for(int i=count; s[i] != ' '; i--){
            lastWord+=s[i];
            if(i==0) break;
        }
        // since the last letter of the word will be left by the loop .size() will increase the result anyways;
        return lastWord.size();
    }
};