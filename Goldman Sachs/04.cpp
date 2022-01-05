Problem link :  https://practice.geeksforgeeks.org/problems/run-length-encoding/1/

**********************************************************************************************************
string encode(string src)
{     
    int count=1;
    string s="";
    for(int i=1;i<src.length();i++)
    {
        if(src[i]!=src[i-1])
        {s.push_back(src[i-1]);
        s+=to_string(count);
            count=1;
        }
        else count++;
    }
    s.push_back(src[src.length()-1]);
        s+=to_string(count);
    return s;
  //Your code here 
}   
