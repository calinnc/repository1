#include "../headers.h"
#define No_Threads 2

int count = 0;
GMutex *mutex = NULL;


void* counting_func(int* arg)
{
	g_mutex_lock(&mutex);
  	count += 1;
  	printf("%d\n", count);
  	g_mutex_unlock(&mutex);
}

int main()
{
	int i;
	GThread *thread[No_Threads];
	mutex = g_mutex_new();
	
	for(i = 0; i< No_Threads ; i++)
		thread[i] = g_thread_create(&counting_func, &count, TRUE, NULL);
		
	for(i = 0; i< No_Threads ; i++)
		g_thread_join(thread[i]);
		
	g_mutex_free(mutex);
	
return 0;
}
