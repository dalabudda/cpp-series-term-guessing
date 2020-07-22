#ifndef SERIES_H_INCLUDED
#define SERIES_H_INCLUDED

class Series
{
    public:
        Series(const int first_term, const int series_modifier);
        virtual int getNthTerm(const int n);
};

class ArithmeticSeries: public Series
{
    public:
        ArithmeticSeries(const int first_term, const int series_modifier);
        int getNthTerm(const int n);
};

class GeometricSeries: public Series
{
    public:
        GeometricSeries(const int first_term, const int series_modifier);
        int getNthTerm(const int n);
};

#endif // SERIES_H_INCLUDED
