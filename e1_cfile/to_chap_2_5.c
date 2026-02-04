// 几点说明
/*
1.这里为了紧凑，把每一章习题的主函数main相应改为章节编号，比如chapter_1_4
2.理论思考题采用注释形式写在程序中
*/
// 1.1 程序和编程语言
// 理论笔记：指令集、体系结构指的都是机器语言
// 思考题1 语言的解释执行相比编译执行有何优缺点
/* 优点：
1.程序直接进入解释环节，不需要花费编译的时间即可运行
2.做平台迁移时不需要重新编译，平台无关性更好
缺点：
1.解释型语言程序在多次运行时需要重复进行翻译操作，而编译型语言只需要做一次翻译*/
// 1.3 程序的调试
/*编译时错误：语法错误
运行时错误：生成可执行文件但会导致程序崩溃
逻辑错误和语义错误：由于没分析清楚程序的逻辑，功能不是真正想要的*/


#include <stdio.h>
int chap_1_4(void){
    printf("Hello, world.\n");
    // 如果写printf(1),会报错，passing argument 1 of 'printf makes pointer from integer without a cast'
    // 如果写printf(0),则会报warning: null format string
    // printf()不能传入整型,正确写法应为
    // printf("%d", 1);
    return 0;
}

int chap_2_1(){
    /*注释不能嵌套使用。
      编译器只会把第一个"* /"当作注释(空格是因为写在程序里面，防止报错)
    */
    // printf("Hello\fworld\vhello world"); 输出是
    /* hello
       world
       hello world
    */
    /* Windows使用\r\n做行分隔符
       Linux使用\n做行分隔符
    */
    return 0;
}

int chap_2_2(){
    printf("%c", "\?");
    // printf("%c", "\%"); 提示"\%"为char *即字符串类型
    // 也可以用"\%"表示百分号字符
    // 习题
    printf("%c", '%');
    return 0;
}

void chap_2_3_4(){
    int hour = 11;//初始化
    char firstletter;
    firstletter = 'a';//赋值
    //标识符： a#, 3a, _Complex非法,_1合法,尽量不要使用下划线开头
    return;
}

int chap_2_5(int x, int n){
    int hour, minute;
    int total_minute = hour*60+minute;//=从右到左算
    int q = -17 / 4; // -4:向0取整
    //取正整数除法的ceil
    //假设x和n均为int类型
    //习题
    return (x/n) + (x%n ? 1 : 0);
}

int main(){
    return 0;
}
