#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<unistd.h>
 
struct vargs
{
    long long limit;
    long long answer;
};
 
//long long sum = 0;
void * sum_runner(void * arg)
{
    struct vargs *arg_struct = (struct vargs*) arg;
    long long sum = 0;//stack
    long long i;
    //long long *limit_ptr = (long long *) arg;
    long long limit = arg_struct->limit;
 
    printf("Hello from new thread..\n");
    for(i = 1; i<=limit;i++)
        sum+=i;
    arg_struct->answer = sum;
    printf("New thread exit....\n");
    pthread_exit(0);//can't return local variable address
}
 
int main(int argc, char **argv)
{
    int i;
    if(argc < 2)
    {
        printf("Usage %s <num1> <num2> <num3>\n", argv[0]);
        return(1);
    }
 
 
    long long limit=argc -1;
    struct vargs args[limit];
 
 
    pthread_t tid[limit];
    pthread_attr_t attr;
 
    pthread_attr_init(&attr);
 
    printf("Hello from main..\n");
    for(i = 0; i < limit; i++){
    args[i].limit = atoll(argv[i+1]);
    pthread_create(&tid[i], &attr, sum_runner, &args[i]);
    }
    for(i =0; i < limit; i++)
    {
        pthread_join(tid[i],NULL);
        printf("Sum =%lld \n", args[i].answer);
    }
    //pthread_exit(0);
 
    printf("Main thread exit...");
 
    printf("\n\n");
 
}
