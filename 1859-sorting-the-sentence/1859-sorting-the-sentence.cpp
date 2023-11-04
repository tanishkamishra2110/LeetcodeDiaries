class Solution {
public:
    string sortSentence(string s) {
         int n = s.length();
       int i=0;
       unordered_map<int,string>mp;
       int maxi=-1;

       while(i<n)
       {
           string str="";
           while((s[i]>='a'&&s[i]<='z')|| (s[i]>='A'&&s[i]<='Z'))
           {
               str+=s[i];
               i++;
           }
          
          int k = s[i]-'0';
          maxi=max(k,maxi);
          mp[k]=str;
          i+=2;
       }

       string ans="";
       for(int i =1;i<=maxi;i++)
       {
           if(i!=1) ans+=" ";
           ans+=mp[i];
           
       }

       return ans;
    }
};