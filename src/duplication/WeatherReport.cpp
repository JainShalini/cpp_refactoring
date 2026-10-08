#include "duplication/WeatherReport.h"

#include <charconv>

namespace refactoring::duplication {

namespace {

// Mimics java.lang.Double#toString: shortest round-trip representation,
// always with a decimal point (e.g. 8.0, not 8).
std::string javaDoubleToString(double value) {
    char buffer[64];
    auto result = std::to_chars(buffer, buffer + sizeof(buffer), value);
    std::string text(buffer, result.ptr);
    if (text.find('.') == std::string::npos &&
        text.find('e') == std::string::npos &&
        text.find('E') == std::string::npos) {
        text += ".0";
    }
    return text;
}

} // namespace

void WeatherReport::formatDailyReport(const std::vector<Forecast>& forecasts, std::vector<std::string>& output) {

    for (const Forecast& forecast : forecasts) {
        
        std::string period = capitaliseFirstCharacter(forecast.getPeriod());
        std::string line =   period + ": " + javaDoubleToString(forecast.getTemperature()) + "°C, "
                + forecast.getCondition() + ", wind " + std::to_string(forecast.getWindSpeed()) + "km/h";
        output.push_back(line);

    }
}

std::string WeatherReport::capitaliseFirstCharacter(std::__1::string period)
{
    period[0] = static_cast<char>(std::toupper(static_cast<unsigned char>(period[0])));
    return period;
}

} // namespace refactoring::duplication
