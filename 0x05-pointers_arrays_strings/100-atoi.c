#include "main.h"
/**
 *_atoi - converts string to integer
 *@s: pointer to string
 *
 *Return: converted value or 0
 */
int _atoi(char *s)
{
	unsigned int count, size = 0, oi = 0, pn = 1, m = 1, i;

	for (count = 0; *(s + count) != '\0'; count++)
	{
		if (size > 0 && (s[count] < '0' || s[count] > '9'))
			break;
		if (s[count] == '-')
			pn *= -1;
		if (s[count] >= '0' && s[count] <= '9')
		{
			if (size > 0)
				m *= 10;
			size++;
		}
	}
	for (i = count - size; i < count; i++)
	{
		oi = oi + ((s[i] - 48) * m);
		m /= 10;
	}
	return (oi * pn);
}
