class Solution {
public:
    string reverseWords(string s) {
        
       int i,j=0,c=0;
        
        for(i=0;i<s.length();i++){
            if(s[i]!=' '){
                break;
            }
        }
        
       s=s.substr(i,s.length());
       reverse(s.begin(),s.end());
        
        for(i=0;i<s.length();i++){
            if(s[i]!=' '){
                break;
            }
        }
        
        s=s.substr(i,s.length());
        cout<<s<<"\t";
        for(int i=0;i<s.length();i++){
            while(s[i]==' ' && s[i+1]==' '){
                s.erase(i,1);   
            }
            if(s[i]==' '){
                reverse(s.begin()+j,s.begin()+i);
                j=i+1;
                c=1;
            }
            else if(i==s.length()-1){
                reverse(s.begin()+j,s.begin()+i+1);
            }
        }
        
        return s;
        
    }
};

/*
 int pos=0;
        int len=s.length();
        string word;
        
        for(int i=0;i<len;i++){
            if(s[i]==' '){
                
                word.erase();
                
                if(pos!=0){
                    word=' ';
                    word+= s.substr(0,i);
                }
                else {
                    word=' ';
                    word+= s.substr(0,i)+' ';
                }
                cout<<word<<word<<"\t";
                s.insert(s.length()-pos,word);
                s.erase(s.begin(),s.begin()+i+1);
               
                pos=i;
                len-=i;
                i=0;
                
            cout<<":"<<s<<":"<<endl;
            }
        }*/