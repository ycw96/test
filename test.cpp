#include<iostream>
using namespace std;
int main()
{
	double T; //�ū�
	bool button = false; //�}�����]�w��

	while (cin >> T)
	{
		
		if (T < 22) //�p�G�ūקC��22��
		{
			button = true; //�}���N���}�A�q�y�q�L
			cout << "�[��" << endl; //�}�l�[��
		}
		
		else if (T >= 22) //�p�G�ūװ���22��(�]�t22��)
		{
			button = false; //�}���N�����A�q�y���q�L
			cout << "�_�q" << endl; //�N�|�_�q
		}
		
	}
	return 0;
	


}