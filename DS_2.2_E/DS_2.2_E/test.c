#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//��2.2 ��ϰ��
//��ϰ1
//��˳�����ɾ��������Сֵ��Ԫ�أ�����Ψһ��
//���ɺ������ر�ɾԪ�ص�ֵ
//�ճ���λ�������һ��Ԫ���
//��˳���Ϊ�գ�����ʾ������Ϣ���˳�����

//#define MaxSize 10
////����һ��˳���
//typedef struct
//{
//	int data[MaxSize];
//	int length;
//}SqList;
//
////Ѱ��L����СԪ�ص��±�
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
//	/*printf("L�е���СԪ��Ϊ��%d\n", L.data[ret]);*/
//	L.data[ret] = L.data[L.length - 1];
//	L.length--;
//	/*for (int i = 0; i < L.length; i++)
//	{
//		printf("%d ", L.data[i]);
//	}	*/
//	return 0;
//}


//��ϰ2
//���һ����Ч�㷨����˳���L������Ԫ������
//Ҫ���㷨�Ŀռ临�Ӷ�ΪO(1)

//#define MaxSize 10
//typedef struct
//{
//	int data[MaxSize];
//	int length;
//}SqList;
//
////��L�е�����Ԫ������
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


//��ϰ3
//�Գ���Ϊn��˳���L����дһ��ʱ�临�Ӷ�ΪO(n)
//�ռ临�Ӷ�ΪO(1)���㷨
//���㷨ɾ�����Ա�������ֵΪx������Ԫ��

//����ʾ��
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

//��ȷ���1
//��k��¼˳���L�в�����x��Ԫ�ظ���
//������Ҫ�����Ԫ�ظ�����
//ɨ��ʱ��������x��Ԫ���ƶ����±�k��λ�ã�������kֵ
//ɨ��������޸�L�ĳ���
//#define MaxSize 10
//typedef struct
//{
//	int data[MaxSize];
//	int length;
//}SqList;
//
//void ListDelete(SqList* L, int x)
//{
//	int k = 0;//��¼ֵ������x��Ԫ�ظ���
//	for (int i = 0; i < L->length; i++)
//	{
//		if (L->data[i] != x)
//		{
//			L->data[k] = L->data[i];
//			k++;//������x��Ԫ������1
//		}
//	}
//	L->length = k;//˳���L�ĳ��ȵ���k
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

//��ȷ���2
//��k��¼˳���L�е���x��Ԫ�ظ�������ɨ���ͳ��k
//����������x��Ԫ��ǰ��k��λ��
//ɨ��������޸�L�ĳ���
//#define MaxSize 10
//typedef struct
//{
//	int data[MaxSize];
//	int length;
//}SqList;
//
//void ListDelete(SqList* L, int x)
//{
//	int k = 0;//��¼ֵ����x��Ԫ�ظ���
//	int i = 0;
//	while (i < L->length)
//	{
//		if (L->data[i] == x)
//			k++;
//		else
//			L->data[i - k] = L->data[i];
//			��ǰԪ��ǰ��k��λ��
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


//��ϰ4
//������˳�����ɾ����ֵ�ڸ���ֵs��t֮��(s<t)������Ԫ��
//��s��t�������˳���Ϊ�գ�����ʾ������Ϣ���˳�����

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
//	int k = 0;//��¼������
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
//��Ϊ�����������ɾ����Ԫ�ر�Ȼ������������
//�㷨˼�룺
//��Ѱ��ֵ���ڻ����s�ĵ�һ��Ԫ��
//����һ��ɾ����Ԫ�أ�
//Ȼ��Ѱ��ֵ����t�ĵ�һ��Ԫ��
//�����һ��ɾ����Ԫ�ص���һ��Ԫ�أ�
//Ҫ�����Ԫ��ɾ����ֻ��ֱ�ӽ������Ԫ��ǰ��
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
//	Ѱ��ֵ���ڻ����s�ĵ�һ��Ԫ���±�
//	for (int i = 0; i < L->length && L->data[i] < s; i++)
//	{
//		a++;//1
//	}
//	Ѱ��ֵ����t�ĵ�һ��Ԫ���±�
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


//��ϰ5
//��˳�����ɾ����ֵ�ڸ���ֵs��t֮��(s<t)������Ԫ��
//��s��t�������˳���Ϊ�գ�����ʾ������Ϣ���˳�����

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
//	int k = 0;//��¼������
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


//��ϰ6
//������˳�����ɾ��������ֵ�ظ���Ԫ��
//ʹ��������Ԫ�ص�ֵ����ͬ

//#define MaxSize 10
//typedef struct
//{
//	int data[MaxSize];
//	int length;
//}SqList;
//
//void ListDelete(SqList* L)
//{
//	int i, j;//i�洢��һ������ͬ��ָ�룬jΪ����ָ��
//	for (i = 0, j = 1; j < L->length; j++)
//	{
//		������һ�����ϸ�Ԫ��ֵ��ͬ��Ԫ��
//		if (L->data[i] != L->data[j])
//			�ҵ��󣬽�Ԫ��ǰ��
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


//��ϰ7
//����������˳���ϲ�Ϊһ���µ�����˳���
//���ɺ������ؽ��˳���

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


