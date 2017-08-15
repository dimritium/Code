#include<bits/stdc++.h>
#include<pthread.h>
#include<unistd.h>
using namespace std;
void* myThread(void *varg){
    sleep(0.001);
    printf("Printing quiz");
    return NULL;
}
int main(){
    pthread_t tid;
    pthread_create(&tid, NULL, myThread, NULL);
    pthread_join(tid, NULL);
    printf("After thread");
    exit(0);
}