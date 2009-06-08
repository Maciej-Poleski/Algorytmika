char s[MAX]; // Slowo s[1..m].
int m;
int PREF[MAX];

void licz_PREF()
{
  PREF[1] = -1; // No bo niby ile?
  int i = 2;
  int t = 0;
  while (i <= m) {
    // Niezmiennik: t <= PREF[i].

    // Krok 1: Poszerzenie ile sie da.
    while (s[i + t] == s[1 + t]) t++;
    PREF[i] = t;

    // Krok 2: Spacer zgodnie z troche mniej magiczna obserwacja.
    int k = 1;
    while (k < PREF[i] && PREF[1 + k] != PREF[i] - k) {
      PREF[i + k] = min(PREF[1 + k], PREF[i] - k);
      k++;
    }
    t -= k; t = max(0, t);
    i += k;
  }
}
