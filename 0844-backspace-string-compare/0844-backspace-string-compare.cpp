class Solution 
{   public:
    bool backspaceCompare(string s, string t) 
	{    stack<char> stackS;
	     stack<char> stackT;
	     for(char ch : s)
	     {   if(ch != '#')
	          {   stackS.push(ch);
  			  }
  			  else if(! stackS.empty() )
  			  {   stackS.pop();
			  } 
		 }//end of for loop
        
        for(char ch : t)
	     {   if(ch != '#')
	          {   stackT.push(ch);
  			  }
  			  else if(! stackT.empty() )
  			  {   stackT.pop();
			  } 
		 }//end of for loop
		 
		 bool answer = stackS == stackT;
		 return answer;
    }//end of backspaceCompare()
};