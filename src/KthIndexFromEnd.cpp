/*
OVERVIEW: Given a string, return the letter at Kth index from the end of the string.
E.g.: Input: "qwertyui", 3. Output: 't' (index starting from zero).

INPUTS: A string and value of K.

OUTPUT: Return the letter at Kth index from the end of the string (index starting from zero).

ERROR CASES: Return '\0' for invalid inputs.

NOTES:
*/

char KthIndexFromEnd(char *str, int K) {
	int i,len=0;
	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	
	if (K > len && K < 0)
		return '\0';
	else
		return str[((len-1) -K)];
	
}