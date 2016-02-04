#include <stdio.h>
#include <sys/resource.h>
#include <sys/time.h>

/**
 * Returns number of seconds between b and a.
 */
double calculate(const struct rusage* b, const struct rusage* a)
{
	printf("hai\n");
    if (b == NULL || a == NULL)
    {
        return 0.0;
    }
    else
    {
		printf("%lf %lf %lf %lf\n",
			a->ru_utime.tv_sec * 1000000 + a->ru_utime.tv_usec,
			b->ru_utime.tv_sec * 1000000 + b->ru_utime.tv_usec,
			a->ru_stime.tv_sec * 1000000 + a->ru_stime.tv_usec,
			b->ru_stime.tv_sec * 1000000 + b->ru_stime.tv_usec);
			
        return ((((a->ru_utime.tv_sec * 1000000 + a->ru_utime.tv_usec) -
                 (b->ru_utime.tv_sec * 1000000 + b->ru_utime.tv_usec)) +
                ((a->ru_stime.tv_sec * 1000000 + a->ru_stime.tv_usec) -
                 (b->ru_stime.tv_sec * 1000000 + b->ru_stime.tv_usec)))
                / 1000000.0);
    }
}

int main()
{
	// structs for timing data
    struct rusage before, after;
    double ti_load = 0.0;
    int i = 0;
    
	getrusage(RUSAGE_SELF, &before);
	for(i=0;i<1000000000;i++);
	getrusage(RUSAGE_SELF, &after);

	// calculate time to load dictionary
	ti_load = calculate(&before, &after);
	
	printf("TIME IN load:         %.2f\n", ti_load);
	    
	return 0;
}
