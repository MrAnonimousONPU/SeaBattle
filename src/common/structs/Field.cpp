#include <common/structs/Field.hpp>

::Structs::Field::Field(const uint8_t rows, const uint8_t columns) 
    : m_rows{rows}
    , m_columns{columns}
    , m_field(m_rows, std::vector<::Enum::FieldState::type>(m_columns, ::Enum::FieldState::Empty))
{
};

::Enum::ErrorMessage::type Structs::Field::setCellState(::Structs::Point& point, ::Enum::FieldState::type state)
{
    try {
        m_field[point.x][point.y] = state;
        return ::Enum::ErrorMessage::SUCCES;
    } catch (...) {
        return ::Enum::ErrorMessage::FAIL;
    }
};

::Enum::FieldState::type Structs::Field::getCellState(::Structs::Point& point) const
{
    return m_field[point.x][point.y];
};