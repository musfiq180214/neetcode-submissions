class Solution {
public:
    bool isPalindrome(string s) {
        string cleaned = "";

        for (char c : s) {
            if (isalnum(static_cast<unsigned char>(c))) {
                cleaned += tolower(static_cast<unsigned char>(c));
            }
        }

        int n = cleaned.size();

        int i = 0, j = n-1;

        bool isPallindrome = true;

        while(i<j){

            if(cleaned[i]!=cleaned[j]){
                isPallindrome = false;
                break;
            }
            i++;
            j--;
        }
        return isPallindrome;
    }
};