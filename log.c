#include <stdio.h>

typedef long long ll;

ll mod_exp(ll base, ll exp, ll mod) {
    ll result = 1;
    while (exp--) {
        result = (result * base) % mod;
    }
    return result;
}

int main() {
    ll base, target, mod;

    printf("Введіть основу: ");
    scanf("%lld", &base);
    printf("Введіть цільове число: ");
    scanf("%lld", &target);
    printf("Введіть модуль: ");
    scanf("%lld", &mod);

    for (ll exponent = 0, value = 1; exponent < mod; exponent++) {
        if (value == target) {
            printf("log_%lld(%lld) = %lld\n", base, target, exponent);
            return 0;
        }
        value = (value * base) % mod;
    }

    printf("Не вдалося знайти логарифм\n");
    return 1;
}