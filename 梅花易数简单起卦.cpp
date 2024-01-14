// 梅花易数简单起卦.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
	printf("简体姓名笔画起卦法\n");

		int a, b, c, d, e, f;
		printf("输入姓氏笔画数\n");

		int shanggua;
		scanf_s("%d", &shanggua);
		getchar();

		printf("输入名笔画数\n");

		int xiagua;
		scanf_s("%d", &xiagua);
		getchar();

		int dongyao;
		dongyao = shanggua + xiagua;
		
		int 上卦象;
		int 下卦象;
		int 动爻;

		上卦象 = shanggua % 8;
		下卦象 = xiagua % 8;
		动爻 = dongyao % 6;

		printf("正在运算。。。\n");
		
		if (上卦象==1)
		{
			a = 1;
			b = 1;
			c = 1;

		}
		if (上卦象 == 2)
		{
			a = 0;
			b = 1;
			c = 1;
		}
		if (上卦象 == 3)
		{
			a = 1;
			b = 0;
			c = 1;
		}
		if (上卦象 == 4)
		{
			a = 0;
			b = 0;
			c = 1;
		}
		if (上卦象 == 5)
		{
			a = 1;
			b = 1;
			c = 0;
		}
		if (上卦象 == 6)
		{
			a = 0;
			b = 1;
			c = 0;
		}
		if (上卦象 == 7)
		{
			a = 1;
			b = 0;
			c = 0;
		}
		if (上卦象 == 0)
		{
			a = 0;
			b = 0;
			c = 0;
		}
		if (下卦象 == 1)
		{
			d = 1;
			e = 1;
			f = 1;

		}
		if (下卦象 == 2)
		{
			d = 0;
			e = 1;
			f = 1;
		}
		if (下卦象 == 3)
		{
			d = 1;
			e = 0;
			f = 1;
		}
		if (下卦象 == 4)
		{
			d = 0;
			e = 0;
			f = 1;
		}
		if (下卦象 == 5)
		{
			d = 1;
			e = 1;
			f = 0;
		}
		if (下卦象 == 6)
		{
			d = 0;
			e = 1;
			f = 0;
		}
		if (下卦象 == 7)
		{
			d = 1;
			e = 0;
			f = 0;
		}
		if (下卦象 == 0)
		{
			d = 0;
			e = 0;
			f = 0;
		}
		if (动爻==1)
		{
			f = abs(f - 1);
		}
		if (动爻 == 2)
		{
			e = abs(e - 1);
		}
		if (动爻 == 3)
		{
			d = abs(d - 1);
		}
		if (动爻 == 4)
		{
			c = abs(c - 1);
		}
		if (动爻 == 5)
		{
			b = abs(b - 1);
		}
		if (动爻 == 0)
		{
			a = abs(a - 1);
		}

		int out = a * 100000 + b * 10000 + c * 1000 + d * 100 + e * 10 + f;
		if (out==111111)
		{
			printf("乾为天\n");
		}
		if (out == 0)
		{
			printf("坤为地\n");
		}
		if (out == 10001)
		{
			printf("水雷屯\n");
		}
		if (out == 100010)
		{
			printf("山水蒙\n");
		}
		if (out == 10111)
		{
			printf("水天需\n");
		}
		if (out == 111010)
		{
			printf("天水讼\n");
		}
		if (out == 10)
		{
			printf("地水师\n");
		}
		if (out == 10000)
		{
			printf("地水比\n");
		}
		if (out == 110111)
		{
			printf("风天小畜\n");
		}
		if (out == 111011)
		{
			printf("天泽履\n");
		}
		if (out==111)
		{
			printf("地天奉\n");
		}
		if (out==111000)
		{
			printf("天地否\n");
		}
		if (out==111101)
		{
			printf("天火同人\n");
		}
		if (out==101111)
		{
			printf("天火大有\n");
		}
		if (out==100)
		{
			printf("地山谦\n");
		}
		if (out==1000)
		{
			printf("雷地豫\n");
		}
		if (out==11001)
		{
			printf("泽雷随\n");
		}
		if (out==100110)
		{
			printf("山风蛊\n");
		}
		if (out == 11)
		{
			printf("地泽临\n");
		}
		if (out == 110000)
		{
			printf("风地观\n");
		}
		if (out == 101001)
		{
			printf("火雷噬嗑\n");
		}
		if (out == 100101)
		{
			printf("山火贲\n");
		}
		if (out==100000)
		{
			printf("山地剥\n");
		}
		if (out==1)
		{
			printf("地雷复\n");
		}
		if (out==111001)
		{
			printf("天雷无妄\n");
		}
		if (out == 100111)
		{
			printf("山天大蓄\n");
		}
		if (out==100001)
		{
			printf("山雷颐\n");
		}
		if (out == 11110)
		{
			printf("泽风大过\n");
		}
		if (out==10010)
		{
			printf("坎为水\n");
		}
		if (out==101101)
		{
			printf("离为火\n");
		}
		if (out==11100)
		{
			printf("泽山咸\n");
		}
		if (out == 1110)
		{
			printf("雷风恒\n");
		}
		if (out==111100)
		{
			printf("天山遯\n");
		}
		if (out==1111)
		{
			printf("雷天大壮\n");
		}
		if (out == 101000)
		{
			printf("火地晋\n");
		}
		if (out == 101)
		{
			printf("地火明夷\n");
		}
		if (out==110101)
		{
			printf("风火家人\n");
		}
		if (out==101011)
		{
			printf("火泽睽\n");
		}
		if (out==10100)
		{
			printf("水山蹇\n");
		}
		if (out==1010)
		{
			printf("雷水解\n");
		}
		if (out==100011)
		{
			printf("山泽损\n");
		}
		if (out==110001)
		{
			printf("风雷益\n");
		}
		if (out==11111)
		{
			printf("泽天夬\n");
		}
		if (out==111110)
		{
			printf("天风姤\n");
		}
		if (out==11000)
		{
			printf("泽地萃\n");
		}
		if (out==110)
		{
			printf("地风升\n");
		}
		if (out==11010)
		{
			printf("泽水困\n");
		}
		if (out==10110)
		{
			printf("水风井\n");
		}
		if (out==1101)
		{
			printf("泽火革\n");
		}
		if (out==101110)
		{
			printf("火风鼎\n");
		}
		if (out==1001)
		{
			printf("震为雷\n");
		}
		if (out==100100)
		{
			printf("艮为山\n");
		}
		if (out==110100)
		{
			printf("风山渐\n");
		}
		if (out == 1011)
		{
			printf("雷泽归妹\n");
		}
		if (out==1101)
		{
			printf("雷火丰\n");
		}
		if (out==101100)
		{
			printf("火山旅\n");
		}
		if (out==110110)
		{
			printf("巽为风\n");
		}
		if (out==11011)
		{
			printf("兑为泽\n");
		}
		if (out==110010)
		{
			printf("风水涣\n");
		}
		if (out==10011)
		{
			printf("水泽节\n");
		}
		if (out==110011)
		{
			printf("风泽中孚\n");
		}
		if (out==1100)
		{
			printf("雷山小过\n");
		}
		if (out==10101)
		{
			printf("水火既济\n");
		}
		if (out==101010)
		{
			printf("水火未济\n");
		}
	

	//结束
	getchar();
}
