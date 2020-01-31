#ifndef PARALLELANDSERIESCIRCUIT_H
#define PARALLELANDSERIESCIRCUIT_H
#include <vector>
#include <algorithm>
#include <iostream>


class ParallelAndSeriesCircuit
{
    public:
        ParallelAndSeriesCircuit();
        virtual ~ParallelAndSeriesCircuit();

        std::vector<double> resistors;

        char GetuserChoice() { return userChoice; }
        void SetuserChoice(char val) { userChoice = val; }

        double GetParallelResistance() {
        return ParallelResistance; }
        void SetParallelResistance()
        {
        //ParallelResistance = val;
            double TotalResistance = 0;
            for (int i = 0; i < resistors.size(); i++) {
                TotalResistance = 1 /i + TotalResistance;
            }
            ParallelResistance = 1 / TotalResistance;
        }


        double GetSeriesResistance() { return SeriesResistance; }
        void SetSeriesResistance()
        {
        //SeriesResistance = val;
        double TotalResistance = 0;
            for (int i = 0; i < resistors.size(); i++) {
            TotalResistance = i + TotalResistance;
            }
        SeriesResistance = TotalResistance;
        }

        double GetTotalResistance() { return TotalResistance; }
        void SetTotalResistance()
        {
            //TotalResistance = val;
            if (GetuserChoice() == 1) {
            TotalResistance = GetParallelResistance();
            } else {
            TotalResistance = GetSeriesResistance();
            }
        }

        void addResistance(double pResistors) {
            resistors.push_back(pResistors);
        }

    protected:

    private:
        char userChoice;
        double ParallelResistance;
        double TotalResistance;
        double SeriesResistance;
};

#endif // PARALLELANDSERIESCIRCUIT_H
