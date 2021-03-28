#include <cstdio>
#include <set>

int main(){

    long n; double a, b; scanf("%ld %lf %lf\n", &n, &a, &b);
    std::set<double> s; bool v = 0;
    while(n--){
        long x, y; scanf("%ld %ld\n", &x, &y);
        if(x == a){v = 1;}
        else{s.insert((y - b) / (x - a));}
    }

    printf("%ld\n", s.size() + v);

    return 0;
}
