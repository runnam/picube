#include "jimtcl/jim.h"

void JimSetArgv(Jim_Interp *, int, char *const argv[]);
Jim_Interp *jim_init(void);

struct anim
{
	char *name;
	int argc;
	void *func;
	char *descr;
};

