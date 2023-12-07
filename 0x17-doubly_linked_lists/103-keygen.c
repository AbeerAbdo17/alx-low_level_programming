#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Generates and prints passwords
 * @argc: num of argc
 * @argv: array of array
 *
 * Return: 0
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char pss[7], *xv;
	int len = strlen(argv[1]), qw, tp;

	xv = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	tp = (len ^ 59) & 63;
	pss[0] = xv[tp];

	tp = 0;
	for (qw = 0; qw < len; qw++)
		tp += argv[1][i];
	pss[1] = xv[(tp ^ 79) & 63];

	tp = 1;
	for (qw = 0; qw < len; qw++)
		tp *= argv[1][i];
	pss[2] = xv[(tp ^ 85) & 63];

	tp = 0;
	for (qw = 0; qw < len; qw++)
	{
		if (argv[1][qw] > tp)
			tp = argv[1][qw];
	}
	srand(tp ^ 14);
	pss[3] = xv[rand() & 63];

	tp = 0;
	for (qw = 0; qw < len; qw++)
		tp += (argv[1][qw] * argv[1][qw]);
	pss[4] = xv[(tp ^ 239) & 63];

	for (qw = 0; qw < argv[1][0]; qw++)
		tp = rand();
	pss[5] = xv[(tp ^ 229) & 63];

	pss[6] = '\0';
	printf("%s", pss);
	return (0);
}
