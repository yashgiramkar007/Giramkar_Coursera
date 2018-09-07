#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

unsigned char G_ucSorted_Array[SIZE];




void main() {

  unsigned char test[SIZE] = { 34,201,190,154,8,194,2,6,114,88,45,76,123,87,25,23,200,122,150,90,92,87,177,244,201,6,12,60,8,2,5,67,7,87,250,230,99,3,100,90};

  /* Other Variable Declarations Go Here */
  
  /* Statistics and Printing Functions Go Here */
  printf("The Given data is:\n");
  print_array(&test[0],SIZE);
  
  print_statistics(&test[0],SIZE);
  
}

/* Add other Implementation File Code Here */
// Function to print array 
void print_array(unsigned char* array, unsigned char L_ucLength)
{
    unsigned char L_ucLoop=0;
    for(L_ucLoop=0;L_ucLoop<L_ucLength;L_ucLoop++)
    {
        printf("%d",*(array+L_ucLoop));
        if(L_ucLoop<L_ucLength-1)
            printf(",");
        
    }
        
    printf("\n");
}

//Function to find find Statistics
void  print_statistics(unsigned char* array,unsigned char L_ucLength)
{
  unsigned char L_ucMedian=0;
  unsigned char L_ucMean=0;
  unsigned char L_ucMaxima=0;
  unsigned char L_ucMinima=0;
  
  sort_array(array,L_ucLength);
  printf("\nThe Sorted array for given array is:\n");
  print_array(&G_ucSorted_Array[0],L_ucLength);
  
  L_ucMedian=find_median(&G_ucSorted_Array[0],L_ucLength);
  printf("\nThe Median of the above data is:%d",L_ucMedian);
  
  L_ucMean= find_mean(&G_ucSorted_Array[0],L_ucLength);
  printf("\nThe Mean of the above data is:%d",L_ucMean);
  
  L_ucMaxima=find_maximum(&G_ucSorted_Array[0],L_ucLength);
  printf("\nThe Maximum value in the above data is:%d",L_ucMaxima);
  
  L_ucMinima=find_minimum(&G_ucSorted_Array[0],SIZE);
  printf("\nThe Minimum value in the above data is:%d",L_ucMinima);
}

 unsigned char find_median(unsigned char* array, unsigned char L_ucLength)
 {
    unsigned char L_ucMedian;
    L_ucLength = (L_ucLength+1) / 2;
    L_ucMedian = *(array+L_ucLength);
    return L_ucMedian;
 }

unsigned char find_mean(unsigned char* array, unsigned char L_ucLength)
{
    unsigned int L_uiSum=0;
    unsigned char L_ucLoop,L_ucAverage=0;
	for(L_ucLoop=0;L_ucLoop<L_ucLength;L_ucLoop++)
	{
	    L_uiSum+=*(array+L_ucLoop);
	    
	}
	L_ucAverage=L_uiSum/L_ucLength;
	return L_ucAverage; 
}


unsigned char find_maximum(unsigned char* array, unsigned char L_ucLength)
{
    unsigned char L_ucMaxima=*array,L_ucLoop;
    
    for(L_ucLoop=0;L_ucLoop<L_ucLength;L_ucLoop++)
    {
        if(L_ucMaxima<(*(array+L_ucLoop)))
        {
            L_ucMaxima=*(array+L_ucLoop);
        }
    }
    
    return L_ucMaxima;
        
}
unsigned char find_minimum(unsigned char* array, unsigned char L_ucLength)
{
	unsigned char L_ucMinima=*array,L_ucLoop;
    
    for(L_ucLoop=0;L_ucLoop<L_ucLength;L_ucLoop++)
    {
        if(L_ucMinima>(*(array+L_ucLoop)))
        {
            L_ucMinima=*(array+L_ucLoop);
        }
    }
    
    return L_ucMinima;
}
void sort_array(unsigned char* array, unsigned char L_ucLength)
{
   unsigned char L_uc_Loopi,L_uc_Loopj,temp;

   for(L_uc_Loopi = 0;L_uc_Loopi < L_ucLength-1;L_uc_Loopi++) 
   {
      for(L_uc_Loopj = 0;L_uc_Loopj < L_ucLength-L_uc_Loopi-1;L_uc_Loopj++) {
         if(*(array+L_uc_Loopj) < *(array+L_uc_Loopj+1))
         {
             temp=*(array+L_uc_Loopj);
             *(array+L_uc_Loopj)=*(array+L_uc_Loopj+1);
             *(array+L_uc_Loopj+1)=temp;
         }
      }
   }
   
   for(L_uc_Loopi=0;L_uc_Loopi<L_ucLength;L_uc_Loopi++)
   {
        
        G_ucSorted_Array[L_uc_Loopi]=*(array+L_uc_Loopi);
   }
}

