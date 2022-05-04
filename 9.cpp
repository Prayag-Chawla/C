class test {
    double d;
    int m;

    public:
    test() {
        d=0;
        m=0;
    }

    test(double n) {
        d=n;
    }

    const test operator+(const test& t) {
        test temp;
        temp.d = d+ t.d;
        return temp;
    }
};

int main() {
    test t1(1.2);
    test t2(2.5);
    test t3, t4;
    t3= t1+ t2;
    t4 = t3 + 1.0;
    return 0;
}