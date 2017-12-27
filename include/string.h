#ifndef STRING_H
#define STRING_H

#include "types.h"
uint8 strlength(string ch)
{
	uint8 i=1;
	while(ch[i++]);
	return --i;

}
uint8 streql(string ch1,string ch2)
{
	uint8 result=1;
	uint8 size=strlength(ch1);
	if(size!=strlength(ch2)) result=0;
	else
	{
	 uint8 i=0;
	 for(;i<size;i++)
          {  
             if(ch1[i]!=ch2[i]) result=0;
		

 	  }
	return result;

}

}
#endif
