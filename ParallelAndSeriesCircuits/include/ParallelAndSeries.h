#ifndef PARALLELANDSERIES_H
#define PARALLELANDSERIES_H


class ParallelAndSeries
{
    public:
        ParallelAndSeries();
        virtual ~ParallelAndSeries();

        double GetParallelResistance() { return ParallelResistance; }
        void SetParallelResistance(double val) { ParallelResistance = val; }
        double GetSeriesResistance() { return SeriesResistance; }
        void SetSeriesResistance(double val) { SeriesResistance = val; }

    protected:

    private:
        double ParallelResistance;
        double SeriesResistance;
};

#endif // PARALLELANDSERIES_H
