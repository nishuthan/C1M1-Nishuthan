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
 * @file stats.h
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author Nishuthan
 * @date   20 Nov 2021
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

void print_statistics(unsigned char *array,int size);
/**
 * @brief This function prints the statistics information
 *
 *   This functio call other functions such as  find_median() to find the median
 *   find_mean() to find the mean find_minimum() to find the minimum find_maximum() to find 
 *   the maximum
 *
 * @param array unsigned charecter pointer of the array
 * @param size  integer value denoting the size of the array

 *
 * @return void
 */

void print_array(unsigned char *array,int size);
/**
 * @brief Prints the given array.
 *
 *   This functio takes an unsigned charecter pointer and an integer.
 *   This function prints the array to the screen.
 *
 * @param array unsigned charecter pointer of the array
 * @param size  integer value denoting the size of the array

 *
 * @return void
 */


int find_mean(unsigned char *array,int size);
/**
 * @brief Find the mean of a dataset
 *
 *   This functio takes an unsigned charecter pointer and an integer.
 *   This function finds the mean from the charecter array and returns the integer. 
 *
 * @param array unsigned charecter pointer of the array
 * @param size  integer value denoting the size of the array

 *
 * @return int
 */

int find_median(unsigned char *array,int size);
/**
 * @brief Find the median of a dataset.
 *
 *   This functio takes an unsigned charecter pointer and an integer.
 *   This function finds the median from the charecter array and returns the integer. 
 *
 * @param array unsigned charecter pointer of the array
 * @param size  integer value denoting the size of the array

 *
 * @return int
 */

int find_minimum(unsigned char *array,int size);
/**
 * @brief Find the minimum of a dataset
 *
 *   This functio takes an unsigned charecter pointer and an integer.
 *   This function finds the minimum from the charecter array and returns the integer. 
 *
 * @param array unsigned charecter pointer of the array
 * @param size  integer value denoting the size of the array

 *
 * @return int
 */

int find_maximum(unsigned char *array,int size);
/**
 * @brief Find the maximum of a dataset
 *
 *   This functio takes an unsigned charecter pointer and an integer.
 *   This function finds the maximum from the charecter array and returns the integer. 
 *
 * @param array unsigned charecter pointer of the array
 * @param size  integer value denoting the size of the array

 *
 * @return int
 */

void sort_array(unsigned char *array,int size);
/**
 * @brief Sorts the given array.
 *
 *   This functio takes an unsigned charecter pointer and an integer.
 *   This function finds the minimum from the charecter array and sorts the array and prints it  
 *   to the screen.
 *
 * @param array unsigned charecter pointer of the array
 * @param size  integer value denoting the size of the array

 *
 * @return void
 */


#endif /* __STATS_H__ */
