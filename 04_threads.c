#include <stdio.h>
#include <pthread.h>

void *print(void *arg) {
    (void)arg;
    printf("Hello from the thread\n");
    return NULL;
}

int main(void) {
    pthread_t thread;

    pthread_create(&thread, NULL, print, NULL);
    pthread_join(thread, NULL);

    return 0;
}
