class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
    //declare 2 unordered maps
    unordered_map<char,int> ran_m;//map for ransomeNote
    unordered_map<char,int> mag_m;//map for magazine
         
    
    //pass the string into map to get frequency of all elements
    for(int i=0;i<ransomNote.size();i++)
    ran_m[ransomNote[i]]++;  
    for(int i=0;i<magazine.size();i++) 
     mag_m[magazine[i]]++;
             
    
    //iterate over the map associated to ransomeNote 
    for(auto it : ran_m){/*if frequency of an element in ransomeNote 
        //is not less than equal to frequncy in magazine then return false*/ 
        if(ran_m[it.first]>mag_m[it.first]){
            return false;
        }
    }
    return true;
    }
};