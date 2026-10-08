#pragma once

#include <string>
#include <vector>

#include "duplication/Forecast.h"

namespace refactoring::duplication {

class WeatherReport {
public:
    void formatDailyReport(const std::vector<Forecast> &forecasts, std::vector<std::string> &output);
    std::string capitaliseFirstCharacter(std::string period);
};

} // namespace refactoring::duplication
