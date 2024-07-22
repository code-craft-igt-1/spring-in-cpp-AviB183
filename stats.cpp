#include "stats.h"

namespace Statistics
{
    Stats ComputeStatistics(const std::vector<double>& data)
    {
        Stats statsInfo;

        if (0 == data.size())
            return statsInfo;

        statsInfo.min = statsInfo.max = statsInfo.average = data[0];
        for (int i = 1; i < data.size(); ++i)
        {
            if (data[i] < statsInfo.min)
                statsInfo.min = data[i];

            if (data[i] > statsInfo.max)
                statsInfo.max = data[i];

            statsInfo.average += data[i];
        }

        statsInfo.average /= data.size();

        return statsInfo;
    }
}
