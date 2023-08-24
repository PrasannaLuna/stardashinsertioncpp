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

string stringapp(string &output,string &token,string &challengeop,int j=0)
{
  if(j==output.size()-1)
   {return challengeop;}
   
   char letter=token[j] , digit=output[j]; 
 
    bool tknum=isdigit(letter);
    bool opnum=isdigit(digit);
    
    
    if(tknum && opnum ){
        challengeop=challengeop+token[j]+output[j];
    }
    else if(!tknum && !opnum ){
        challengeop=challengeop+output[j]+token[j];
    }
    else if(tknum && !opnum ){
        challengeop=challengeop+ output[j]+token[j];
    }
    else if(!tknum && opnum ){
        challengeop=challengeop+ output[j]+token[j];
    }
  stringapp(output,token,challengeop,j+1);
   
 
 return challengeop;
  
}

int main()
{
string input="99946",output="",token="w4kf1svdje23",challengeop="";
cout<<input<<"\n";
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
