#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int arrgc,char *argv[])
        {
                char *str1,a[5];
                int i=1000;
                while(1){
                str1=server(80,"42.96.164.52","api.yeelink.net","31054cd8bd56c3f756544c3daed9793e","14565","25008","GET","",1);
                a[0]=is_sensor(str1);
                (int) a;
                a[1]=a[0]-48;
                if(a[1]==0) LED(0,1,1,0);
                else LED(0,1,1,1);
                //return 0;
                }

        }
