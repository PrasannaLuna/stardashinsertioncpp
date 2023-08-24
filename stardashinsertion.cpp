#include<bits/stdc++.h>
using namespace std;
string starprint(string &input ,string &output, int i=0)
{
    output=output+input[i];
    if(i==input.size()-1)
        return (input,output);

    bool cn=input[i]%2!=0;
    bool nn=input[i+1]%2!=0;
    if(cn && nn)
    {
        output=output+'-';
       
    } 
    else if(!cn && !nn)
    {
        output=output+'*';
    }
    
    
    
    starprint(input,output,i+1);
    
    return (input,output);


}

string stringapp(string &output,string &token,string &challop)
{
 
 for(int j=0;j<output.size()-1;j++)
   {
    bool tknum=isdigit(token[j]);
    bool opnum=isdigit(output[j]);
    bool opchar= output[j]=='*' || output[j]=='-';
    bool tkalpha=isalpha(token[j]);
    if(tknum && opnum ){
        challop=challop+token[j]+output[j];
    }
    else if(tkalpha && opchar ){
        challop=challop+output[j]+token[j];
    }
    else if(tknum && opchar ){
        challop=challop+ output[j]+token[j];
    }
    else if(tkalpha && opnum ){
        challop=challop+ output[j]+token[j];
    }

   }
 
 return challop;
  
}

int main()
{
string input="99946",output="",token="w4kf1svdje23",challengeop="";

starprint(input,output);
string result = output;
cout<<result<<endl;
cout<<"w4kf1svdje23"<<endl;
stringapp(output,token,challengeop);
challengeop=challengeop+token.substr(output.size()-1);
string challenge=challengeop;
cout<<challenge;




return 0;    
    
    
}
