#pragma once

#include "mldsp_utils_c_inc.hpp"

/**
 * @file Index.hpp
 * @brief Wrapper around fundamental integer type
 * for read and write pointer buffer reading.
 * 
 * @date 2025-08-09
 * @author Zachary Miller
 */

class Index
{
public:

    /// @brief Default constructor.
    Index() = default;

    /// @brief Parameterized constructor.
    /// @param val Target initial index position.
    /// @param bounds Maximum length of index's intended buffer.
    Index(int val = 0, const int bounds = 0) : mBounds(bounds), mPos(val % mBounds), mInitPos(mPos) {}

    /
    Index(Index& other) : mPos(other.mPos), mInitPos(other.mInitPos), mBounds(other.mBounds) {}

    operator int &() { return mPos; }
    int* operator &() { return &mPos; }

    /// @brief Increase the index and wrap if beyond the buffer size.
    /// @param amount is how much the index should increase by.
    inline void increment (const size_t amount = 1)
    {
        assert(mBounds > 0);
        mPos = (mPos + amount) % mBounds;
    }

    /// @brief Reset index to initialized position.
    inline void reset() { mPos = mInitPos; }

private:

    int mPos;
    const int mInitPos, mBounds;

};