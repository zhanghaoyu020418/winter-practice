#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int main()
//{
//	//一维数组
//	int arr1[10];
//	int *p1 = arr1;        //存放的是一维数组的首元素，一个元素的地址
//	int (*p2)[10] = &arr1; //存放的是一维数组的地址，p2是一个行指针
//	//二维数组
//	int arr2[2][3];
//	int(*p3)[3] = arr2;    //存放的是二维数组的首元素，是一个一维数组的地址，是一个行指针
//	int(*p4)[2][3] = &arr2;//存放的是二维数组的地址
//	return 0;
//}


//#include <stdio.h>
//
//void function(char * str)
//{
//	printf("I like study!\n");
//}
//
//int main()
//{
//	void(*p1)(char*) = &function;
//	void(*p2)(char*) = function;
//
//	(*p1)("I like study");
//	p2("I like study");
//
//	return 0;
//}



//#include <stdio.h>
//
//int main()
//{
//
//
//	(  *(void(*)())  0  )();
//	//调用0地址处的函数，该函数无参数，返回值为void
//	//(void (*)())0  是将0当做地址并强制类型转换成一个函数的地址，
//	//*解引用调用这个函数(由上面介绍可知可以不用解引用，直接把函数名当做函数调用)
//	//最外面的()是在调用这个函数
//
//
//
//	void(*     signal(int,void(*)(int) )    )(int);
//	//这是对signal函数的声明，
//	//该函数的一个参数为int ,另一个参数为指向函数参数为int 返回值为void 的函数指针
//	//signal函数的返回值为指向函数参数为int ，返回值为void 的函数指针
//
//
//	return 0;
//}

//#include <stdio.h>
//
//void function(int x, int y)
//{
//
//}
//
//int main()
//{
//	typedef void(*pfun_t)(int, int);   //给void (*)(int , int)；类型的函数指针起别名叫pfun_t
//
//	typedef int(*pfun_c)(char*, char); //给int(*)(char*, char);类型的函数指针起别名叫pfun_c
//
//
//	void(*p1)(int, int) = function;
//
//	//void(*)(int, int) p = function;  这样写实错误的
//
//	pfun_t p2 = function;          //上面两个完全等价
//
//	return 0;
//}


