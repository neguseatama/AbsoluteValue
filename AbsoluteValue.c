/*
 C言語による絶対値の出力
 https://neguse-atama.hatenablog.com
*/
#include <stdio.h>
int main(void)
{
    int number,absoult_value1,again;
    double absoult_value2;
    do{
        printf("絶対値を出力します。\n");
        printf("1.整数値を入力\n2.小数値を入力\n");
        printf("以上から1,2のどちらかを選び、入力してください:");
        scanf("%d",&number);
        if(number==1){
            printf("整数値を入力してください:");
            scanf("%d",&absoult_value1);
            if(absoult_value1>=0){
                printf("求める絶対値は\n|%d|=%dです。\n",absoult_value1,absoult_value1);
            }else if(absoult_value1<0){
                printf("求める絶対値は\n|%d|=%dです。\n",absoult_value1,-1*absoult_value1);
            }
        }else if(number==2){
            printf("小数値を入力してください:");
            scanf("%lf",&absoult_value2);
            if(absoult_value2>=0){
                printf("求める絶対値は\n|%lf|=%lfです。\n",absoult_value2,absoult_value2);
            }else if(absoult_value2<0){
                printf("求める絶対値は\n|%lf|=%lfです。\n",absoult_value2,-1*absoult_value2);
            }
        }else if(number!=1 && number!=2){
            printf("1,2以外の数値を入力しないでください。");
        }
        printf("入力をやり直しますか。・・・(0)はい (1)いいえ:");
        scanf("%d",&again);
    }while(again==0);
    return (0);
}