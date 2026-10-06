#include <stdio.h>

int main()
{
    int arr[] = {5, 3, 8, 1, 2};
    int n = 5;

    int i, j;
    int min;
    int temp;

    // 배열의 처음부터 차례대로 정렬
    for (i = 0; i < n - 1; i++)
    {
        // 현재 위치를 최솟값의 위치라고 가정
        min = i;

        // i 다음 위치부터 배열의 끝까지 비교
        for (j = i + 1; j < n; j++)
        {
            // 더 작은 값이 발견되면
            if (arr[j] < arr[min])
            {
                // 최솟값의 위치를 변경
                min = j;
            }
        }

        // 찾은 최솟값과 현재 위치의 값을 교환
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    // 정렬된 배열 출력
    printf("선택 정렬 결과: ");

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
