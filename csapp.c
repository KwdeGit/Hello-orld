#include "Csapp.h"
void Pthread_create(pthread_t *tidp, pthread_attr_t *attrp, 
		    void * (*routine)(void *), void *argp) 
{
    int rc;

    if ((rc = pthread_create(tidp, attrp, routine, argp)) != 0)
	err_print("Pthread_create error,,ret  = %d",rc);
}

void Pthread_detach(pthread_t tid) {
    int rc;

    if ((rc = pthread_detach(tid)) != 0)
	err_print("pthread_detach error,,ret  = %d",rc);
}