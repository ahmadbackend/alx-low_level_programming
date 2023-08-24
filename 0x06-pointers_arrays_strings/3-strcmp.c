/**
 * _strcmp - check the code
 *@s2: right side string
 *@s1: left side string
 * Return: Always 0.
*/
int _strcmp(char *s1, char *s2)
	{
		int cha, lefCount, rightCount, max;

		lefCount = 0;
		rightCount = 0;
		while (s1[lefCount])
			lefCount++;
		while (s2[rightCount])
			rightCount++;
		if (rightCount >= lefCount)
			max = rightCount;
		else
			max = lefCount;

		for ( cha = 0 ; cha < max; cha++)
		{
			if (s1[cha] > s2[cha])
				return (s1[cha] - s2[cha]);
			else if (s1[cha] < s2[cha])
				return (s1[cha] - s2[cha]);
			else if (s1[cha] == '\0')
				return (s2[cha]);
			else if(s2[cha] == '\0')
				return (s1[cha]);
		}
		return (0);
	}
