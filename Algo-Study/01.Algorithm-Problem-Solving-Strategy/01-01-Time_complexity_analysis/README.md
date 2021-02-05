# 알고리즘의 시간 복잡도 분석

</br>

## 00. 알고리즘 이란?

주어진 문제를 해결하기 위한 방법을 명료하게 서술한 것.

</br>

### 예시

서울 신촌역에서 춘천에 가는 방법  

</br>

- **⭕정당한 알고리즘의 예시**

1. 지하철 2호선을 타고 시청역으로 간다.
2. 지하철 1호선으로 갈아타고 청량리역으로 간다.
3. 경춘선을 타고, 춘천역에서 내린다.

</br>

- **❌정당하지 않은 알고리즘의 예시**

1. 강동구쪽으로 가는 버스를 탄다.

2. 동서울 버스 터미널 근처에 온 것 같으면 내린다.

3. 춘천 쪽으로 가는 버스로 갈아타고, 도착하면 내린다.

   </br>

>  🔅위 예시가 정당하지 않은 이유 : 일련의 방법이 본질적으로 **모호**하다.

</br>

### 알고리즘을 평가하는 두 가지의 큰 기준

1. **시간**

   알고리즘이 적은 시간을 사용한다는 것은 더 빠르게 동작한다는 것.

2. **공간**

   알고리즘이 적은 공간을 사용한 다는 것은 더 적은 용량의 메모리를 사용한다는 것.
   
   </br>
   
   </br>
   
   </br>
   
   </br>

## 01. 알고리즘 속도 측정 방법

> 좀더 빠른 알고리즘을 만들기 위해 가장 먼저 해야 할 일은 알고리즘의 속도를 측정하는 것.

</br>

### 💥반복문이 지배한다.

대개 알고리즘의 수행시간을 측정할때는 **반복문이 수행되는 횟수**로 측정한다.

- 이때 반복문의 수행 횟수는 **입력 크기에 대한 함수**로 표현한다.

</br>

**😀[ex 01) [주어진 배열에서 가장 많이 등장하는 숫자를 반환](https://github.com/coke05288/Algorithm/tree/master/Algo-Study/01.Algorithm-Problem-Solving-Strategy/01-01-Time_complexity_analysis/01-01-01-Introduction/01-01-01-가장많은수.cpp)]**

해당 알고리즘은 주어진 배열 A에 등장하는 A[i]의 개수를 순회하며 체크한다.

> 알고리즘 수행시간: N^2

</br>

**😀[ex 02) [주어진 배열에서 가장 많이 등장하는 숫자를 반환2 : 숫자의 범위가 적을때](https://github.com/coke05288/Algorithm/blob/master/Algo-Study/01.Algorithm-Problem-Solving-Strategy/01-01-Time_complexity_analysis/01-01-01-Introduction/01-01-01-가장많은수2.cpp)]**

해당 문제에서 처럼 주어진 배열의 범위가 작을 때는 빈도수 배열을 순회하면서 최대 위치를 찾을 수 있다.

> 알고리즘 수행시간 : N + 100 -> N

</br>

</br>

</br>

</br>

## 02. 선형 시간 알고리즘

> 입력의 크기 N에 정비례하는 알고리즘을 선형 시간(Linear Time)알고리즘 이라고한다.

</br>

**😀[ex 01) [이동 평균 구하기](https://github.com/coke05288/Algorithm/tree/master/Algo-Study/01.Algorithm-Problem-Solving-Strategy/01-01-Time_complexity_analysis/01-01-02-Linear_time_Algorithm/01-01-02-이동평균.cpp)]**

해당 알고리즘은 M(이동평균)을 기준으로 M개많큼의 평균값을 순차적으로 연산한다.

> 알고리즘 수행시간 : M x (N - M +1)번

</br>

**😀[ex 02) [이동 평균 구하기 2 : 중복되는 연산 제거](https://github.com/coke05288/Algorithm/tree/master/Algo-Study/01.Algorithm-Problem-Solving-Strategy/01-01-Time_complexity_analysis/01-01-02-Linear_time_Algorithm/01-01-02-이동평균2.cpp)]**

위 예제에서 중복된 연산을 제거.  M-1일까지의 합을 구한 뒤, M + i 값을 더해주고, i - M + 1 번째 값을 빼준다.

> 알고리즘 수행시간 : M - 1 + (N - M + 1) -> N

</br>

</br>

</br>

</br>

## 03. 선형 이하 시간 알고리즘

> 입력의 크기가 커지는 것보다 수행 시간이  느리게 증가하는 알고리즘을 선형 이하 시간(sublinear time)알고리즘 이라고 한다.

