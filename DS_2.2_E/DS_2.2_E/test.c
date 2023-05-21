#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//§2.2 练习题
//练习1
//从顺序表中删除具有最小值的元素（假设唯一）
//并由函数返回被删元素的值
//空出的位置由最后一个元素填补
//若顺序表为空，则显示出错信息并退出运行

//#define MaxSize 10
////定义一个顺序表
//typedef struct
//{
//	int data[MaxSize];
//	int length;
//}SqList;
//
////寻找L中最小元素的下标
//int GetminList(SqList L)
//{
//	int value = 0;
//	for (int i = 0; i < L.length-1; i++)
//	{
//		if (L.data[value] < L.data[i + 1])
//			continue;
//		else
//			value = i + 1;
//	}
//	return value;
//}
//
//int main()
//{
//	SqList L = { {13,2,79,4,905},5 };
//	int ret = GetminList(L);
//	/*printf("L中的最小元素为：%d\n", L.data[ret]);*/
//	L.data[ret] = L.data[L.length - 1];
//	L.length--;
//	/*for (int i = 0; i < L.length; i++)
//	{
//		printf("%d ", L.data[i]);
//	}	*/
//	return 0;
//}


//练习2
//设计一个高效算法，将顺序表L的所有元素逆置
//要求算法的空间复杂度为O(1)

//#define MaxSize 10
//typedef struct
//{
//	int data[MaxSize];
//	int length;
//}SqList;
//
////将L中的所有元素逆置
//void ReverseList(SqList* L)
//{
//	for (int i = 0; i <= L->length / 2; i++)
//	{
//		int tmp = L->data[i];
//		L->data[i] = L->data[L->length - i - 1];
//		L->data[L->length - i - 1] = tmp;
//	}
//}
//
//int main()
//{
//	SqList L = { {1,2,3,4,5},5 };
//	ReverseList(&L);
//	for (int j = 0; j < L.length; j++)
//		printf("data[%d] = %d\n", j, L.data[j]);
//	return 0;
//}


//练习3
//对长度为n的顺序表L，编写一个时间复杂度为O(n)
//空间复杂度为O(1)的算法
//该算法删除线性表中所有值为x的数据元素

//错误示范
//#define MaxSize 10
//typedef struct
//{
//	int data[MaxSize];
//	int length;
//}SqList;
//
//void ListDelete(SqList* L, int x)
//{
//	for (int i = 0; i < L->length; i++)
//	{
//		if (L->data[i] == x)
//		{
//			for (int j = i + 1; j < L->length - 1; j++)
//			{
//				L->data[j] = L->data[j + 1];
//			}
//			L->length--;
//		}
//	}
//}
//
//int main()
//{
//	SqList L = { {1,2,3,2,5},5 };
//	ListDelete(&L, 2);
//	for (int i = 0; i < L.length; i++)
//	{
//		printf("data[%d] = %d\n", i, L.data[i]);
//	}
//	return 0;
//}

//正确解答1
//用k记录顺序表L中不等于x的元素个数
//（即需要保存的元素个数）
//扫描时将不等于x的元素移动到下标k的位置，并更新k值
//扫描结束后修改L的长度
//#define MaxSize 10
//typedef struct
//{
//	int data[MaxSize];
//	int length;
//}SqList;
//
//void ListDelete(SqList* L, int x)
//{
//	int k = 0;//记录值不等于x的元素个数
//	for (int i = 0; i < L->length; i++)
//	{
//		if (L->data[i] != x)
//		{
//			L->data[k] = L->data[i];
//			k++;//不等于x的元素增加1
//		}
//	}
//	L->length = k;//顺序表L的长度等于k
//}
//
//int main()
//{
//	SqList L = { {1,2,2,2,5},5 };
//	ListDelete(&L, 2);
//	for (int i = 0; i < L.length; i++)
//	{
//		printf("data[%d] = %d\n", i, L.data[i]);
//	}
//	return 0;
//}

