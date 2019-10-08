typedef double (*Function)(double);
double derived(Function f, double x);
double derived(Function f, double x)
{
    const double h = 0.000000001;
    return (f(x + h) - f(x))/h;
}