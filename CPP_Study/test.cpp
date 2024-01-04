//#include <iostream>
//
//using namespace std;
//
//int func(int ini);
//int func1(int ini);
//int main()
//{
//	int i;
//
//	cout << func(626) << endl;;
//	cout << func(76) << endl;;
//	cout << func(376) << endl;;
//
//
//}
//int func(int ini) {
//	if (ini == 0)
//		return 0;
//	if (func1(ini - 1) == 1)
//	{
//		return ini - 1;
//	}
//	else {
//		func(ini - 1);
//	}
//}
//int func1(int ini)
//{
//	int res;
//
//	res = ini * ini;
//	int tini = ini;
//	int t = 10;
//	while (tini)
//	{
//		if (tini < 10) {
//			break;
//		}
//		tini /= 10;
//		t *= 10;
//
//	}
//
//	if (ini == res % t) {
//		return 1;
//	}
//	return 0;
//}