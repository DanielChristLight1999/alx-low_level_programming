/**
 * main - Entry point of the program
 * This program uses putchar to print
 * all the alphabets in lowercase
 */
int main(void)
{
	char letter = 'a';
	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
