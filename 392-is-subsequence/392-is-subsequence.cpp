class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s == ""){
            return true;
        }
        if(t == ""){
            return false;
        }    

        if(s.size() == 1 && t.size() == 1){
            return s[0] == t[0];
        }    

        int a = 0;
        for(int i=0; i<t.size();i++){
            if(s[a] == t[i]){
                a += 1;
            }
        }     
        
        
        if(a == s.size()){
            return true;
        }    
        else{
            return false;
        }   
    }
};