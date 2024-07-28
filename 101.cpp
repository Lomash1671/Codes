//STRING MANIPULATION APPROACH 2
#include<iostream>

#include<vector>

using namespace std;

int main()

{

  cout<<"Enter the string: "<<endl;

  string s;

  getline(cin, s);

  s+=" ";

  vector<string> v;

  string s1="";

  for(char i: s)

  {

    if(i!=' ')

    {

      s1+=i;

    }

    else{

      v.push_back(s1);

      s1="";

    }

  }

  for( auto i: v)

  {

    int count =0;

    for(auto j:v)

    {

      if(i==j)

      {

        count ++;

      }

    }

    if(count>1)

    {

      cout<<i<<" : "<<count<<endl;

    }

  }

}

