/*
 * File: 5-sqrt_recursion.c
 */
#include "main.h"
int find_sqrt(int num, int root);
int _sqrt_recursion(int n);
/**
 * find_sqrt - Finds the natural square root of an number
 * @num: The number to find the square root
 * @root: The root to be tested
 *
 * Return: square root
 */
int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);
}
