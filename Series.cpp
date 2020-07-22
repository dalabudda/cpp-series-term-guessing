class Series
{
    protected:
        int first, modifier;

    public:
        Series(const int first_term, const int series_modifier)
        {
            first = first_term;
            modifier = series_modifier;
        }

        virtual int getNthTerm(const int n);
};


class ArithmeticSeries: public Series
{
    public:
        ArithmeticSeries(const int first_term, const int series_modifier);
        int getNthTerm(const int n)
        {
            return first + (n-1)*modifier;
        }
};

ArithmeticSeries::ArithmeticSeries(const int first_term, const int series_modifier): Series(first_term, series_modifier) {}


class GeometricSeries: public Series
{
    private:
        int pow(const int base, const int power)
        {
            int result = 1;
            for (int i = 0; i < power; i++)
                result *= base;
            return result;
        }

    public:
        GeometricSeries(const int first_term, const int series_modifier);
        int getNthTerm(const int n)
        {
            return first * pow(modifier, n-1);
        }
};

GeometricSeries::GeometricSeries(const int first_term, const int series_modifier): Series(first_term, series_modifier) {}
