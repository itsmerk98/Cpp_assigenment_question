// printstar pattern


#include<iostream>
using namespace std;
main()
{
//star pattern 1 



	int i,j;
	for(i=0;i<=5;i++)
	{
	  	for(j=0;j<=i;j++)
	    {
		cout<<"*";
       	}	
       	cout<<endl;
	}	


	//str pattern 2

    cout<<endl<<endl;

	
	for(i=5;i>=0;i--)
	{
	  	for(j=0;j<=i;j++)
	    {
		cout<<"*";
       	}	
       	cout<<endl;
	}


	cout<<endl<<endl;
	
		//str pattern 3
    for(i=5;i>=0;i--)
     	 {
	   	for(j=0;j<=i;j++)
	    	{
		    	cout<<"*";
		    }
		 cout<<endl;
	     } 
}



/*
1.                       3.               2.              4.
*                      *****            *****             *
**                      ****            ****             **
***                      ***            ***             ***
****                      **            **             ****
*****                      *            *             *****

*/




