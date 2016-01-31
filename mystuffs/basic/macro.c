#include <stdio.h>
#include <syslog.h>
#define M_MSG_LOG(priority, msg, arg...)\
     syslog (priority, "%s:%s():%d: "msg, __FILE__, __func__, __LINE__, ##arg);\
     fprintf (stderr, "%s:%s():%d: "msg, __FILE__, __func__, __LINE__, ##arg);\

int main()
{
	M_MSG_LOG (LOG_CRIT, "name '%s' number '%d'\n", "prasanna",123);
	return 0;
}
