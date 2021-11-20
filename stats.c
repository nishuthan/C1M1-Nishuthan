/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c
 * @brief simple application that performs statistical analytics on a dataset
 *
 * This Application performs
 *	-Prints statistics of an array (minimum, maximum, mean, median)
 *	-prints the array
 *	-sort the array
 *
 *
 * @author Nishuthan S
 * @date   20 Nov 2021
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  
  /* Statistics and Printing Functions Go Here */

  printf("Unsorted Array:\n");

  print_array(test,SIZE); //prints the original array.


  print_statistics(test,SIZE); //prints statistical information.

  printf("Sorted Array:\n");

  sort_array(test,SIZE);


}

//Function to print statistical information (Median, Mean, Maximum, Minimum)
void print_statistics(unsigned char *array,int size){
  printf("Statistics:\n");
  printf("Median  :%i\n",find_median(array,SIZE));  //prints median
  printf("Mean    :%i\n",find_mean(array,SIZE));    //prints mean
  printf("Maximum :%i\n",find_maximum(array,SIZE)); //prints maximum
  printf("Minimum :%i\n",find_minimum(array,SIZE)); //prints minimum

}

//Prints the given array
void print_array(unsigned char *array,int size){
   
   for(int i = 0; i < size; i++){
	printf("[%i]:%d \t",i+1, array[i] );
        if ((i+1)%5==0)
	  printf("\n"); //new line every 5 numbers
   }
   printf("\n"); //newline  after printing the array

}

//Finds median from array
int find_median(unsigned char *array,int size){

  unsigned char sorted_array[size];

	for(int i = 0; i < size; i++)
		sorted_array[i] = array[i];

	unsigned char temp;
	for(int i = 0; i < size; i++){
		for(int j = i+1; j < size; j++){
			if( sorted_array[i] > sorted_array[j] ){
				temp = sorted_array[i];
				sorted_array[i] = sorted_array[j];
				sorted_array[j] = temp;
			}
		}
	}

if ( size%2 == 0 ){
		float a = (float)(sorted_array[(size/2)-1]);
		float b = (float)(sorted_array[(size/2)]);
		float med = (a+b)/2.0;
		return med;
	}
	else
		return sorted_array[(size)/2];
}

//finds_mean from array
int find_mean(unsigned char *array,int size){
  float mean = 0;
	for(int i = 0; i < size; i++){
		mean += array[i];
	}
	mean = mean / size;
	return mean;
}

//finds maximum from array
int find_maximum(unsigned char *array,int size){
  unsigned char max = array[0];

	for(int i = 1; i < size; i++){
		if ( array[i] > max )
			max = array[i];
	}
	return max;
}


//finds minimum from array
int find_minimum(unsigned char *array,int size){
unsigned char min = array[0];
	for(int i = 1; i < size; i++){
		if ( array[i] < min )
			min = array[i];
	}
	return min;
}

//sorts the given array
void sort_array(unsigned char *array,int size){

unsigned char temp;
	for(int i = 0; i < size; i++){
		for(int j = i+1; j < size; j++){
			if( array[i] > array[j] ){
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
  
  for (int i=0;i<size;i++){
	printf("[%i]:%i\t",i+1,array[i]);
        if ((i+1)%5==0)
	  printf("\n"); //new line every 5 numbers
  }
  
}







