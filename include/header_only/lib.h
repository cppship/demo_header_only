#pragma once

#include <string_view>
#include <fmt/core.h>

namespace header_only {

inline std::string concat(std::string_view a, std::string_view b)
{
    return fmt::format("{}-{}", a, b);
}

}