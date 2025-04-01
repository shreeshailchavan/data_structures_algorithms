#include<bits/stdc++.h>
using namespace std;

class Permutation{
private:
    bool checkIsEqual(int c1[],int c2[]){
        for(int i=0;i<26;i++){
            if(c1[i]!=c2[i])
                return 0;
        }
        return 1;
    }

public:
    bool checkInclusion(string s1,string s2){
        int count1[26] = {0};
        int count2[26] = {0};
        int windowLength = s1.length();
        for(int i=0;i<windowLength;i++){
            count1[s1[i]-'a']++;
        }

        int i=0;
        while(i<windowLength && i< s2.length()){
            count2[s2[i]-'a']++;
            i++;
        }

        if(checkIsEqual(count1,count2))
            return 1;

        while(i<s2.length()){
            count2[s2[i]-'a']++;
            count2[s2[(i-windowLength)]-'a']--;
            if(checkIsEqual(count1,count2))
                return 1;
            i++;
        }
        return 0;
    }
};
int main(){
    Permutation p1;
    if(p1.checkInclusion("ab","eidboaoo"))
        cout<<"true";
    else
        cout<<"false";
    return 0;
}

