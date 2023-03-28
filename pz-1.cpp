using namespace std;

int main(void) {
int vector[] = { 3, -5, 7, 10, -4, 14, 5, 2, -13 };
int n = sizeof(vector) / sizeof(vector[0]);
int *ptr = vector; // вказівник на перший елемент масиву
int min_val = *ptr; // ініціалізуємо мінімальне значення першим елементом масиву

// пройдемося по всім елементам масиву, порівнюючи їх з поточним мінімумом
for (int i = 1; i < n; i++) {
    if (*(ptr + i) < min_val) {
        min_val = *(ptr + i);
    }
}

cout << "Найменший елемент масиву: " << min_val << endl;

return 0;
}
