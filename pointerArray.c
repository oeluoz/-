/*
二维数组动态申请内存，静态申请内存
数组中指针的偏移
*/
int pointerArray(){
    int array[3][4]={0};
    printf("%d\n",array);
    printf("%d\n",*array);

    printf("%d\n",array+1);
    printf("%d\n",&array[1]);
    printf("%d\n\n",*(array+1));
    

    int array1[3]={0,1,1};
    printf("%d\n",array1+1);
    printf("%d\n",*(array1+1));
    printf("%d\n",array1[0]);
    printf("%d\n",&array1[1]);

    return 0;
}