#ifndef _SEA_BATTLE_COMMON_STRUCTS_FIELD_HPP
#define _SEA_BATTLE_COMMON_STRUCTS_FIELD_HPP

#include <common/structs/Point.hpp>
#include <common/constants/ErrorMessage.hpp>
#include <common/constants/FieldState.hpp>
#include <common/constants/FieldConstants.hpp>

#include <vector>

namespace Structs {

class Field {
public:
    Field() = default;
    Field(const uint8_t rows = ::Constants::Field::RowCount, const uint8_t columns = ::Constants::Field::ColumnCount);

    inline uint8_t rows() const;
    inline uint8_t columns() const;

    ::Enum::FieldState::type getCellState(const ::Structs::Point& point) const;
    ::Enum::ErrorMessage::type setCellState(const ::Structs::Point& point, ::Enum::FieldState::type state);

private:
    const uint8_t m_rows;
    const uint8_t m_columns;

    std::vector<std::vector<::Enum::FieldState::type>> m_field;
};

uint8_t Field::rows() const
{
    return m_rows;
};

uint8_t Field::columns() const
{
    return m_columns;
};

} //Structs

#endif //_SEA_BATTLE_COMMON_STRUCTS_FIELD_HPP