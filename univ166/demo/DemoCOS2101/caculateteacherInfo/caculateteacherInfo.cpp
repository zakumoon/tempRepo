#if 0
teacherInfo.txt
T65001001, �����Ҩ���� (9)
1,   ��				(2)
20, �ӹǹ�շ���͹	    (2)
1,  �дѺ��ԭ��		(1)
1   ʶҹ�Ҿ����		(1)
 
T65001001, 1,20, 1, 1
T65001002, 2,22, 2, 2
T65001003, 1,21, 2, 2
T65001004, 2,22, 1, 2
T65001005, 2,23, 3, 2
T65001006, 2,19, 3, 2
#endif


#define _CRT_SECURE_NO_WARNINGS 
#include <iomanip>
#include <iostream>
#include <cstring>
using namespace std;

struct employee {
	char Tcode[10];
	int sex;
	int age;
	int stat;
	int degr;
	int tyear;
};
int main()
{
	struct employee person[150];
	int    i=0;
	float avg_age, avg_expr;
	//get data

	FILE *fileA;
	int count =0;

	/* Open files for processing */
	fileA = fopen("/home/zk/Downloads/demo/DemoCOS2101/caculateteacherInfo/teacherInfo.txt", "rt");

	cout << "code" << setw(10) << "sex" << setw(4) 
		 << "year" << setw(4) << "degr" << setw(4) << "status" << endl;
	
	while(!feof(fileA))
	{
		char Tcode[100];
		int sex;
		int age;
		int stat;
		int degr;
		int tyear;
		               //T65001001, 1,20, 1, 1
		fscanf(fileA, "%9s,%d,%d,%d,%d, %d", Tcode, &sex, &age, &stat, &degr ,&tyear);
		
		strcpy(person[i].Tcode, Tcode);
		person[i].sex = sex;
		person[i].age = age;
		person[i].tyear = tyear;
		person[i].stat = stat;
		person[i].degr = degr;
		cout << person[i].Tcode << setw(10) << person[i].sex << setw(4)
			<< person[i].tyear << setw(4) << person[i].degr << setw(4) 
			<< person[i].stat << endl;
		i++;
		count++;
	}

	fclose(fileA);

	avg_age = 0;   avg_expr = 0;
	for (i = 0; i < count; i++)
	{
		avg_age = avg_age + person[i].age;
		avg_expr = avg_expr + person[i].tyear;
	}

	avg_age = avg_age / count;
	avg_expr = avg_expr / count;

	cout << "AVG  AGE  = " << avg_age << "\n";
	cout << "AVG  EXPR = " << avg_expr << "\n";
	return 0;
}



