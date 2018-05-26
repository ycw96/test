#include<iostream>
using namespace std;
int main()
{
	double T; //溫度
	bool button = false; //開關先設定關

	while (cin >> T)
	{
		
		if (T < 22) //如果溫度低於22度
		{
			button = true; //開關就打開，電流通過
			cout << "加熱" << endl; //開始加熱
		}
		
		else if (T >= 22) //如果溫度高於22度(包含22度)
		{
			button = false; //開關就關掉，電流不通過
			cout << "斷電" << endl; //就會斷電
		}
		
	}
	return 0;
}
