#ifndef PARALLELSERIESCIRCUIT_H
#define PARALLELSERIESCIRCUIT_H
#include <vector>
#include <algorithm>

class ParallelSeriesCircuit
{
    public:
        ParallelSeriesCircuit();
        virtual ~ParallelSeriesCircuit();

        std::vector<double> resistors;

        char GetuserChoice() { return userChoice; }
        void SetuserChoice(char val) { userChoice = val; }

        double GetParallelResistance() { return ParallelResistance; }
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

        double GetTotalResistance() {
        SetTotalResistance();
         return TotalResistance; }
        void SetTotalResistance()
        {
            //TotalResistance = val;
            if (GetuserChoice() == 1) {
            SetParallelResistance();
            TotalResistance = GetParallelResistance();
            } else {
            SetSeriesResistance();
            TotalResistance = GetSeriesResistance();
            }
        }

        void addResistance(double pResistors) {
            resistors.push_back(pResistors);
        }


        double calculateSeriesResistance();
        double calculateParallelResistance();

    protected:

    private:
        char userChoice;
        double ParallelResistance;
        double TotalResistance;
        double SeriesResistance;
};

#endif // PARALLELSERIESCIRCUIT_H
