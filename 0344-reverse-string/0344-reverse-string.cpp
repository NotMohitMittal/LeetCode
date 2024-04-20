class Solution {
public:
    
    void reverseString(vector<char>& s){
        int size=s.size(), count = size-1;
        char temp;
        for(int i=0; i<size/2; i++){
            temp = s[i];
            s[i] = s[count];
            s[count--] = temp;
        }
    }
};  