//正确解答2
//用k记录顺序表L中等于x的元素个数，边扫描边统计k
//并将不等于x的元素前移k个位置
//扫描结束后修改L的长度
//#define MaxSize 10
//typedef struct
//{
//	int data[MaxSize];
//	int length;
//}SqList;
//
//void ListDelete(SqList* L, int x)
//{
//	int k = 0;//记录值等于x的元素个数
//	int i = 0;
//	while (i < L->length)
//	{
//		if (L->data[i] == x)
//			k++;
//		else
//			L->data[i - k] = L->data[i];
//			当前元素前移k个位置
//		i++;
//	}
//	L->length = L->length - k;
//}
//
//int main()
//{
//	SqList L = { {1,2,2,2,5},5 };
//	ListDelete(&L, 2);
//	for (int i = 0; i < L.length; i++)
//	{
//		printf("data[%d] = %d\n", i, L.data[i]);
//	}
//	return 0;
//}


//练习4
//从有序顺序表中删除其值在给定值s与t之间(s<t)的所有元素
//若s或t不合理或顺序表为空，则显示出错信息并退出运行

//My Answer
//#define MaxSize 10
//typedef struct
//{
//	int data[MaxSize];
//	int length;
//}SqList;
//
//ListDelete(SqList* L, int s, int t)
//{
//	int i = 0;
//	int k = 0;//记录不处于
//	for (int i = 0; i < L->length; i++)
//	{
//		if (L->data[i]<s || L->data[i]>t)
//		{
//			L->data[k] = L->data[i];
//			k++;
//		}
//	}
//	L->length = k;
//}
//
//int main()
//{
//	SqList L = { {1,2,3,4,5,7},6 };
//	ListDelete(&L, 2, 4);
//	for (int i = 0; i < L.length; i++)
//	{
//		printf("data[%d] = %d\n", i, L.data[i]);
//	}
//}

//Given Answer
//因为是有序表，所以删除的元素必然是相连的整体
//算法思想：
//先寻找值大于或等于s的第一个元素
//（第一个删除的元素）
//然后寻找值大于t的第一个元素
//（最后一个删除的元素的下一个元素）
//要将这段元素删除，只需直接将后面的元素前移
//#define MaxSize 10
//typedef struct
//{
//	int data[MaxSize];
//	int length;
//}SqList;
//
//ListDelete(SqList* L, int s, int t)
//{
//	int a = 0;
//	int b = 0;
//	寻找值大于或等于s的第一个元素下标
//	for (int i = 0; i < L->length && L->data[i] < s; i++)
//	{
//		a++;//1
//	}
//	寻找值大于t的第一个元素下标
//	for (int j = a; j < L->length && L->data[j] <= t; j++)
//	{
//		b = j + 1;//4
//	}
//	for (; b < L->length; a++, b++)
//	{
//		L->data[a] = L->data[b];
//	}
//	L->length = a;
//}
//
//int main()
//{
//	SqList L = { {1,2,3,4,5,7},6 };
//	ListDelete(&L, 2, 4);
//	for (int i = 0; i < L.length; i++)
//	{
//		printf("data[%d] = %d\n", i, L.data[i]);
//	}
//}


//练习5
//从顺序表中删除其值在给定值s与t之间(s<t)的所有元素
//若s或t不合理或顺序表为空，则显示出错信息并退出运行

//#define MaxSize 10
//typedef struct
//{
//	int data[MaxSize];
//	int length;
//}SqList;
//
//ListDelete(SqList* L, int s, int t)
//{
//	int i = 0;
//	int k = 0;//记录不处于
//	for (int i = 0; i < L->length; i++)
//	{
//		if (L->data[i]<s || L->data[i]>t)
//		{
//			L->data[k] = L->data[i];
//			k++;
//		}
//	}
//	L->length = k;
//}
//
//int main()
//{
//	SqList L = { {1,2,3,4,5,7},6 };
//	ListDelete(&L, 2, 4);
//	for (int i = 0; i < L.length; i++)
//	{
//		printf("data[%d] = %d\n", i, L.data[i]);
//	}
//}


//练习6
//从有序顺序表中删除所有其值重复的元素
//使表中所有元素的值均不同

//#define MaxSize 10
//typedef struct
//{
//	int data[MaxSize];
//	int length;
//}SqList;
//
//void ListDelete(SqList* L)
//{
//	int i, j;//i存储第一个不相同的指针，j为工作指针
//	for (i = 0, j = 1; j < L->length; j++)
//	{
//		查找下一个与上个元素值不同的元素
//		if (L->data[i] != L->data[j])
//			找到后，将元素前移
//			L->data[++i] = L->data[j];
//	}
//	L->length = i + 1;
//}
//
//int main()
//{
//	SqList L = { {1,1,2,3,3,3,4,5,5,7},10 };
//	ListDelete(&L);
//	for (int i = 0; i < L.length; i++)
//	{
//		printf("data[%d] = %d\n", i, L.data[i]);
//	}
//}


