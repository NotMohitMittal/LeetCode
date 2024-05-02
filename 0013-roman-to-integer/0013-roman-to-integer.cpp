class Solution {
public:
    int romanToInt(string s) {
        int conRoman = 0;
        for (int i = 0; i < s.size(); i++) {

            char firstNum = s[i];
            char secNum = s[i + 1];

            int firstIndex, secIndex;

            switch (firstNum) {
            case 'I':
                firstIndex = 1;
                break;
            case 'V':
                firstIndex = 5;
                break;
            case 'X':
                firstIndex = 10;
                break;
            case 'L':
                firstIndex = 50;
                break;
            case 'C':
                firstIndex = 100;
                break;
            case 'D':
                firstIndex = 500;
                break;
            case 'M':
                firstIndex = 1000;
                break;
            default:
                break;
            }

            switch (secNum) {
            case 'I':
                secIndex = 1;
                break;
            case 'V':
                secIndex = 5;
                break;
            case 'X':
                secIndex = 10;
                break;
            case 'L':
                secIndex = 50;
                break;
            case 'C':
                secIndex = 100;
                break;
            case 'D':
                secIndex = 500;
                break;
            case 'M':
                secIndex = 1000;
                break;
            default:
                break;
            }

            int final;
            if (firstIndex >= secIndex || secNum == '\0')
                final = firstIndex;
            else {
                final = secIndex - firstIndex;
                i++;
            }

            conRoman += final;
        }
        return conRoman;
    }
};