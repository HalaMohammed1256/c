#include <stdio.h>

int find_nth_term(int n, int a, int b, int c) {
  int ans[n];
  ans[0] = a;
  ans[1] = b;
  ans[2] = c;
  for(int i = 3; i < n; i++){
    ans[i] = ans[i-1] + ans[i-2] + ans[i-3];
  }


  return ans[n-1];
}

int main() {
    int n, a, b, c;

    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);

    printf("%d", ans);
    return 0;
}