//练习7
//将两个有序顺序表合并为一个新的有序顺序表
//并由函数返回结果顺序表

//#define MaxSize 10
//typedef struct
//{
//	int data[MaxSize];
//	int length;
//}SqList;
//
//SqList ListAdd(SqList* L1, SqList* L2)
//{
//	SqList L;
//	int i = 0, j = 0, k = 0;
//	while (i < L1->length && j < L2->length)
//	{
//		if (L1->data[i] <= L2->data[j])
//			L.data[k++] = L1->data[i++];
//		else
//			L.data[k++] = L2->data[j++];
//	}
//	while (i < L1->length)
//		L.data[k++] = L1->data[i++];
//	while (j < L2->length)
//		L.data[k++] = L2->data[j++];
//	L.length = k;
//	return L;
//}
//
//int main()
//{
//	SqList L1 = { {1,2,4,5,7},5 };
//	SqList L2 = { {2,6,9},3 };
//	SqList L = ListAdd(&L1, &L2);
//	for (int i = 0; i < L.length; i++)
//	{
//		printf("data[%d] = %d\n", i, L.data[i]);
//	}
//}


//练习8
//已知在一维数组A[m+n]中依此存放两个线性表
//(a1,a2,a3,...,am)和(b1,b2,b3,...,bn)
//编写一个函数，将数组中两个顺序表的位置互换
//即将(b1,b2,b3,...,bm)放在(a1,a2,a3,...,am)前面

//算法思想：先将A[m+n]中的全部元素
//(a1,a2,a3,...,am,b1,b2,b3,...,bn)原地逆置为
//(bn,bn-1,bn-2,...,b1,am,am-1,am-2,...,a1)
//再对前n个元素和后m个元素分别使用逆置算法
//#define MaxSize 100
//typedef int ElemType;
//
//typedef struct
//{
//	ElemType data[MaxSize];
//	int length;
//}SqList;
//
////顺序表初始化
//void InitList(SqList* L)
//{
//	for (int i = 0; i < MaxSize; i++)
//	{
//		L->data[i] = 0;
//	}
//	L->length = 0;
//}
//
////打印出顺序表元素
//void ListPrint(SqList L)
//{
//	for (int i = 0; i < L.length; i++)
//	{
//		printf("data[%d]=%d\n", i, L.data[i]);
//	}
//	printf("\n");
//}
//
////顺序表插入
//ListInsert(SqList* L, int i, ElemType e)
//{
//	if (i<1 || i>L->length + 1)
//	{
//
//	}
//	else if (L->length >= MaxSize)
//	{
//
//	}
//	else
//	{
//		for (int j = L->length; j >= i; j--)
//		{
//			L->data[j] = L->data[j - 1];
//		}
//		L->data[i - 1] = e;
//		L->length++;
//	}
//}
//
////顺序表的逆置
//void ListReverse(SqList* L, int left, int right)
//{
//	int mid = (right - left + 1) / 2;
//	ElemType temp;//用来交换顺序表的两个元素的临时变量
//	for (int i = 0; i < mid; i++)
//	{
//		temp = L->data[left + i];
//		L->data[left + i] = L->data[right - i];
//		L->data[right - i] = temp;
//	}
//}
//
//int main()
//{
//	SqList L;
//	InitList(&L);
//	ListInsert(&L, 1, 1);
//	ListInsert(&L, 2, 2);
//	ListInsert(&L, 3, 3);
//	ListInsert(&L, 4, 4);
//	ListInsert(&L, 5, 5);
//	ListInsert(&L, 6, 6);
//	ListInsert(&L, 7, 7);
//	ListInsert(&L, 8, 8);
//	printf("逆序转换前：\n");
//	ListPrint(L);
//	ListReverse(&L, 0, 7);
//	ListReverse(&L, 0, 4);
//	ListReverse(&L, 5, 7);
//	printf("逆序转换后：\n");
//	ListPrint(L);
//}


//练习9
//线性表(a1,a2,a3,...,an)中的元素递增有序
//且按顺序存储于计算机内，要求设计一个算法
//完成用最少时间在表中查找数值为x的元素
//若找到，则将其与后继元素位置相交换
//若找不到，则将其插入表中并使表中元素仍然递增有序

