#ifndef __LIBTLOAD_PAPI_H__
#define __LIBTLOAD_PAPI_H__

void libtload_papi_thread_init (thread_t *t);
void libtload_papi_init ();
void libtload_papi_thread_finish (thread_t *t);
void libtload_papi_finish ();

#endif
