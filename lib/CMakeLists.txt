add_library(home_appliances
    src/appliance.cpp
    src/refrigerator.cpp
    src/washingmachine.cpp
    src/microwave.cpp
)

target_include_directories(home_appliances PUBLIC include)