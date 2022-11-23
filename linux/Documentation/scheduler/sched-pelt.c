https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/*
 * The following program is used to generate the constants for
 * computing sched averages.
 *
 * ==============================================================
 *		C program (compile with -lm)
 * ==============================================================
 */

#include <math.h>
#include <stdio.h>

#define HALFLIFE 32
#define SHIFT 32

double y;

void calc_runnable_avg_yN_inv(void)
{
	int i;
	unsigned int x;

	/* To silence -Wunused-but-set-variable warnings. */
	printf("static const u32 runnable_avg_yN_inv[] __maybe_unused = {");
	for (i = 0; i < HALFLIFE; i++) {
		x = ((1UL<<32)-1)*pow(y, i);

		if (i % 6 == 0) printf("\n\t");
		printf("0x%8x, ", x);
	}
	printf("\n};\n\n");
}

int sum = 1024;

void calc_runnable_avg_yN_sum(void)
{
	int i;

	printf("static const u32 runnable_avg_yN_sum[] = {\n\t    0,");
	for (i = 1; i <= HALFLIFE; i++) {
		if (i == 1)
			sum *= y;
		else
			sum = sum*y + 1024*y;

		if (i % 11 == 0)
			printf("\n\t");

		printf("%5d,", sum);
	}
	printf("\n};\n\n");
}

int n = -1;
/* first period */
long max = 1024;

void calc_converged_max(void)
{
	long last = 0, y_inv = ((1UL<<32)-1)*y;

	for (; ; n++) {
		if (n > -1)
			max = ((max*y_inv)>>SHIFT) + 1024;
			/*
			 * This is the same as:
			 * max = max*y + 1024;
			 */

		if (last == max)
			break;

		last = max;
	}
	n--;
	printf("#define LOAD_AVG_PERIOD %d\n", HALFLIFE);
	printf("#define LOAD_AVG_MAX %ld\n", max);
//	printf("#define LOAD_AVG_MAX_N %d\n\n", n);
}

void calc_accumulated_sum_32(void)
{
	int i, x = sum;

	printf("static const u32 __accumulated_sum_N32[] = {\n\t     0,");
	for (i = 1; i <= n/HALFLIFE+1; i++) {
		if (i > 1)
			x = x/2 + sum;

		if (i % 6 == 0)
			printf("\n\t");

		printf("%6d,", x);
	}
	printf("\n};\n\n");
}

void main(void)
{
	printf("/* Generated by Documentation/scheduler/sched-pelt; do not modify. */\n\n");

	y = pow(0.5, 1/(double)HALFLIFE);

	calc_runnable_avg_yN_inv();
//	calc_runnable_avg_yN_sum();
	calc_converged_max();
//	calc_accumulated_sum_32();
}
