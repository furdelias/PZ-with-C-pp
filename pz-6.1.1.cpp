bool isPrime(int n) {
    // Перевірка чи число менше 2, якщо так, то воно не може бути простим
    if (n < 2) {
        return false;
    }
    // Перевірка чи число рівне 2, якщо так, то воно є простим
    if (n == 2) {
        return true;
    }
    // Перевірка чи число є парним, якщо так, то воно не може бути простим
    if (n % 2 == 0) {
        return false;
    }
    // Перевірка всіх непарних чисел від 3 до кореня з числа n
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) {
            return false;
        }
    }
    // Якщо число пройшло всі перевірки, то воно є простим
    return true;
}
