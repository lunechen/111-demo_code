#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main()
{
    char ch, pre_ch;
    int num_b = 0, num_l = 0, num_u = 0, num_d = 0, num_w = 0, num_line = 0;
    int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0, i = 0, j = 0, k = 0, l =  0, m = 0, n = 0, o = 0;
    int p = 0, q = 0, r = 0, s = 0, t = 0, u = 0, v = 0, w = 0, x = 0, y = 0, z = 0;
    bool plus_line = 1;

    while( (ch = getchar()) != EOF)
    {
        num_b++;

        if (plus_line)
        {
            num_line++;
            plus_line = 0;
        }
        
        if (ch >= 92 && ch <= 122)
        {
            num_l++;
            pre_ch = ch;
        }
        if (ch >= 65 && ch <= 90)
        {
            num_u++;
            pre_ch = ch;
        }
        if (ch >= 48 && ch <= 57)
        {
            num_d++;
            pre_ch = ch;
        }
        if (ch == 32 || ch == 9 || ch == 10 || ch == 11 || ch == 12 || ch == 13)
        {
            num_w++;
            pre_ch = ch;
        }
        if (ch == 10)
        {
            plus_line = 1;
        }
        
        

        if (ch == 65 || ch == 97){
            a++;
        }
        else if (ch == 66 || ch == 98){
            b++;
        }
        else if (ch == 67 || ch == 99){
            c++;
        }
        else if (ch == 68 || ch == 100){
            d++;
        }
        else if (ch == 69 || ch == 101){
            e++;
        }
        else if (ch == 70 || ch == 102){
            f++;
        }
        else if (ch == 71 || ch == 103){
            g++;
        }
        else if (ch == 72 || ch == 104){
            h++;
        }
        else if (ch == 73 || ch == 105){
            i++;
        }
        else if (ch == 74 || ch == 106){
            j++;
        }
        else if (ch == 75 || ch == 107){
            k++;
        }
        else if (ch == 76 || ch == 108){
            l++;
        }
        else if (ch == 77 || ch == 109){
            m++;
        }
        else if (ch == 78 || ch == 110){
            n++;
        }
        else if (ch == 79 || ch == 111){
            o++;
        }
        else if (ch == 80 || ch == 112){
            p++;
        }
        else if (ch == 81 || ch == 113){
            q++;
        }
        else if (ch == 82 || ch == 114){
            r++;
        }
        else if (ch == 83 || ch == 115){
            s++;
        }
        else if (ch == 84 || ch == 116){
            t++;
        }
        else if (ch == 85 || ch == 117){
            u++;
        }
        else if (ch == 86 || ch == 118){
            v++;
        }
        else if (ch == 87 || ch == 119){
            w++;
        }
        else if (ch == 88 || ch == 120){
            x++;
        }
        else if (ch == 89 || ch == 121){
            y++;
        }
        else if (ch == 90 || ch == 122){
            z++;
        }
    }

    printf("Bytes Count: %d\n", num_b);
    printf("Lowercase Count: %d\n", num_l);
    printf("Uppercase Count: %d\n", num_u);
    printf("Digit Count: %d\n", num_d);
    printf("Whitespace Count: %d\n", num_w);
    printf("Line Count: %d\n", num_line);
    printf("A/a: %d, %.3f\n", a, a *1.0 / (num_l + num_u));
    printf("B/b: %d, %.3f\n", b, b *1.0 / (num_l + num_u));
    printf("C/c: %d, %.3f\n", c, c *1.0 / (num_l + num_u));
    printf("D/d: %d, %.3f\n", d, d *1.0 / (num_l + num_u));
    printf("E/e: %d, %.3f\n", e, e *1.0 / (num_l + num_u));
    printf("F/f: %d, %.3f\n", f, f *1.0 / (num_l + num_u));
    printf("G/g: %d, %.3f\n", g, g *1.0 / (num_l + num_u));
    printf("H/h: %d, %.3f\n", h, h *1.0 / (num_l + num_u));
    printf("I/i: %d, %.3f\n", i, i *1.0 / (num_l + num_u));
    printf("J/j: %d, %.3f\n", j, j *1.0 / (num_l + num_u));
    printf("K/k: %d, %.3f\n", k, k *1.0 / (num_l + num_u));
    printf("L/l: %d, %.3f\n", l, l *1.0 / (num_l + num_u));
    printf("M/m: %d, %.3f\n", m, m *1.0 / (num_l + num_u));
    printf("N/n: %d, %.3f\n", n, n *1.0 / (num_l + num_u));
    printf("O/o: %d, %.3f\n", o, o *1.0 / (num_l + num_u));
    printf("P/p: %d, %.3f\n", p, p *1.0 / (num_l + num_u));
    printf("Q/q: %d, %.3f\n", q, q *1.0 / (num_l + num_u));
    printf("R/r: %d, %.3f\n", r, r *1.0 / (num_l + num_u));
    printf("S/s: %d, %.3f\n", s, s *1.0 / (num_l + num_u));
    printf("T/t: %d, %.3f\n", t, t *1.0 / (num_l + num_u));
    printf("U/u: %d, %.3f\n", u, u *1.0 / (num_l + num_u));
    printf("V/v: %d, %.3f\n", v, v *1.0 / (num_l + num_u));
    printf("W/w: %d, %.3f\n", w, w *1.0 / (num_l + num_u));
    printf("X/x: %d, %.3f\n", x, x *1.0 / (num_l + num_u));
    printf("Y/y: %d, %.3f\n", y, y *1.0 / (num_l + num_u));
    printf("Z/z: %d, %.3f\n", z, z *1.0 / (num_l + num_u));
}