//最少时间→二分查找
//#define MaxSize 10
//typedef struct
//{
//	int data[MaxSize];
//	int length;
//}SqList;
//
//void ListSearchange(SqList*L,int x)
//{
//	int left = 0, mid;
//	int right = L->length - 1;
//	if (L->data[left] > x)
//	{
//		for (int i = L->length - 1; i >= 0; i--)
//		{
//			L->data[i + 1] = L->data[i];
//		}
//		L->data[0] = x;
//		L->length++;
//	}
//	else if (L->data[right] < x)
//	{
//		L->length++;
//		L->data[right + 1] = x;
//	}
//	else
//	{
//		while (left <= right)
//		{
//			mid = (left + right) / 2;
//			if (L->data[mid] == x)
//				break;
//			else if (L->data[mid] < x)
//				left = mid + 1;
//			else
//				right = mid - 1;
//		}
//		if (left > right)
//		{
//			for (int i = L->length - 1; i > right; i--)
//			{
//				L->data[i + 1] = L->data[i];
//			}
//			L->data[left] = x;
//			L->length++;
//		}
//		if (L->data[mid] == x && mid != L->length - 1)
//		{
//			int k = L->data[mid];
//			L->data[mid] = L->data[mid + 1];
//			L->data[mid + 1] = k;
//		}
//	}
//}
//
////打印出顺序表元素
//void ListPrint(SqList L)
//{
//	for (int i = 0; i < L.length; i++)
//	{
//		printf("data[%d]=%d\n", i, L.data[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	SqList L = { {7,12,43,88,96},5 };
//	printf("始源L：\n");
//	ListPrint(L);
//	int x;
//	printf("请输入要查找的数值：");
//	scanf_s("%d", &x);
//	ListSearchange(&L, x);
//	printf("\n终焉L：\n");
//	ListPrint(L);
//}


//练习10[2010统考真题]
//设将n (n>1)个整数存放到一维数组R中
//设计一个在时间和空间两方面都尽可能高效的算法
//将R中保存的序列循环左移p(0<p<n)个位置
//即将R中的数据由(X0,X1,...,Xn-1)变换为
//(Xp, Xp+1,..., Xn-1 , X0, X1..., Xp-1)


//练习11[2011统考真题]
//一个长度为L(L≥1)的升序序列S
//处在第[L/2]个位置的数称为S的中位数
//例如，若序列S1=(11, 13, 15, 17, 19)，则S的中位数是15
//两个序列的中位数是含它们所有元素的升序序列的中位数
//例如，若S2 = (2, 4, 6, 8, 20)，则S1和S2的中位数是11
//现在有两个等长升序序列A和B
//试设计一个在时间和空间两方面都尽可能高效的算法
//找出两个序列A和B的中位数


//练习12[2013统考真题]
//已知一个整数序列A = (a0,a1,...,an-1),
//其中0≤ai<n (0≤i< n)
//若存在ap1 = ap2 = ... = apm = x
//且m >n / 2 (0≤pk< n, 1≤k≤m)
//则称x为A的主元素
//例如A = (0,5,5,3,5,7,5,5)，则5为主元素
//又如A = (0,5,5,3,5,1,5,7)， 则A中没有主元素
//假设A中的n个元素保存在一个一维数组中
//请设计一个尽可能高效的算法，找出A的主元素
//若存在主元素，则输出该元素; 否则输出-1


//练习13[2018 统考真题]
//给定一个含n(n≥1)个整数的数组
//请设计一个在时间上尽可能高效的算法
//找出数组中未出现的最小正整数
//例如，数组 { -5, 3, 2, 3 }中未出现的最小正整数是1
//数组{ 1,2,3 }中未出现的最小正整数是4


//练习14[2020统考真题]
//定义三元组(a, b, c)(a, b, c均为整数)的距离
//D = | a - b | +| b - c | +| c - a | 
//给定3个非空整数集合S、S2和S3
//按升序分别存储在3个数组中
//请设计一个尽可能高效的算法
//计算并输出所有可能的三元组(a, b, c) 
//(a∈S1 ，b∈S2， c∈S3)中的最小距离
//例如S1= { -1,0,9 }，S2 = { -25,-10,10,11 }
//S3 = { 2,9,17,30,41 }，则最小距离为2
//相应的三元组为(9, 10, 9)

