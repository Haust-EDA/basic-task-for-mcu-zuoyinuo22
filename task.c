

void delay_ms(unsigned int x)  // 延时函数
{
    unsigned int i,j;
    if(x==1000)
    {
        for(i=0;i<19601;i++)//延时1s
        {
            for(j=5;j>0;j--);
        }
    }
    else while(x--)for(j=115;j>0;j--);
}

// tips: 原理图当中led为低电平点亮，比如点亮LED2,代码为： P0 = 0xFE (1111 1110)


int main(void)
{
  P0=0xFE;delay_ms(500);
  P0=0xFD;delay_ms(500);
  P0=0xFB;delay_ms(500); 
  P0=0xF7;delay_ms(500);  
  P0=0xEF;delay_ms(500);
  P0=0xDF;delay_ms(500);
  P0=0xBF;delay_ms(500);
  P0=0x7F;delay_ms(500);
    

 

    return 0;
}

