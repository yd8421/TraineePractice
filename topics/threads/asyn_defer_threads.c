#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <pthread.h>
 
// Thread function
void *thread_proc(void *args)
{
    int rc = -1;
    int i = 0;
 
    rc = pthread_setcancelstate(PTHREAD_CANCEL_ENABLE, NULL);
    if (rc == 0)
    {
        // Choose between deferred or asynchronous cancellation
         rc = pthread_setcanceltype(PTHREAD_CANCEL_DEFERRED, NULL); // Deferred cancellation
        //rc = pthread_setcanceltype(PTHREAD_CANCEL_ASYNCHRONOUS, NULL); // Asynchronous cancellation
    }
    //sleep(4); // Cancellation point for deferred cancellation
 
    for (i = 0; i >= 0; i++)
    {
        printf("\n %d", i);
     //    sleep(1); // Cancellation point for deferred cancellation
        if (i == 50)
        {
            break;
        }
    }
    printf("\n to exit child");
 
    pthread_exit(NULL);
}
 
int main()
{
    pthread_t tid;
    int *status = NULL;
    int rc = pthread_create(&tid, NULL, thread_proc, NULL);
    // Error handling omitted for simplicity
    // sleep(4);
    printf("\n To cancel child thread");
    rc = pthread_cancel(tid);
    if (rc == 0)
    {
        printf("\n Thread cancelled successfully");
    }
    else
    {
        printf("\n thread cancel failed with err:%d", rc);
    }
 
    rc = pthread_join(tid, (void**)&status);
 
    if (status == PTHREAD_CANCELED)
    {
        printf("\n Thread cancelled successfully");
    }
    return 0;
}
