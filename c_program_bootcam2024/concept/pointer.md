# 포인터 (Pointer): 다른 변수의 메모리 주소를 값으로 저장하는 변수

## 핵심 개념
- 모든 변수는 메모리 주소(address)와 저장된 값(value)을 가진다
- 포인터는 다른 변수의 주소를 자신의 값으로 저장하는 특별한 변수이다
- 포인터를 통해 간접적으로 다른 변수에 접근할 수 있다

# memory segment
## Data Segment
- 정의: 프로그램 실행 중에 생성되는 전역 변수와 정적 변수가 저장되는 메모리 영역
- 특징:
  - 프로그램 시작 시 할당되고 종료 시 해제됨
  - 전역 변수와 정적 변수는 프로그램 전체에서 접근 가능
  - 초기화된 전역 변수와 정적 변수는 Data Segment에 저장되고, 초기화되지 않은 변수는 BSS Segment에 저장됨
- 예시:
  ```c
  int globalVar = 10; // Data Segment
  static int staticVar = 20; // Data Segment    
  ```   
## Stack Segment
- 정의: 함수 호출 시 생성되는 지역 변수와 매개 변수가 저장되는 메모리 영역
- 특징:
  - 함수가 호출될 때마다 새로운 스택 프레임이 생성되고, 함수이 종료되면 해당 프레임이 해제됨
  - 지역 변수는 함수 내에서만 접근 가능
  - 스택은 LIFO(Last In, First Out) 구조
- 예시:
  ```c
  void func() {
      int localVar = 30; // Stack Segment
  }
  ```
## Heap Segment
- 정의: 동적 메모리 할당을 위해 사용되는 메모리 영역
- 특징:
  - 프로그래머가 명시적으로 메모리를 할당하고 해제해야 함
  - 메모리 누수(memory leak)와 단편화(fragmentation) 문제가 발생할 수 있음
  - malloc(), calloc(), realloc() 함수를 사용하여 메모리를 할당하고, free() 함수를 사용하여 해제함
- 예시:
  ```c
  int *ptr = (int *)malloc(sizeof(int) * 10); // Heap Segment
  free(ptr); // 메모리 해제
  ```       
