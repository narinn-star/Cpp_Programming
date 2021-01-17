/*
[생성자]
"생성자라는 특별한 멤버 함수를 통해 객체를 초기화"
1. 생성자의 목적은 객체가 생성될 때 필요한 초기 작업을 위함.
2. 생성자 함수는 오직 한 번만 실행.
	- 각 객체마다 객체가 생성되는 시점에 딱 한 번만 자동 실행
3. 생성자 함수의 이름은 클래스 이름과 동일하게 작성.
	- 이로써 생성자는 다른 멤버 함수와 쉽게 구분
4. 생성자 함수의 원형에 리턴 타입 선언 X
	- 생성자 함수는 함수 실행 종료를 위해 return문 사용. 하지만 어떤 값도 리턴 X
	EX) Circle::Circle(){
			...
			return; <- True
		}
		Circle::Circle(){
			...
			return 0; <- False
		}
5. 생성자 중복 가능
	- 한 클래스에 여러개 만들 수 있음. 이름이 모두 같기 때문에, 매개 변수의 개수 또는 타입이 다르게 선언.
	EX) Circle(); <- 매개 변수 없음
		Circle(int r) <- 매개 변수 있음
	- 중복된 생성자 중 하나만 실행됨.

[기본 생성자]
기본 생성자 = 디폴트 생성자(default constructor), 매개 변수 없는 생성자
EX) class Circle{
		Circle(); <- 기본 생성자
	}
1) 기본 생성자가 자동으로 생성되는 경우
	- 생성자가 하나도 없는 클래스의 경우, 컴파일러는 보이지 않게 기본 생성자 삽입.
2) 기본 생성자가 자동으로 생성되지 않는 경우
	- 생성자가 하나라도 선언된 클래스의 경우, 컴파일러는 기본 생성자를 자동 삽입 X
*/