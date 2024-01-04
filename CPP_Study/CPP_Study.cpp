#include "define.h"
#include <iostream>
using namespace std;

#define SECTION 변수



//함수
void PrintHelloWorld(void);//출력
void PrintNumber(int number); //인자출력 
int MultiplyBy2(int num);//2를 곱하여 결과물
int MultiplyBy(int num1, int num2);

void increaseHp(int hp)//지역변수테스트 
//--

//전역변수
 int globalValue = 0;

//--
int main()
{
	//24.01.04 분기문
#if SECTION == 분기문

	int  hp = 100;
	int damage = 100;

	hp -= damage;
	bool isDead = (hp <= 0);//처치 파정

	//몬스터가 죽으면 경험치 추가
	//어셈블리에서 CMP, JMP


	//3중첩 이상시 가독성이 떨어짐

	//if else 문
	if (isDead)
		cout << "몬스터를 처치 했습니다." << endl;
	else if (hp <= 20)
		cout << "몬스터가 도망가고 있습니다." << endl;
	else
		cout << "몬스터가 반격했습니다." << endl;


	const int ROCK = 0;
	const int PAPER = 1;
	const int SCISSORS = 2;

	int input = ROCK;

	if (input == ROCK)
		cout << "바위 " << endl;
	else if (input == PAPER)
		cout << "보 " << endl;
	else if (input == SCISSORS)
		cout << "가위 " << endl;
	else
		cout << "뭘 낸거냐?" << endl;

	//swtich-case 문
	switch (input)
	{
	case ROCK:
		cout << "바위 " << endl;
		break;
	case PAPER:
		cout << "보 " << endl;
		break;
	case SCISSORS:
		cout << "가위 " << endl;
		break;
	default:
		cout << "뭘 낸거냐?" << endl;
		break;
	}




	//24.01.04 반복문
#endif

	//24.01.04 반복문
#if SECTION == 반복문

	//한번만 실행하는 것이 아니라 특정 조건까지 계속 반복해야 하는 상황
	/*
	while (조건식)
	{
		명령문;
	}

		do
	{

	}while(조건식)


	for (초기식;조건식;제어식) {

	}


	break; continue;
	break : 반복문에서 빠져나갈 것
	continue : 다음 반복을 바로 실행.
	*/

	/*int round = 1;
	int hp = 100;
	int damage = 20;

	while (true)
	{
		hp -= damage;
		if (hp < 0)
			hp = 0;
		cout << "Round " << round << " 몬스터 체력 " << hp << endl;


		if (hp == 0)
		{
			cout << "몬스터 처치" << endl;
			break;
		}
		if (round == 5)
		{
			cout << "제한 라운드 종료" << endl;
			break;
		}
		round++;
	}*/

	//연습 문제
	/*int input;

	cout << "N * N개의 별" << endl;
	cin >> input;
	for (int i = 0; i < input; i++)
	{
		for (int j = 0; j < input; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

	cout << "1개부터 줄마다 개수 증가"<<endl;
	cin >> input;
	for (int i = 0; i < input; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

	cout << "줄마다 1개씩 감소" << endl;
	cin >> input;
	for (int i = 0; i < input; i++)
	{
		for (int j = i; j < input; j++)
		{
			cout << "*";
		}
		cout << endl;
	}*/

	//가위바위보

	srand(time(0));
	bool play = true;
	int count = 0;
	int win = 0;
	const int SCISSORS = 1;
	const int ROCK = 2;
	const int PAPER = 3;

	while (play)
	{
		int com_Value = rand() % 3 + 1;
		int input;

		cout << "가위(1) 바위(2) 보(3) 입력 해주세요 ." << endl;
		cout << "현재 승률 : ";
		if (count == 0)
			cout << "없음" << endl;
		else
			cout << 100 * win / count << endl;
		cin >> input;


		switch (input)
		{
		case SCISSORS:
			switch (com_Value)
			{
			case SCISSORS:

				cout << "플레이어(가위) vs 컴퓨터(가위) " << endl << "비겼습니다.";
				break;

			case ROCK:
				count++;
				cout << "플레이어(가위) vs 컴퓨터(바위) " << endl << "졌습니다.";
				break;

			case PAPER:
				count++;
				win++;
				cout << "플레이어(가위) vs 컴퓨터(보) " << endl << "이겼습니다.";

				break;

			}
			break;
		case ROCK:
			switch (com_Value)
			{
			case SCISSORS:
				count++;
				win++;
				cout << "플레이어(바위) vs 컴퓨터(가위) " << endl << "이겼습니다.";
				break;

			case ROCK:

				cout << "플레이어(바위) vs 컴퓨터(바위) " << endl << "비겼습니다.";
				break;

			case PAPER:
				count++;
				cout << "플레이어(바위) vs 컴퓨터(보) " << endl << "졌습니다.";
				break;

			}
			break;
		case PAPER:
			switch (com_Value)
			{
			case SCISSORS:
				count++;
				cout << "플레이어(보) vs 컴퓨터(가위) " << endl << "졌습니다.";
				break;

			case ROCK:
				count++;
				win++;
				cout << "플레이어(보) vs 컴퓨터(바위) " << endl << "이겼습니다.";
				break;

			case PAPER:

				cout << "플레이어(보) vs 컴퓨터(보) " << endl << "비겼습니다.";
				break;

			}
			break;
		default:
			play ^= play;
			break;
		}
		cout << endl;
		cout << endl;


	}


#endif

	//24.01.04 열거형
#if SECTION == 열거형
	//숫자를 지정하지 않으면 첫 값은 0 부터 시작.
	//메모리를 붙잡지 않아서 더 좋을 수 있음 const에 비해
	enum ENUM_SRP
	{

		ENUM_SCISSORS = 1,
		ENUM_ROCK,
		ENUM_PAPER,

	};
	//# 이 붙은 건 -> 전처리 지시문

#endif


	//24.01.04 함수
#if SECTION == 함수
	/*
	input , output
	반환타입 함수이름(인자타입 매개변수)
	{
		return ;
	}

	타입: char short int float double

	*/
	//PrintHelloWorld();
	//PrintNumber(MultiplyBy(3,5));

#endif

	//24.01.04 지역변수
#if SECTION == 변수
	//전역변수 데이터영역
	//함수 내부에서 언제든지 사용가능한 것
	//지역변수 스택영역
	//그 함수 내부에서만 사용 가능한 것.
	
	int hp = 1;
	cout << "Increase 호출 전 : " << hp << endl;//결과값 1
	increaseHp(hp);//void increaseHP(int hp)
	cout << "Increase 호출 전 : " << hp << endl;//결과값 1
	//[매개변수][RET주소][지역변수]...[매개변수][RET주소][지역변수] 형태

#endif


	return 0;
}

void PrintHelloWorld(void)
{
	cout << "HelloWorld" << endl;
}
void PrintNumber(int number)
{
	cout << "넘겨 주신 숫자는 " << number << " 입니다." << endl;
}
int MultiplyBy2(int num)
{
	return num * 2;
}
int MultiplyBy(int num1,int num2)
{
	return num1 * num2;
}

void increaseHp(int hp)
{
	hp++;
}