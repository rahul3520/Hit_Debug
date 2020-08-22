//Please add a comment to each lines that has changes and Indicate the changes
#include<stdio.h> // the c library is stdio.h
void main() // return type is void 
{	
	float a,b,c,mx,mi; // data type is float 
	scanf("%f%f%f",&a,&b,&c);
	printf("%.0f\t%.0f\t%.0f\n",a,b,c); //int
	if(a>b)
	{
		if(a>c)
		{
			mx=a;
			if(b>c)	
				mi=c;
			else 
				mi=b;
		}
	}
	else if(b>c)
    	{
		if(b>a) 
		{
			mx=b;
            		if(a>c) 
				mi=c;
			else 
				mi=a;
		}
	}
	else//Please add a comment to each lines that has changes and Indicate the changes
	{
	    
		mx=c;
		if(a>b) 
			mi=b;
		else 
			mi=a;
	    
	}
	printf("Largest is %.0f and smallest is %.0f",mx,mi); //printf and mx,mi
}
//Please add a comment to each lines that has changes and Indicate the changes
/*
Test Cases

Input 1
3 5 7
Output 1
3 5 7
Largest is 7 and smallest is 3

Input 2
7 4 2
Output 2
7 4 2
Largest is 7 and smallest is 2
*/
