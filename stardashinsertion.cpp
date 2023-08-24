#include<bits/stdc++.h>
using namespace std;
string starprint(string &input ,string &output, int i=0)
{
    for(i;i<input.size();i++)
    {
     output=output+input[i];
    if(i==input.size()-1)
     return output;
    if(input[i]=='0' )
    {
        continue;
    }
    
    bool cn=input[i]%2!=0 ;
    bool nn=input[i+1]%2!=0 ;
    
    if(cn && nn)
    {
        output=output+'-';
       
    } 
    
    else if(!cn  && !nn )
    {
        output=output+'*';
    }
    
    }
    
    return " ";


}

string stringapp(string &output,string &token,string &challengeop,int j=0)
{
  for(j;j<output.size();j++){
    challengeop=challengeop+output[j]+token[j];
  }
   
 return challengeop;
  
}

int main()
{
string input="56647304",output="",token="w4kf1svdje23",challengeop="";
cout<<input<<"\n";
starprint(input,output);
string result = output;
cout<<result<<endl;
cout<<"w4kf1svdje23"<<endl;
stringapp(output,token,challengeop);
challengeop=challengeop+token.substr(output.size());
string challenge=challengeop;
cout<<challenge;




return 0;    
    
    
}