//��ϰ8
//��֪��һά����A[m+n]�����˴���������Ա�
//(a1,a2,a3,...,am)��(b1,b2,b3,...,bn)
//��дһ��������������������˳����λ�û���
//����(b1,b2,b3,...,bm)����(a1,a2,a3,...,am)ǰ��

//�㷨˼�룺�Ƚ�A[m+n]�е�ȫ��Ԫ��
//(a1,a2,a3,...,am,b1,b2,b3,...,bn)ԭ������Ϊ
//(bn,bn-1,bn-2,...,b1,am,am-1,am-2,...,a1)
//�ٶ�ǰn��Ԫ�غͺ�m��Ԫ�طֱ�ʹ�������㷨
//#define MaxSize 100
//typedef int ElemType;
//
//typedef struct
//{
//	ElemType data[MaxSize];
//	int length;
//}SqList;
//
////˳����ʼ��
//void InitList(SqList* L)
//{
//	for (int i = 0; i < MaxSize; i++)
//	{
//		L->data[i] = 0;
//	}
//	L->length = 0;
//}
//
////��ӡ��˳���Ԫ��
//void ListPrint(SqList L)
//{
//	for (int i = 0; i < L.length; i++)
//	{
//		printf("data[%d]=%d\n", i, L.data[i]);
//	}
//	printf("\n");
//}
//
////˳������
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
////˳��������
//void ListReverse(SqList* L, int left, int right)
//{
//	int mid = (right - left + 1) / 2;
//	ElemType temp;//��������˳��������Ԫ�ص���ʱ����
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
//	printf("����ת��ǰ��\n");
//	ListPrint(L);
//	ListReverse(&L, 0, 7);
//	ListReverse(&L, 0, 4);
//	ListReverse(&L, 5, 7);
//	printf("����ת����\n");
//	ListPrint(L);
//}


//��ϰ9
//���Ա�(a1,a2,a3,...,an)�е�Ԫ�ص�������
//�Ұ�˳��洢�ڼ�����ڣ�Ҫ�����һ���㷨
//���������ʱ���ڱ��в�����ֵΪx��Ԫ��
//���ҵ�����������Ԫ��λ���ཻ��
//���Ҳ��������������в�ʹ����Ԫ����Ȼ��������

//����ʱ������ֲ���
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
////��ӡ��˳���Ԫ��
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
//	printf("ʼԴL��\n");
//	ListPrint(L);
//	int x;
//	printf("������Ҫ���ҵ���ֵ��");
//	scanf_s("%d", &x);
//	ListSearchange(&L, x);
//	printf("\n����L��\n");
//	ListPrint(L);
//}


//��ϰ10[2010ͳ������]
//�轫n (n>1)��������ŵ�һά����R��
//���һ����ʱ��Ϳռ������涼�����ܸ�Ч���㷨
//��R�б��������ѭ������p(0<p<n)��λ��
//����R�е�������(X0,X1,...,Xn-1)�任Ϊ
//(Xp, Xp+1,..., Xn-1 , X0, X1..., Xp-1)


//��ϰ11[2011ͳ������]
//һ������ΪL(L��1)����������S
//���ڵ�[L/2]��λ�õ�����ΪS����λ��
//���磬������S1=(11, 13, 15, 17, 19)����S����λ����15
//�������е���λ���Ǻ���������Ԫ�ص��������е���λ��
//���磬��S2 = (2, 4, 6, 8, 20)����S1��S2����λ����11
//�����������ȳ���������A��B
//�����һ����ʱ��Ϳռ������涼�����ܸ�Ч���㷨
//�ҳ���������A��B����λ��


//��ϰ12[2013ͳ������]
//��֪һ����������A = (a0,a1,...,an-1),
//����0��ai<n (0��i< n)
//������ap1 = ap2 = ... = apm = x
//��m >n / 2 (0��pk< n, 1��k��m)
//���xΪA����Ԫ��
//����A = (0,5,5,3,5,7,5,5)����5Ϊ��Ԫ��
//����A = (0,5,5,3,5,1,5,7)�� ��A��û����Ԫ��
//����A�е�n��Ԫ�ر�����һ��һά������
//�����һ�������ܸ�Ч���㷨���ҳ�A����Ԫ��
//��������Ԫ�أ��������Ԫ��; �������-1


//��ϰ13[2018 ͳ������]
//����һ����n(n��1)������������
//�����һ����ʱ���Ͼ����ܸ�Ч���㷨
//�ҳ�������δ���ֵ���С������
//���磬���� { -5, 3, 2, 3 }��δ���ֵ���С��������1
//����{ 1,2,3 }��δ���ֵ���С��������4


//��ϰ14[2020ͳ������]
//������Ԫ��(a, b, c)(a, b, c��Ϊ����)�ľ���
//D = | a - b | +| b - c | +| c - a | 
//����3���ǿ���������S��S2��S3
//������ֱ�洢��3��������
//�����һ�������ܸ�Ч���㷨
//���㲢������п��ܵ���Ԫ��(a, b, c) 
//(a��S1 ��b��S2�� c��S3)�е���С����
//����S1= { -1,0,9 }��S2 = { -25,-10,10,11 }
//S3 = { 2,9,17,30,41 }������С����Ϊ2
//��Ӧ����Ԫ��Ϊ(9, 10, 9)

