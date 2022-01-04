string encode(string src)
{   
    string s="";
    for(int i=0;i<src.size();){
        int count=0;
        int j=i+1;
        while(src[i]==src[j])
            j++;
        s+=src[i]+to_string(j-i);
        i=j;
    }
    return s;
  //Your code here 
}  
