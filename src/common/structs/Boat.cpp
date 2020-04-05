#include <common/structs/Boat.hpp>

::Structs::Boat::Boat(int8_t _lenght, ::Structs::Point _startPoint, ::Enum::Direction::type _direction){
    length = _lenght;
    startPoint = _startPoint;
    direction = _direction;
}