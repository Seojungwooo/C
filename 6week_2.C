#include <stdio.h>

int main()
{
    int arr[] = {5, 3, 8, 1, 2};
    int n = 5;

    int i, j;
    int key;

    // 두 번째 원소부터 정렬 시작
    // 첫 번째 원소는 이미 정렬되어 있다고 생각
    for (i = 1; i < n; i++)
    {
        // 현재 정렬할 값을 key에 저장
        key = arr[i];

        // key의 바로 앞 원소부터 비교
        j = i - 1;

        // j가 배열 범위 안에 있고
        // 현재 값이 key보다 크다면
        while (j >= 0 && arr[j] > key)
        {
            // 큰 값을 한 칸 뒤로 이동
            arr[j + 1] = arr[j];

            // 한 칸 앞으로 이동
            j--;
        }

        // 빈 자리에 key를 삽입
        arr[j + 1] = key;
    }

    // 정렬된 배열 출력
    printf("삽입 정렬 결과: ");

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
