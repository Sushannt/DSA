class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int word1_length = word1.size();
        int word2_length = word2.size();
        int i = 0, j = 0;
        string result;

        while(i < word1_length || j < word2_length){

            if(i < word1_length){
                result += word1[i++];
            }

            if(j < word2_length){
                result+= word2[j++];
            }
        }
        return result;
    }
    };