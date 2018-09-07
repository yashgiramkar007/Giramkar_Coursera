
/**
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * This file contaions function declaration for the functions in stats.c
 *
 * @author Yash Giramkar
 * @date 02/09/2018
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief This function prints the statistics of given data
 *
 * < The statistics of the given data include mean,median,maxima,minima and the sorted array of given data>
 *
 * @param <unsigned char* array> < Array of the given data>
 * @param <unsigned char L_ucLength> <Length of the given data to be analysed>
 * @return <NULL>
 */
void  print_statistics(unsigned char* array,unsigned char L_ucLength);

/**
 * @brief Prints the input array of Data
 *
 * <Prints the exact number of characters from a given input array>
 *
 * @param <unsigned char* array> < Array of the given data>
 * @param <unsigned char L_ucLength> <Length of the given data to be analysed>
 *
 * @return <NULL>
 */ 
void print_array(unsigned char* array, unsigned char L_ucLength);

/**
 * @brief <Finds median of the given array of data>
 *
 * <Finds median of the given array of sorted data>
 *
 * @param <unsigned char* array> < Array of the given data>
 * @param <unsigned char L_ucLength> <Length of the given data to be analysed>
 *
 * @return <Returns the Median Value of the input sorted given array>
 */
unsigned char find_median(unsigned char* array, unsigned char L_ucLength);

/**
 * @brief <Finds Mean of the given array of Data>
 *
 * <Finds Mean of the given Array of Data>
 *
 * @param <unsigned char* array> < Array of the given data>
 * @param <unsigned char L_ucLength> <Length of the given data to be analysed>
 *
 * @return <Returns Average of the given data>
 */
unsigned char find_mean(unsigned char* array, unsigned char L_ucLength);


/**
 * @brief <Finds Maxima of the given array of Data>
 *
 * <Finds Maxima of the given Array of Data>
 *
 * @param <unsigned char* array> < Array of the given data>
 * @param <unsigned char L_ucLength> <Length of the given data to be analysed>
 *
 * @return <Returns Maximum of the given data>
 */
unsigned char find_maximum(unsigned char* array, unsigned char L_ucLength);

/**
 * @brief <Finds Mean of the given array of Data>
 *
 * <Finds Minima of the given Array of Data>
 *
 * @param <unsigned char* array> < Array of the given data>
 * @param <unsigned char L_ucLength> <Length of the given data to be analysed>
 *
 * @return <Returns Minima of the given Data>
 */
unsigned char find_minimum(unsigned char* array, unsigned char L_ucLength);

/**
 * @brief <Sorts an  array of Data>
 *
 * <Sorts the given Array of Data>
 *
 * @param <unsigned char* array> < Array of the given data>
 * @param <unsigned char L_ucLength> <Length of the given data to be analysed>
 *
 * @return <Returns NULL>
 */
void sort_array(unsigned char* array, unsigned char L_ucLength);
 
 
 

#endif /* __STATS_H__ */
