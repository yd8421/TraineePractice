
#include <pthread.h>

#include <stdio.h>

#include <stdlib.h>

#include <unistd.h>
 
void* myThreadFun(void* arg) {

    int myid = *((int*)arg);

    printf("Thread %d: Starting\n", myid);

    sleep(2); // Simulate some work

    printf("Thread %d: Exiting\n", myid);

    pthread_exit(NULL);

}
 
int main() {

    int i;

    pthread_t tid[5];

    pthread_attr_t attr;
 
    // Initialize and set thread attributes to create detached threads

    pthread_attr_init(&attr);

    pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_DETACHED);
 
    // Create detached threads

    for (i = 0; i < 5; i++) {

        int* thread_id = malloc(sizeof(int));

        *thread_id = i;

        int rc = pthread_create(&tid[i], &attr, myThreadFun, (void*)thread_id);

        if (rc) {

            printf("ERROR; return code from pthread_create() is %d\n", rc);

            exit(-1);

        }

    }
 
    // Destroy the thread attributes object, as it is no longer needed

    pthread_attr_destroy(&attr);
 
    // Sleep in the main thread to allow detached threads to complete

             sleep(5);       // change it to 1 and see the result
 
   //pthread_join
 
    printf("Main thread: Exiting\n");

    return 0;

}
