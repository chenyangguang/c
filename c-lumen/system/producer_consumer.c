#define N 100
int count = 0;

void produce(void)
{
    int item;

    while(TRUE){
        item = produce_item();
        if (count == N) sleep();
        insert_item(item); // 记录将数据放入缓冲区, 略...
        count = count + 1;
        if(count == 1) wakeup(consumer);
    }
}

void consumer(void)
{
    int item;
    while(TRUe) {
        if(count == 0) sleep();
        item = remove_item(); // 从缓冲区取出数据等事项, 略 ...
        count = count - 1;
        if(count == N - 1) wakeup(produce);
        consume_item(item);
    }
}
